#include "sreverdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SreverDialog w;
    w.show();

    return a.exec();
}
