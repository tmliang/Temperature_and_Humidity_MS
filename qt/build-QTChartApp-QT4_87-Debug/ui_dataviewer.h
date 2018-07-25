/********************************************************************************
** Form generated from reading UI file 'dataviewer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAVIEWER_H
#define UI_DATAVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataViewer
{
public:
    QTextBrowser *viewtext;

    void setupUi(QWidget *DataViewer)
    {
        if (DataViewer->objectName().isEmpty())
            DataViewer->setObjectName(QString::fromUtf8("DataViewer"));
        DataViewer->resize(591, 481);
        viewtext = new QTextBrowser(DataViewer);
        viewtext->setObjectName(QString::fromUtf8("viewtext"));
        viewtext->setGeometry(QRect(10, 10, 571, 461));
        QFont font;
        font.setPointSize(11);
        viewtext->setFont(font);

        retranslateUi(DataViewer);

        QMetaObject::connectSlotsByName(DataViewer);
    } // setupUi

    void retranslateUi(QWidget *DataViewer)
    {
        DataViewer->setWindowTitle(QApplication::translate("DataViewer", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DataViewer: public Ui_DataViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAVIEWER_H
