#ifndef ECGTEST_DIALOG_H
#define ECGTEST_DIALOG_H

#include <QDialog>

namespace Ui {
class ECGTest_Dialog;
}

class ECGTest_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit ECGTest_Dialog(QWidget *parent = nullptr);
    ~ECGTest_Dialog();

private:
    Ui::ECGTest_Dialog *ui;
};

#endif // ECGTEST_DIALOG_H
