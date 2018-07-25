#ifndef CHARTWIDGET_H
#define CHARTWIDGET_H

#include <QWidget>
#include "win_qextserialport.h"
#include <QMessageBox>
#include <QTimer>
#include <QFile>
#include <QTextStream>
#include <QApplication>
#include "qcustomplot.h"
#include "dataviewer.h"
#include <QProgressBar>
#define TIME_OUT 10         //串口读写的延�0ms
#define TIMER_INTERVAL 500  //定时器间�00ms

namespace Ui {
class ChartWidget;
}

class ChartWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ChartWidget(QWidget *parent = 0);
    ~ChartWidget();

private slots:
    void on_StartChartbtn_clicked();
    void on_StopChartbtn_clicked();
    void readMyComA();
    void realtimeDataSlot();
    void on_Setbtn_clicked();
    void on_Resetbtn_clicked();
    void on_checkbtn_clicked();
    void on_ChangeTheme_clicked();

    void on_progressBar_customContextMenuRequested();

    void on_progressBar2_customContextMenuRequested();

    void on_kongtiao_on_clicked();

    void on_kongtiao_off_clicked();

    void on_chushi_on_clicked();

    void on_chushi_off_clicked();

private:
    Ui::ChartWidget *ui;
    void startInit();   //初始�
    void setComboBoxEnabled(bool status);
    void setupRealtimeDataDemo(QCustomPlot *customPlot);    //绘图
    int timerdly;   //时间间隔
    Win_QextSerialPort *myComA; //串口
    QTimer *readTimerA; //读取数据的定时器
    QTimer *dataTimer;  //绘制曲线的定时器
    DataViewer *view;
    QMutex mutex;
    QPixmap p1;     //on图片
    QPixmap p2;     //off图片
    QPixmap p3;
    QPixmap p4;
    QPixmap p5;
    QPixmap p6;
    QPixmap p7;
    int tempdata;   //温度数据
    int humdata;    //湿度数据
    int tempup;     //温度上限
    int templow;    //温度下限
    int humup;      //湿度上限
    int humlow;    //湿度下限
    int i_subject;          //当前主题


};

#endif // CHARTWIDGET_H
