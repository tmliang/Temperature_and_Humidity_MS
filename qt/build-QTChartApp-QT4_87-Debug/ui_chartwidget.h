/********************************************************************************
** Form generated from reading UI file 'chartwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTWIDGET_H
#define UI_CHARTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_ChartWidget
{
public:
    QLabel *titlelabel;
    QGroupBox *GroupBoxchart;
    QGridLayout *gridLayout;
    QComboBox *portNameComboBox;
    QLabel *labelbaud;
    QLabel *labelCom;
    QComboBox *baudRateComboBox;
    QComboBox *dataBitsComboBox;
    QLabel *labeldatabits;
    QComboBox *parityComboBox;
    QLabel *labelstopBits;
    QPushButton *StopChartbtn;
    QLabel *labelparity;
    QComboBox *stopBitsComboBox;
    QPushButton *StartChartbtn;
    QLabel *labelstatus;
    QLabel *statusBar;
    QGroupBox *GroupBoxplot;
    QCustomPlot *customPlot;
    QGroupBox *GroupBoxset;
    QPushButton *Setbtn;
    QPushButton *Resetbtn;
    QGroupBox *GroupBoxsettemp;
    QLineEdit *lineEditTempUp;
    QLabel *labeltemup;
    QLineEdit *lineEditTempLow;
    QLabel *labeltemlow;
    QGroupBox *GroupBoxsethum;
    QLineEdit *lineEditHumUp;
    QLabel *labelhumup;
    QLineEdit *lineEditHumLow;
    QLabel *labelhumlow;
    QGroupBox *groupBox;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label_4;
    QLabel *lightTempUp;
    QLabel *lightTempLow;
    QLabel *lightHumUp;
    QLabel *lightHumLow;
    QPushButton *kongtiao_on;
    QPushButton *kongtiao_off;
    QPushButton *chushi_on;
    QPushButton *chushi_off;
    QPushButton *ChangeTheme;
    QLabel *lanjingling;
    QGroupBox *groupBox_2;
    QWidget *QQ;
    QProgressBar *progressBar;
    QProgressBar *progressBar2;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *GroupBoxdata;
    QLabel *labeltemp;
    QLabel *labelhum;
    QLabel *label_h;
    QLabel *label_t;
    QLineEdit *lineEdithum;
    QLineEdit *lineEdittemp;
    QPushButton *checkbtn;

    void setupUi(QWidget *ChartWidget)
    {
        if (ChartWidget->objectName().isEmpty())
            ChartWidget->setObjectName(QString::fromUtf8("ChartWidget"));
        ChartWidget->resize(1235, 906);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChartWidget->sizePolicy().hasHeightForWidth());
        ChartWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        ChartWidget->setFont(font);
        ChartWidget->setStyleSheet(QString::fromUtf8(""));
        titlelabel = new QLabel(ChartWidget);
        titlelabel->setObjectName(QString::fromUtf8("titlelabel"));
        titlelabel->setGeometry(QRect(310, 10, 361, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        titlelabel->setFont(font1);
        titlelabel->setLayoutDirection(Qt::LeftToRight);
        titlelabel->setStyleSheet(QString::fromUtf8(""));
        GroupBoxchart = new QGroupBox(ChartWidget);
        GroupBoxchart->setObjectName(QString::fromUtf8("GroupBoxchart"));
        GroupBoxchart->setGeometry(QRect(30, 110, 211, 261));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        GroupBoxchart->setFont(font2);
        GroupBoxchart->setLayoutDirection(Qt::LeftToRight);
        GroupBoxchart->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(GroupBoxchart);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        portNameComboBox = new QComboBox(GroupBoxchart);
        portNameComboBox->setObjectName(QString::fromUtf8("portNameComboBox"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        portNameComboBox->setFont(font3);
        portNameComboBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(portNameComboBox, 0, 1, 1, 1);

        labelbaud = new QLabel(GroupBoxchart);
        labelbaud->setObjectName(QString::fromUtf8("labelbaud"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setWeight(50);
        labelbaud->setFont(font4);
        labelbaud->setStyleSheet(QString::fromUtf8(""));
        labelbaud->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelbaud, 1, 0, 1, 1);

        labelCom = new QLabel(GroupBoxchart);
        labelCom->setObjectName(QString::fromUtf8("labelCom"));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(false);
        font5.setWeight(50);
        labelCom->setFont(font5);
        labelCom->setStyleSheet(QString::fromUtf8(""));
        labelCom->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelCom, 0, 0, 1, 1);

        baudRateComboBox = new QComboBox(GroupBoxchart);
        baudRateComboBox->setObjectName(QString::fromUtf8("baudRateComboBox"));
        baudRateComboBox->setFont(font3);
        baudRateComboBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(baudRateComboBox, 1, 1, 1, 1);

        dataBitsComboBox = new QComboBox(GroupBoxchart);
        dataBitsComboBox->setObjectName(QString::fromUtf8("dataBitsComboBox"));
        dataBitsComboBox->setFont(font3);
        dataBitsComboBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(dataBitsComboBox, 2, 1, 1, 1);

        labeldatabits = new QLabel(GroupBoxchart);
        labeldatabits->setObjectName(QString::fromUtf8("labeldatabits"));
        labeldatabits->setFont(font4);
        labeldatabits->setStyleSheet(QString::fromUtf8(""));
        labeldatabits->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labeldatabits, 2, 0, 1, 1);

        parityComboBox = new QComboBox(GroupBoxchart);
        parityComboBox->setObjectName(QString::fromUtf8("parityComboBox"));
        parityComboBox->setFont(font3);
        parityComboBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(parityComboBox, 3, 1, 1, 1);

        labelstopBits = new QLabel(GroupBoxchart);
        labelstopBits->setObjectName(QString::fromUtf8("labelstopBits"));
        labelstopBits->setFont(font4);
        labelstopBits->setStyleSheet(QString::fromUtf8(""));
        labelstopBits->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelstopBits, 4, 0, 1, 1);

        StopChartbtn = new QPushButton(GroupBoxchart);
        StopChartbtn->setObjectName(QString::fromUtf8("StopChartbtn"));
        StopChartbtn->setFont(font3);
        StopChartbtn->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(StopChartbtn, 5, 1, 1, 1);

        labelparity = new QLabel(GroupBoxchart);
        labelparity->setObjectName(QString::fromUtf8("labelparity"));
        labelparity->setFont(font4);
        labelparity->setStyleSheet(QString::fromUtf8(""));
        labelparity->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelparity, 3, 0, 1, 1);

        stopBitsComboBox = new QComboBox(GroupBoxchart);
        stopBitsComboBox->setObjectName(QString::fromUtf8("stopBitsComboBox"));
        stopBitsComboBox->setFont(font3);
        stopBitsComboBox->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(stopBitsComboBox, 4, 1, 1, 1);

        StartChartbtn = new QPushButton(GroupBoxchart);
        StartChartbtn->setObjectName(QString::fromUtf8("StartChartbtn"));
        StartChartbtn->setFont(font3);
        StartChartbtn->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(StartChartbtn, 5, 0, 1, 1);

        labelstatus = new QLabel(ChartWidget);
        labelstatus->setObjectName(QString::fromUtf8("labelstatus"));
        labelstatus->setGeometry(QRect(30, 80, 131, 31));
        labelstatus->setFont(font2);
        labelstatus->setStyleSheet(QString::fromUtf8(""));
        labelstatus->setAlignment(Qt::AlignCenter);
        statusBar = new QLabel(ChartWidget);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setGeometry(QRect(160, 80, 81, 31));
        QFont font6;
        font6.setPointSize(10);
        statusBar->setFont(font6);
        statusBar->setStyleSheet(QString::fromUtf8(""));
        statusBar->setAlignment(Qt::AlignCenter);
        GroupBoxplot = new QGroupBox(ChartWidget);
        GroupBoxplot->setObjectName(QString::fromUtf8("GroupBoxplot"));
        GroupBoxplot->setGeometry(QRect(250, 80, 541, 481));
        GroupBoxplot->setFont(font2);
        GroupBoxplot->setStyleSheet(QString::fromUtf8(""));
        customPlot = new QCustomPlot(GroupBoxplot);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(10, 30, 521, 441));
        customPlot->setFont(font);
        customPlot->setStyleSheet(QString::fromUtf8(""));
        GroupBoxset = new QGroupBox(ChartWidget);
        GroupBoxset->setObjectName(QString::fromUtf8("GroupBoxset"));
        GroupBoxset->setGeometry(QRect(30, 480, 211, 191));
        GroupBoxset->setFont(font2);
        GroupBoxset->setStyleSheet(QString::fromUtf8(""));
        Setbtn = new QPushButton(GroupBoxset);
        Setbtn->setObjectName(QString::fromUtf8("Setbtn"));
        Setbtn->setGeometry(QRect(20, 160, 75, 23));
        Setbtn->setFont(font3);
        Setbtn->setStyleSheet(QString::fromUtf8(""));
        Resetbtn = new QPushButton(GroupBoxset);
        Resetbtn->setObjectName(QString::fromUtf8("Resetbtn"));
        Resetbtn->setGeometry(QRect(120, 160, 75, 23));
        Resetbtn->setFont(font3);
        Resetbtn->setStyleSheet(QString::fromUtf8(""));
        GroupBoxsettemp = new QGroupBox(GroupBoxset);
        GroupBoxsettemp->setObjectName(QString::fromUtf8("GroupBoxsettemp"));
        GroupBoxsettemp->setGeometry(QRect(10, 20, 191, 61));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font7.setPointSize(11);
        GroupBoxsettemp->setFont(font7);
        GroupBoxsettemp->setStyleSheet(QString::fromUtf8(""));
        lineEditTempUp = new QLineEdit(GroupBoxsettemp);
        lineEditTempUp->setObjectName(QString::fromUtf8("lineEditTempUp"));
        lineEditTempUp->setGeometry(QRect(50, 30, 41, 21));
        lineEditTempUp->setFont(font3);
        lineEditTempUp->setAutoFillBackground(false);
        lineEditTempUp->setStyleSheet(QString::fromUtf8(""));
        lineEditTempUp->setAlignment(Qt::AlignCenter);
        labeltemup = new QLabel(GroupBoxsettemp);
        labeltemup->setObjectName(QString::fromUtf8("labeltemup"));
        labeltemup->setGeometry(QRect(10, 30, 41, 21));
        labeltemup->setFont(font3);
        labeltemup->setAlignment(Qt::AlignCenter);
        lineEditTempLow = new QLineEdit(GroupBoxsettemp);
        lineEditTempLow->setObjectName(QString::fromUtf8("lineEditTempLow"));
        lineEditTempLow->setGeometry(QRect(140, 30, 41, 21));
        lineEditTempLow->setFont(font3);
        lineEditTempLow->setAutoFillBackground(false);
        lineEditTempLow->setStyleSheet(QString::fromUtf8(""));
        lineEditTempLow->setAlignment(Qt::AlignCenter);
        labeltemlow = new QLabel(GroupBoxsettemp);
        labeltemlow->setObjectName(QString::fromUtf8("labeltemlow"));
        labeltemlow->setGeometry(QRect(100, 30, 41, 21));
        labeltemlow->setFont(font3);
        labeltemlow->setAlignment(Qt::AlignCenter);
        GroupBoxsethum = new QGroupBox(GroupBoxset);
        GroupBoxsethum->setObjectName(QString::fromUtf8("GroupBoxsethum"));
        GroupBoxsethum->setGeometry(QRect(10, 90, 191, 61));
        GroupBoxsethum->setFont(font7);
        GroupBoxsethum->setStyleSheet(QString::fromUtf8(""));
        lineEditHumUp = new QLineEdit(GroupBoxsethum);
        lineEditHumUp->setObjectName(QString::fromUtf8("lineEditHumUp"));
        lineEditHumUp->setGeometry(QRect(50, 30, 41, 21));
        lineEditHumUp->setFont(font3);
        lineEditHumUp->setAutoFillBackground(false);
        lineEditHumUp->setStyleSheet(QString::fromUtf8(""));
        lineEditHumUp->setAlignment(Qt::AlignCenter);
        labelhumup = new QLabel(GroupBoxsethum);
        labelhumup->setObjectName(QString::fromUtf8("labelhumup"));
        labelhumup->setGeometry(QRect(10, 30, 41, 21));
        labelhumup->setFont(font3);
        labelhumup->setAlignment(Qt::AlignCenter);
        lineEditHumLow = new QLineEdit(GroupBoxsethum);
        lineEditHumLow->setObjectName(QString::fromUtf8("lineEditHumLow"));
        lineEditHumLow->setGeometry(QRect(140, 30, 41, 21));
        lineEditHumLow->setFont(font3);
        lineEditHumLow->setAutoFillBackground(false);
        lineEditHumLow->setStyleSheet(QString::fromUtf8(""));
        lineEditHumLow->setAlignment(Qt::AlignCenter);
        labelhumlow = new QLabel(GroupBoxsethum);
        labelhumlow->setObjectName(QString::fromUtf8("labelhumlow"));
        labelhumlow->setGeometry(QRect(100, 30, 41, 21));
        labelhumlow->setFont(font3);
        labelhumlow->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(ChartWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(250, 560, 661, 111));
        groupBox->setFont(font2);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        label1 = new QLabel(groupBox);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(20, 40, 71, 21));
        label1->setFont(font4);
        label1->setStyleSheet(QString::fromUtf8("border: none;"));
        label2 = new QLabel(groupBox);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(160, 40, 71, 21));
        label2->setFont(font4);
        label2->setStyleSheet(QString::fromUtf8("border: none;"));
        label3 = new QLabel(groupBox);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(310, 40, 71, 21));
        label3->setFont(font4);
        label3->setStyleSheet(QString::fromUtf8("border: none;"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(470, 40, 71, 21));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("border: none;"));
        lightTempUp = new QLabel(groupBox);
        lightTempUp->setObjectName(QString::fromUtf8("lightTempUp"));
        lightTempUp->setGeometry(QRect(90, 40, 21, 21));
        lightTempUp->setFont(font);
        lightTempUp->setStyleSheet(QString::fromUtf8("border: none;"));
        lightTempLow = new QLabel(groupBox);
        lightTempLow->setObjectName(QString::fromUtf8("lightTempLow"));
        lightTempLow->setGeometry(QRect(230, 40, 21, 21));
        lightTempLow->setFont(font);
        lightTempLow->setStyleSheet(QString::fromUtf8("border: none;"));
        lightHumUp = new QLabel(groupBox);
        lightHumUp->setObjectName(QString::fromUtf8("lightHumUp"));
        lightHumUp->setGeometry(QRect(380, 40, 21, 21));
        lightHumUp->setFont(font);
        lightHumUp->setStyleSheet(QString::fromUtf8("border: none;"));
        lightHumLow = new QLabel(groupBox);
        lightHumLow->setObjectName(QString::fromUtf8("lightHumLow"));
        lightHumLow->setGeometry(QRect(540, 40, 21, 21));
        lightHumLow->setFont(font);
        lightHumLow->setStyleSheet(QString::fromUtf8("border: none;"));
        kongtiao_on = new QPushButton(groupBox);
        kongtiao_on->setObjectName(QString::fromUtf8("kongtiao_on"));
        kongtiao_on->setGeometry(QRect(10, 80, 91, 21));
        kongtiao_on->setFont(font3);
        kongtiao_on->setStyleSheet(QString::fromUtf8(""));
        kongtiao_off = new QPushButton(groupBox);
        kongtiao_off->setObjectName(QString::fromUtf8("kongtiao_off"));
        kongtiao_off->setGeometry(QRect(150, 80, 91, 21));
        kongtiao_off->setFont(font3);
        kongtiao_off->setStyleSheet(QString::fromUtf8(""));
        chushi_on = new QPushButton(groupBox);
        chushi_on->setObjectName(QString::fromUtf8("chushi_on"));
        chushi_on->setGeometry(QRect(300, 80, 91, 21));
        chushi_on->setFont(font3);
        chushi_on->setStyleSheet(QString::fromUtf8(""));
        chushi_off = new QPushButton(groupBox);
        chushi_off->setObjectName(QString::fromUtf8("chushi_off"));
        chushi_off->setGeometry(QRect(460, 80, 91, 21));
        chushi_off->setFont(font3);
        chushi_off->setStyleSheet(QString::fromUtf8(""));
        ChangeTheme = new QPushButton(groupBox);
        ChangeTheme->setObjectName(QString::fromUtf8("ChangeTheme"));
        ChangeTheme->setGeometry(QRect(580, 80, 81, 31));
        ChangeTheme->setFont(font3);
        ChangeTheme->setStyleSheet(QString::fromUtf8(""));
        lanjingling = new QLabel(groupBox);
        lanjingling->setObjectName(QString::fromUtf8("lanjingling"));
        lanjingling->setGeometry(QRect(580, 10, 81, 61));
        lanjingling->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:rgba(255,0, 0, 0);"));
        groupBox_2 = new QGroupBox(ChartWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(800, 80, 111, 481));
        QFont font8;
        font8.setPointSize(14);
        font8.setBold(true);
        font8.setWeight(75);
        groupBox_2->setFont(font8);
        QQ = new QWidget(groupBox_2);
        QQ->setObjectName(QString::fromUtf8("QQ"));
        QQ->setGeometry(QRect(10, 20, 91, 451));
        progressBar = new QProgressBar(QQ);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 20, 51, 191));
        QFont font9;
        font9.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font9.setPointSize(14);
        font9.setBold(false);
        font9.setItalic(false);
        font9.setWeight(50);
        progressBar->setFont(font9);
        progressBar->setMouseTracking(false);
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"     border: 2px solid grey;\n"
"     border-radius: 5px;\n"
" 	text-align: center;\n"
" }\n"
"\n"
" QProgressBar::chunk {\n"
"     \n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"     higth: 20px;\n"
" }"));
        progressBar->setMaximum(100);
        progressBar->setValue(24);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Vertical);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::BottomToTop);
        progressBar2 = new QProgressBar(QQ);
        progressBar2->setObjectName(QString::fromUtf8("progressBar2"));
        progressBar2->setGeometry(QRect(20, 240, 51, 181));
        progressBar2->setFont(font9);
        progressBar2->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"     border: 2px solid grey;\n"
"     border-radius: 5px;\n"
" 	text-align: center;\n"
" }\n"
"\n"
" QProgressBar::chunk {\n"
"     \n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(170, 170, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"     higth: 20px;\n"
" }"));
        progressBar2->setValue(24);
        progressBar2->setOrientation(Qt::Vertical);
        label = new QLabel(QQ);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 51, 21));
        QFont font10;
        font10.setPointSize(13);
        font10.setBold(false);
        font10.setWeight(50);
        label->setFont(font10);
        label->setStyleSheet(QString::fromUtf8("background:rgba(255,0, 0, 0);\n"
"border: none;"));
        label_2 = new QLabel(QQ);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 220, 51, 21));
        label_2->setFont(font10);
        label_2->setStyleSheet(QString::fromUtf8("background:rgba(255,0, 0, 0);\n"
"border: none;"));
        GroupBoxdata = new QGroupBox(ChartWidget);
        GroupBoxdata->setObjectName(QString::fromUtf8("GroupBoxdata"));
        GroupBoxdata->setGeometry(QRect(30, 360, 211, 131));
        GroupBoxdata->setFont(font2);
        GroupBoxdata->setStyleSheet(QString::fromUtf8(""));
        labeltemp = new QLabel(GroupBoxdata);
        labeltemp->setObjectName(QString::fromUtf8("labeltemp"));
        labeltemp->setGeometry(QRect(10, 20, 71, 22));
        labeltemp->setFont(font5);
        labeltemp->setStyleSheet(QString::fromUtf8(""));
        labeltemp->setAlignment(Qt::AlignCenter);
        labelhum = new QLabel(GroupBoxdata);
        labelhum->setObjectName(QString::fromUtf8("labelhum"));
        labelhum->setGeometry(QRect(10, 50, 71, 22));
        labelhum->setFont(font5);
        labelhum->setStyleSheet(QString::fromUtf8(""));
        labelhum->setAlignment(Qt::AlignCenter);
        label_h = new QLabel(GroupBoxdata);
        label_h->setObjectName(QString::fromUtf8("label_h"));
        label_h->setGeometry(QRect(180, 50, 21, 23));
        QFont font11;
        font11.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font11.setPointSize(14);
        font11.setBold(false);
        font11.setWeight(50);
        label_h->setFont(font11);
        label_h->setStyleSheet(QString::fromUtf8("\n"
"        border-bottom-color: transparent;\n"
"        border-top-color: transparent;\n"
"        border-right-color: transparent;\n"
"        border-left-color: transparent;\n"
""));
        label_t = new QLabel(GroupBoxdata);
        label_t->setObjectName(QString::fromUtf8("label_t"));
        label_t->setGeometry(QRect(180, 20, 27, 19));
        label_t->setFont(font3);
        label_t->setStyleSheet(QString::fromUtf8("		border-bottom-color: transparent;\n"
"        border-top-color: transparent;\n"
"        border-right-color: transparent;\n"
"        border-left-color: transparent;\n"
""));
        label_t->setTextFormat(Qt::AutoText);
        lineEdithum = new QLineEdit(GroupBoxdata);
        lineEdithum->setObjectName(QString::fromUtf8("lineEdithum"));
        lineEdithum->setGeometry(QRect(90, 50, 81, 21));
        lineEdithum->setFont(font3);
        lineEdithum->setStyleSheet(QString::fromUtf8(""));
        lineEdithum->setAlignment(Qt::AlignCenter);
        lineEdittemp = new QLineEdit(GroupBoxdata);
        lineEdittemp->setObjectName(QString::fromUtf8("lineEdittemp"));
        lineEdittemp->setEnabled(true);
        lineEdittemp->setGeometry(QRect(90, 20, 81, 21));
        QFont font12;
        font12.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font12.setPointSize(11);
        font12.setBold(false);
        font12.setItalic(false);
        font12.setUnderline(false);
        font12.setWeight(50);
        lineEdittemp->setFont(font12);
        lineEdittemp->setStyleSheet(QString::fromUtf8(""));
        lineEdittemp->setAlignment(Qt::AlignCenter);
        checkbtn = new QPushButton(GroupBoxdata);
        checkbtn->setObjectName(QString::fromUtf8("checkbtn"));
        checkbtn->setGeometry(QRect(10, 80, 181, 31));
        checkbtn->setFont(font3);
        checkbtn->setStyleSheet(QString::fromUtf8(""));
        statusBar->raise();
        labelstatus->raise();
        titlelabel->raise();
        GroupBoxchart->raise();
        GroupBoxplot->raise();
        groupBox->raise();
        groupBox_2->raise();
        GroupBoxdata->raise();
        GroupBoxset->raise();

        retranslateUi(ChartWidget);

        QMetaObject::connectSlotsByName(ChartWidget);
    } // setupUi

    void retranslateUi(QWidget *ChartWidget)
    {
        ChartWidget->setWindowTitle(QApplication::translate("ChartWidget", "ChartWidget", 0, QApplication::UnicodeUTF8));
        titlelabel->setText(QString());
        GroupBoxchart->setTitle(QApplication::translate("ChartWidget", "\344\270\262\345\217\243\345\217\202\346\225\260\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        portNameComboBox->clear();
        portNameComboBox->insertItems(0, QStringList()
         << QApplication::translate("ChartWidget", "COM1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ChartWidget", "COM2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ChartWidget", "COM3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ChartWidget", "COM4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ChartWidget", "COM5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ChartWidget", "COM6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ChartWidget", "COM7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ChartWidget", "COM8", 0, QApplication::UnicodeUTF8)
        );
        labelbaud->setText(QApplication::translate("ChartWidget", "\346\263\242\347\211\271\347\216\207", 0, QApplication::UnicodeUTF8));
        labelCom->setText(QApplication::translate("ChartWidget", "\344\270\262\345\217\243", 0, QApplication::UnicodeUTF8));
        baudRateComboBox->clear();
        baudRateComboBox->insertItems(0, QStringList()
         << QApplication::translate("ChartWidget", "115200", 0, QApplication::UnicodeUTF8)
        );
        dataBitsComboBox->clear();
        dataBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("ChartWidget", "8", 0, QApplication::UnicodeUTF8)
        );
        labeldatabits->setText(QApplication::translate("ChartWidget", "\346\225\260\346\215\256\344\275\215", 0, QApplication::UnicodeUTF8));
        parityComboBox->clear();
        parityComboBox->insertItems(0, QStringList()
         << QApplication::translate("ChartWidget", "\346\227\240", 0, QApplication::UnicodeUTF8)
        );
        labelstopBits->setText(QApplication::translate("ChartWidget", "\345\201\234\346\255\242\344\275\215", 0, QApplication::UnicodeUTF8));
        StopChartbtn->setText(QApplication::translate("ChartWidget", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        labelparity->setText(QApplication::translate("ChartWidget", "\346\240\241\351\252\214\344\275\215", 0, QApplication::UnicodeUTF8));
        stopBitsComboBox->clear();
        stopBitsComboBox->insertItems(0, QStringList()
         << QApplication::translate("ChartWidget", "1", 0, QApplication::UnicodeUTF8)
        );
        StartChartbtn->setText(QApplication::translate("ChartWidget", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        labelstatus->setText(QApplication::translate("ChartWidget", " \344\270\262\345\217\243\345\267\245\344\275\234\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        statusBar->setText(QString());
        GroupBoxplot->setTitle(QApplication::translate("ChartWidget", "\346\270\251\346\271\277\345\272\246\345\256\236\346\227\266\346\225\260\346\215\256\346\233\262\347\272\277", 0, QApplication::UnicodeUTF8));
        GroupBoxset->setTitle(QApplication::translate("ChartWidget", "\351\227\250\351\231\220\345\200\274\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        Setbtn->setText(QApplication::translate("ChartWidget", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        Resetbtn->setText(QApplication::translate("ChartWidget", "\351\207\215\347\275\256", 0, QApplication::UnicodeUTF8));
        GroupBoxsettemp->setTitle(QApplication::translate("ChartWidget", "\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        lineEditTempUp->setText(QApplication::translate("ChartWidget", "40", 0, QApplication::UnicodeUTF8));
        labeltemup->setText(QApplication::translate("ChartWidget", "\344\270\212\351\231\220", 0, QApplication::UnicodeUTF8));
        lineEditTempLow->setText(QApplication::translate("ChartWidget", "10", 0, QApplication::UnicodeUTF8));
        labeltemlow->setText(QApplication::translate("ChartWidget", "\344\270\213\351\231\220", 0, QApplication::UnicodeUTF8));
        GroupBoxsethum->setTitle(QApplication::translate("ChartWidget", "\346\271\277\345\272\246", 0, QApplication::UnicodeUTF8));
        lineEditHumUp->setText(QApplication::translate("ChartWidget", "70", 0, QApplication::UnicodeUTF8));
        labelhumup->setText(QApplication::translate("ChartWidget", "\344\270\212\351\231\220", 0, QApplication::UnicodeUTF8));
        lineEditHumLow->setText(QApplication::translate("ChartWidget", "10", 0, QApplication::UnicodeUTF8));
        labelhumlow->setText(QApplication::translate("ChartWidget", "\344\270\213\351\231\220", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ChartWidget", "\346\270\251\346\271\277\345\272\246\346\212\245\350\255\246\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("ChartWidget", "\346\270\251\345\272\246\350\277\207\351\253\230", 0, QApplication::UnicodeUTF8));
        label2->setText(QApplication::translate("ChartWidget", "\346\270\251\345\272\246\350\277\207\344\275\216", 0, QApplication::UnicodeUTF8));
        label3->setText(QApplication::translate("ChartWidget", "\346\271\277\345\272\246\350\277\207\351\253\230", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ChartWidget", "\346\271\277\345\272\246\350\277\207\344\275\216", 0, QApplication::UnicodeUTF8));
        lightTempUp->setText(QString());
        lightTempLow->setText(QString());
        lightHumUp->setText(QString());
        lightHumLow->setText(QString());
        kongtiao_on->setText(QApplication::translate("ChartWidget", "\345\274\200\347\251\272\350\260\203", 0, QApplication::UnicodeUTF8));
        kongtiao_off->setText(QApplication::translate("ChartWidget", "\345\205\263\347\251\272\350\260\203", 0, QApplication::UnicodeUTF8));
        chushi_on->setText(QApplication::translate("ChartWidget", "\345\205\263\345\212\240\346\271\277\345\231\250", 0, QApplication::UnicodeUTF8));
        chushi_off->setText(QApplication::translate("ChartWidget", "\345\274\200\345\212\240\346\271\277\345\231\250", 0, QApplication::UnicodeUTF8));
        ChangeTheme->setText(QApplication::translate("ChartWidget", "\345\210\207\346\215\242\344\270\273\351\242\230", 0, QApplication::UnicodeUTF8));
        lanjingling->setText(QString());
        groupBox_2->setTitle(QString());
        progressBar->setFormat(QApplication::translate("ChartWidget", "%p\342\204\203", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ChartWidget", "\346\270\251\345\272\246\350\256\241", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ChartWidget", "\346\271\277\345\272\246\350\256\241", 0, QApplication::UnicodeUTF8));
        GroupBoxdata->setTitle(QApplication::translate("ChartWidget", "\346\270\251\346\271\277\345\272\246\345\256\236\346\227\266\346\225\260\346\215\256\345\214\272", 0, QApplication::UnicodeUTF8));
        labeltemp->setText(QApplication::translate("ChartWidget", "\345\275\223\345\211\215\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        labelhum->setText(QApplication::translate("ChartWidget", "\345\275\223\345\211\215\346\271\277\345\272\246", 0, QApplication::UnicodeUTF8));
        label_h->setText(QApplication::translate("ChartWidget", "%", 0, QApplication::UnicodeUTF8));
        label_t->setText(QApplication::translate("ChartWidget", "\342\204\203", 0, QApplication::UnicodeUTF8));
        lineEdithum->setText(QString());
        lineEdittemp->setText(QString());
        checkbtn->setText(QApplication::translate("ChartWidget", "\346\237\245\347\234\213\345\216\206\345\217\262\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChartWidget: public Ui_ChartWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTWIDGET_H
