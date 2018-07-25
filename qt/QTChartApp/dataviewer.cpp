#include "dataviewer.h"
#include "ui_dataviewer.h"

DataViewer::DataViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataViewer)
{
    ui->setupUi(this);
    QFile file("E:\\qt\\QTChartApp\\mydata.txt");
    if(!file.open(QFile::ReadOnly|QFile::Text))
    {
        QMessageBox::warning(this,tr("Error"),tr("read file mydata.txt error：%1").arg(file.errorString()));
        return;
    }
    QTextStream in(&file);
    QApplication::setOverrideCursor(Qt::WaitCursor);    //光标等待
    ui->viewtext->setPlainText(in.readAll());
    file.close();
    QApplication::restoreOverrideCursor();              //结束等待
}

DataViewer::~DataViewer()
{
    delete ui;
}
