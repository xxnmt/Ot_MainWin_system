#include "serial_dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Serial_Dialog w;
    w.show();
    return QApplication::exec();
}
