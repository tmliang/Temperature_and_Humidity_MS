#include "chartwidget.h"
#include <QApplication>
#include <QTextCodec>
#include <QSplashScreen>
#include <QDesktopWidget>

class CommonHelper
{
public:
    static void setStyle(const QString &style) {
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        if(qss.isOpen()){
        qApp->setStyleSheet(qss.readAll());
        qss.close();
        }
        else {
            return;
        }
    }
};


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("utf8"));
    Sleep(800);
    QPixmap pixmap(":/welcome.jpg");
    QSplashScreen splash(pixmap);
    splash.show();
    a.processEvents();
    QString qss = ":/White.qss";
    CommonHelper::setStyle(qss);
    ChartWidget w;
    w.setWindowTitle(" ");
    w.move((qApp->desktop()->availableGeometry().width() - w.width()) / 2 + qApp->desktop()->availableGeometry().x(),
          (qApp->desktop()->availableGeometry().height() - w.height()) / 2 + qApp->desktop()->availableGeometry().y());
    w.show();
    splash.finish(&w);

    return a.exec();
}
