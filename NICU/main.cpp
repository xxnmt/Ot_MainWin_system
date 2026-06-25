#include "main_dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Main_Dialog w;
    w.show();
    return QApplication::exec();
}
