#ifndef DATAVIEWER_H
#define DATAVIEWER_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QApplication>
#include <QMessageBox>

namespace Ui {
class DataViewer;
}

class DataViewer : public QWidget
{
    Q_OBJECT

public:
    explicit DataViewer(QWidget *parent = 0);
    ~DataViewer();

private:
    Ui::DataViewer *ui;
};

#endif // DATAVIEWER_H
