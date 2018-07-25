#include "chartwidget.h"
#include "ui_chartwidget.h"
#include <QDebug>
#include <QPainter>
#include <QDesktopWidget>
#include <QScreen>
#include <QMessageBox>
#include <QMetaEnum>

ChartWidget::ChartWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChartWidget)
{
    ui->setupUi(this);
    startInit();    //初始化
    ui->statusBar->setText(tr("串口关闭")); //初始状态为“关闭”
    setGeometry(200,0,940,700);                                   //创建窗口
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小
    dataTimer = new QTimer(this); //绘图定时器
    connect(dataTimer,SIGNAL(timeout()),this,SLOT(realtimeDataSlot())); //绘图定时器信号与槽的关联


    ui->progressBar->setRange(0,100);
    ui->progressBar->setValue(20);

    ui->progressBar2->setRange(0,100);
    ui->progressBar2->setValue(20);
    Sleep(2000);
}

void ChartWidget::startInit()   //初始化
{
    ui->StartChartbtn->setEnabled(true);
    ui->StopChartbtn->setEnabled(false);
    ui->kongtiao_on->setEnabled(true);
    ui->kongtiao_off->setEnabled(false);
    ui->chushi_on->setEnabled(false);
    ui->chushi_off->setEnabled(true);
    p1.load(":/on.png");
    p2.load(":/off.png");
    p3.load(":/a.png");
    p4.load(":/b.png");
    p5.load(":/title_white.png");
    p6.load(":/title_orange.png");
    p7.load(":/title_black.png");
    //门限值初始化
    tempup = 40;
    templow = 10;
    humup = 70;
    humlow = 10;
    ui->lightHumLow->setPixmap(p2);
    ui->lightHumUp->setPixmap(p2);
    ui->lightTempLow->setPixmap(p2);
    ui->lightTempUp->setPixmap(p2);
    ui->lanjingling->setPixmap(p3);
    ui->titlelabel->setPixmap(p5);
    //清空文件
    QFile file("E:\\qt\\QTChartApp\\mydata.txt");
    file.open(QFile::WriteOnly|QFile::Truncate);
    file.close();

    i_subject = 0;
    timerdly = TIMER_INTERVAL;  //读数间隔
    readTimerA = new QTimer(this);  //读数定时器
    connect(readTimerA,SIGNAL(timeout()),this,SLOT(readMyComA()));  //读数定时器信号与槽的关联
}

void ChartWidget::setComboBoxEnabled(bool status)   //串口参数控件开关
{
    ui->portNameComboBox->setEnabled(status);
    ui->baudRateComboBox->setEnabled(status);
    ui->dataBitsComboBox->setEnabled(status);
    ui->parityComboBox->setEnabled(status);
    ui->stopBitsComboBox->setEnabled(status);
}

ChartWidget::~ChartWidget()     //析构方法
{
    delete ui;
}


void ChartWidget::on_StartChartbtn_clicked()    //打开串口
{
    struct PortSettings myComSetting = {BAUD115200,DATA_8,PAR_NONE,STOP_1,FLOW_OFF,500};
    QString portName = "\\\\.\\"+ui->portNameComboBox->currentText(); //获取串口名
    myComA = new Win_QextSerialPort(portName,myComSetting,QextSerialBase::EventDriven);

    if(myComA->open(QIODevice::ReadWrite)){
        ui->statusBar->setText(tr("串口打开成功"));
    }else{
        ui->statusBar->setText(tr("串口打开失败"));
        return;
    }

    setComboBoxEnabled(false);  //打开串口后不允许修改串口参数
    readTimerA->start(TIMER_INTERVAL);  //开启读数定时器
    ui->StartChartbtn->setEnabled(false);
    ui->StopChartbtn->setEnabled(true);
    ui->lanjingling->setPixmap(p4);
    setupRealtimeDataDemo(ui->customPlot);
    connect(myComA,SIGNAL(readyRead()),this,SLOT(readMyComA()));
}

void ChartWidget::readMyComA()      //读取数据
{
    QByteArray temp = myComA->readAll();
    QString str = QString(temp);
    QPixmap p;
    bool ok;
    if(!temp.isEmpty())
    {
        if(str.indexOf("Temp is:")>=0)
        {
            QString temprature = str.mid((str.indexOf("Temp is:")+8),2);
            ui->lineEdittemp->setText(temprature);
            tempdata = temprature.toInt(&ok);        
            //温度预警
            if(tempdata>tempup){
                ui->lightTempUp->setPixmap(p1);
                ui->lightTempLow->setPixmap(p2);
            }
            else if(tempdata<templow){
                ui->lightTempUp->setPixmap(p2);
                ui->lightTempLow->setPixmap(p1);
            }
            else{
                ui->lightTempLow->setPixmap(p2);
                ui->lightTempUp->setPixmap(p2);
            }

            on_progressBar_customContextMenuRequested();

            setupRealtimeDataDemo(ui->customPlot);  //画出温度曲线图
        }
        if(str.indexOf("Humidity is:")>=0)
        {
            QString humidty = str.mid((str.indexOf("Humidity is:")+12),2);
            ui->lineEdithum->setText(humidty);
            humdata = humidty.toInt(&ok);
            //湿度预警
            if(humdata>humup){
                ui->lightHumUp->setPixmap(p1);
                ui->lightHumLow->setPixmap(p2);
            }
            else if(humdata<humlow){
                ui->lightHumUp->setPixmap(p2);
                ui->lightHumLow->setPixmap(p1);
            }
            else{
                ui->lightHumLow->setPixmap(p2);
                ui->lightHumUp->setPixmap(p2);
            }

        on_progressBar2_customContextMenuRequested();

            QFile file("E:\\qt\\QTChartApp\\mydata.txt");
            if(!file.open(QFile::ReadWrite|QIODevice::Append|QIODevice::Text))
            {
                QMessageBox::warning(this,tr("Error"),tr("write file mydata.txt error：%1").arg(file.errorString()));
                return;
            }
            QTextStream out(&file);
            QTime current_time =QTime::currentTime();
            out << current_time.toString() << endl << "temprature:" << "    " << tempdata << "C" << endl << "humidity:" << "      " << humdata << "%" << endl << endl;
            file.close();
            qDebug()<<"write successfullly";
        }
    }
}

void ChartWidget::setupRealtimeDataDemo(QCustomPlot *customPlot)    //设置图层
{
#if QT_VERSION < QT_VERSION_CHECK(4,7,0)
    QMessageBox::critical(this,"","You're using Qt<4.7,the realtime data demo needs functions that are available with QT4.7 to work properly");
#endif
    //demoName = "Real Time Data Demo";
    customPlot->addGraph();     //添�� 图层0
    customPlot->graph(0)->setPen(QPen(Qt::red));   //red line
    customPlot->graph(0)->setName("temprature");
    customPlot->graph(0)->setBrush(QBrush(QColor(240,255,200)));
    customPlot->graph(0)->setAntialiasedFill(false);
    customPlot->addGraph();     //添�� 图层1
    customPlot->graph(1)->setPen(QPen(Qt::blue));    //blue line
    customPlot->graph(1)->setName("humidty");
    customPlot->graph(0)->setChannelFillGraph(customPlot->graph(1));
    customPlot->addGraph();     //添�� 图层2
    customPlot->graph(2)->setPen(QPen(Qt::red));   //red dot
    customPlot->graph(2)->setLineStyle(QCPGraph::lsNone);
    customPlot->graph(2)->setScatterStyle(QCPScatterStyle::ssDisc);
    customPlot->addGraph();     //添�� 图层3
    customPlot->graph(3)->setPen(QPen(Qt::blue));    //blue dot
    customPlot->graph(3)->setLineStyle(QCPGraph::lsNone);
    customPlot->graph(3)->setScatterStyle(QCPScatterStyle::ssDisc);

    customPlot->xAxis->setTickLabelType(QCPAxis::ltDateTime);
    //customPlot->xAxis->setLabel("Time");
    customPlot->xAxis->setDateTimeFormat("hh:mm:ss");
    customPlot->xAxis->setAutoTickStep(false);
    customPlot->xAxis->setTickStep(2);
    customPlot->axisRect()->setupFullAxesBox();
    //make left and bottom axes transfer their ranges to right and top axes:
    connect(customPlot->xAxis,SIGNAL(rangeChanged(QCPRange)),customPlot->xAxis2,SLOT(setRange(QCPRange)));
    connect(customPlot->yAxis,SIGNAL(rangeChanged(QCPRange)),customPlot->yAxis2,SLOT(setRange(QCPRange)));
    //setup a timer that repeated calls Main Window::realtimeDataSlot:
    dataTimer->start(30);   //Interval 10 means to refresh as fast as possible
    //customPlot->legend->setVisible(true);
}

void ChartWidget::realtimeDataSlot()    //绘制曲线
{
    //key的单位是秒
    double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0;

    static double lastPointKey = 0;
    if(key-lastPointKey>0.01)   //at most add point every 10ms
    {
        //add data to lines
        ui->customPlot->graph(0)->addData(key,tempdata);
        ui->customPlot->graph(1)->addData(key,humdata);
        //set data of dots
        ui->customPlot->graph(2)->clearData();
        ui->customPlot->graph(2)->addData(key,tempdata);
        ui->customPlot->graph(3)->clearData();
        ui->customPlot->graph(3)->addData(key,humdata);
        //remove data of lines that's outside visible range:
        ui->customPlot->graph(0)->removeDataBefore(key-20);
        ui->customPlot->graph(1)->removeDataBefore(key-20);
        //rescale value (vertical) axis to fit the current data:
        //ui->customPlot->graph(0)->rescaleValueAxis();
        //ui->customPlot->graph(1)->rescaleValueAxis(true);
        ui->customPlot->yAxis->setRange(100,0);
        lastPointKey = key;
    }
    //make key axis range scroll with the data (at a constant range size of 60):
    ui->customPlot->xAxis->setRange(key+0.5,20,Qt::AlignRight);
    //ui->customPlot->xAxis->setRange(10,8,Qt::AlignRight);
    ui->customPlot->replot();
}

void ChartWidget::on_StopChartbtn_clicked() //关闭串口
{
    myComA->close();
    delete myComA;
    dataTimer->stop();
    readTimerA->stop();
    ui->statusBar->setText(tr("串口关闭"));
    setComboBoxEnabled(true);
    ui->StartChartbtn->setEnabled(true);
    ui->StopChartbtn->setEnabled(false);
    ui->lanjingling->setPixmap(p3);
}

void ChartWidget::on_Setbtn_clicked()
{
    bool ok;
    tempup = ui->lineEditTempUp->text().toInt(&ok);
    templow = ui->lineEditTempLow->text().toInt(&ok);
    humup = ui->lineEditHumUp->text().toInt(&ok);
    humlow = ui->lineEditHumLow->text().toInt(&ok);
    //温度预警
    if(tempdata>tempup){
        ui->lightTempUp->setPixmap(p1);
        ui->lightTempLow->setPixmap(p2);
    }
    else if(tempdata<templow){
        ui->lightTempUp->setPixmap(p2);
        ui->lightTempLow->setPixmap(p1);
    }
    else{
        ui->lightTempLow->setPixmap(p2);
        ui->lightTempUp->setPixmap(p2);
    }
    //湿度预警
    if(humdata>humup){
        ui->lightHumUp->setPixmap(p1);
        ui->lightHumLow->setPixmap(p2);
    }
    else if(humdata<humlow){
        ui->lightHumUp->setPixmap(p2);
        ui->lightHumLow->setPixmap(p1);
    }
    else{
        ui->lightHumLow->setPixmap(p2);
        ui->lightHumUp->setPixmap(p2);
    }
}

void ChartWidget::on_Resetbtn_clicked()
{
    tempup = 40;
    templow = 10;
    humup = 70;
    humlow = 10;
    ui->lineEditTempUp->setText("40");
    ui->lineEditTempLow->setText("10");
    ui->lineEditHumUp->setText("70");
    ui->lineEditHumLow->setText("10");
    //温度预警
    if(tempdata>tempup){
        ui->lightTempUp->setPixmap(p1);
        ui->lightTempLow->setPixmap(p2);
    }
    else if(tempdata<templow){
        ui->lightTempUp->setPixmap(p2);
        ui->lightTempLow->setPixmap(p1);
    }
    else{
        ui->lightTempLow->setPixmap(p2);
        ui->lightTempUp->setPixmap(p2);
    }
    //湿度预警
    if(humdata>humup){
        ui->lightHumUp->setPixmap(p1);
        ui->lightHumLow->setPixmap(p2);
    }
    else if(humdata<humlow){
        ui->lightHumUp->setPixmap(p2);
        ui->lightHumLow->setPixmap(p1);
    }
    else{
        ui->lightHumLow->setPixmap(p2);
        ui->lightHumUp->setPixmap(p2);
    }
}

void ChartWidget::on_checkbtn_clicked()
{
    view = new DataViewer;
    view->setWindowTitle(tr("历史温湿度记录"));
    view->show();
}

void ChartWidget::on_ChangeTheme_clicked()
{
    i_subject++;
    if(i_subject>2) i_subject=0;
    qDebug()<<i_subject;
    if(i_subject==0) ui->titlelabel->setPixmap(p5);
    if(i_subject==1) ui->titlelabel->setPixmap(p6);
    if(i_subject==2) ui->titlelabel->setPixmap(p7);
    QString subject[3];
    subject[0] = ":/White.qss";
    subject[1] = ":/Orange.qss";
    subject[2] = ":/Black.qss";
    QString style = subject[i_subject];
    QFile qss(style);
    qss.open(QFile::ReadOnly);
    qApp->setStyleSheet(qss.readAll());
    qss.close();
}


void ChartWidget::on_progressBar_customContextMenuRequested()
{

    ui->progressBar->setValue(tempdata);
 }


void ChartWidget::on_progressBar2_customContextMenuRequested()
{
    ui->progressBar2->setValue(humdata);
}



void ChartWidget::on_kongtiao_on_clicked()
{
    QString a;
    a = '0';
    myComA->write( a.toAscii());
    ui->kongtiao_on->setEnabled(false);
    ui->kongtiao_off->setEnabled(true);
}

void ChartWidget::on_kongtiao_off_clicked()
{
    QString a;
    a = '1';
    myComA->write(a.toAscii());
    ui->kongtiao_on->setEnabled(true);
    ui->kongtiao_off->setEnabled(false);
}

void ChartWidget::on_chushi_on_clicked()
{
    QString a;
    a = '3';
    myComA->write(a.toAscii());
    ui->chushi_on->setEnabled(false);
    ui->chushi_off->setEnabled(true);
}

void ChartWidget::on_chushi_off_clicked()
{
    QString a;
    a = '2';
    myComA->write(a.toAscii());
    ui->chushi_on->setEnabled(true);
    ui->chushi_off->setEnabled(false);
}
