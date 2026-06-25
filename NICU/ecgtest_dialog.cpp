#include "ecgtest_dialog.h"
#include "ui_ecgtest_dialog.h"

ECGTest_Dialog::ECGTest_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ECGTest_Dialog)
{
    ui->setupUi(this);
}

ECGTest_Dialog::~ECGTest_Dialog()
{
    delete ui;
}
