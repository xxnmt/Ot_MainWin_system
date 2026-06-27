#ifndef VENTILATOR_DIALOG_H
#define VENTILATOR_DIALOG_H
#include <QDialog>
#include "user_data.h"
#include "serial_tool.h"

namespace Ui {
class Ventilator_Dialog;
}

class Ventilator_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Ventilator_Dialog(QWidget *parent = nullptr);
    ~Ventilator_Dialog();

    void showGif();
    void showInfo(QByteArray info);
    bool serialportInit();
    void alarmLight();


private slots:
    void on_btn_lock_clicked();

    void on_btn_quit_clicked();
    void updateLight();
    void receiveDataa();


private:
    Ui::Ventilator_Dialog *ui;

    Serial_Tool *m_serial;
    QTimer *m_timer;
    bool m_lock;
    int m_lightState;

};

#endif // VENTILATOR_DIALOG_H
