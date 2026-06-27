/********************************************************************************
** Form generated from reading UI file 'ventilator_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTILATOR_DIALOG_H
#define UI_VENTILATOR_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "alarm_light.h"

QT_BEGIN_NAMESPACE

class Ui_Ventilator_Dialog
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_9;
    QPushButton *btn_quit;
    QLabel *lab_name;
    QLabel *lab_age;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_2;
    QLCDNumber *num_wet;
    QLCDNumber *num_leak;
    QLCDNumber *num_air_min;
    QLCDNumber *num_breathingRate;
    QLCDNumber *num_breathingTime;
    QLCDNumber *numboostTime;
    QLCDNumber *num_IPAP;
    QLCDNumber *num_EPAP;
    QLCDNumber *num_backupRate;
    QLCDNumber *num_IERO;
    Alarm_Light *widget_light;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_15;
    QPushButton *btn_lock;
    QLabel *lab_Gif;

    void setupUi(QDialog *Ventilator_Dialog)
    {
        if (Ventilator_Dialog->objectName().isEmpty())
            Ventilator_Dialog->setObjectName("Ventilator_Dialog");
        Ventilator_Dialog->resize(558, 345);
        label = new QLabel(Ventilator_Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 40, 40, 16));
        label_3 = new QLabel(Ventilator_Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 40, 40, 12));
        label_5 = new QLabel(Ventilator_Dialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(259, 40, 61, 20));
        label_7 = new QLabel(Ventilator_Dialog);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(360, 40, 40, 12));
        label_9 = new QLabel(Ventilator_Dialog);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(440, 40, 40, 12));
        btn_quit = new QPushButton(Ventilator_Dialog);
        btn_quit->setObjectName("btn_quit");
        btn_quit->setGeometry(QRect(530, 0, 25, 25));
        btn_quit->setStyleSheet(QString::fromUtf8("border-image: url(:/resource_inside/images/back.png);"));
        lab_name = new QLabel(Ventilator_Dialog);
        lab_name->setObjectName("lab_name");
        lab_name->setGeometry(QRect(330, 0, 40, 12));
        lab_age = new QLabel(Ventilator_Dialog);
        lab_age->setObjectName("lab_age");
        lab_age->setGeometry(QRect(390, 0, 40, 12));
        label_13 = new QLabel(Ventilator_Dialog);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 270, 40, 12));
        label_14 = new QLabel(Ventilator_Dialog);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 310, 40, 12));
        label_2 = new QLabel(Ventilator_Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 270, 40, 12));
        num_wet = new QLCDNumber(Ventilator_Dialog);
        num_wet->setObjectName("num_wet");
        num_wet->setGeometry(QRect(90, 70, 64, 23));
        num_leak = new QLCDNumber(Ventilator_Dialog);
        num_leak->setObjectName("num_leak");
        num_leak->setGeometry(QRect(180, 70, 64, 23));
        num_air_min = new QLCDNumber(Ventilator_Dialog);
        num_air_min->setObjectName("num_air_min");
        num_air_min->setGeometry(QRect(270, 70, 64, 23));
        num_breathingRate = new QLCDNumber(Ventilator_Dialog);
        num_breathingRate->setObjectName("num_breathingRate");
        num_breathingRate->setGeometry(QRect(350, 70, 64, 23));
        num_breathingTime = new QLCDNumber(Ventilator_Dialog);
        num_breathingTime->setObjectName("num_breathingTime");
        num_breathingTime->setGeometry(QRect(440, 70, 64, 23));
        numboostTime = new QLCDNumber(Ventilator_Dialog);
        numboostTime->setObjectName("numboostTime");
        numboostTime->setGeometry(QRect(80, 300, 64, 23));
        num_IPAP = new QLCDNumber(Ventilator_Dialog);
        num_IPAP->setObjectName("num_IPAP");
        num_IPAP->setGeometry(QRect(240, 270, 64, 23));
        num_EPAP = new QLCDNumber(Ventilator_Dialog);
        num_EPAP->setObjectName("num_EPAP");
        num_EPAP->setGeometry(QRect(240, 300, 64, 23));
        num_backupRate = new QLCDNumber(Ventilator_Dialog);
        num_backupRate->setObjectName("num_backupRate");
        num_backupRate->setGeometry(QRect(430, 270, 64, 23));
        num_IERO = new QLCDNumber(Ventilator_Dialog);
        num_IERO->setObjectName("num_IERO");
        num_IERO->setGeometry(QRect(430, 310, 64, 23));
        widget_light = new Alarm_Light(Ventilator_Dialog);
        widget_light->setObjectName("widget_light");
        widget_light->setGeometry(QRect(60, 120, 120, 80));
        label_4 = new QLabel(Ventilator_Dialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(370, 280, 40, 12));
        label_6 = new QLabel(Ventilator_Dialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(380, 320, 40, 12));
        label_8 = new QLabel(Ventilator_Dialog);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(190, 270, 40, 12));
        label_10 = new QLabel(Ventilator_Dialog);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(180, 310, 40, 12));
        label_15 = new QLabel(Ventilator_Dialog);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(20, 40, 40, 12));
        btn_lock = new QPushButton(Ventilator_Dialog);
        btn_lock->setObjectName("btn_lock");
        btn_lock->setGeometry(QRect(10, 60, 40, 50));
        btn_lock->setStyleSheet(QString::fromUtf8("border-image: url(:/resource_inside/images/lock.png);"));
        lab_Gif = new QLabel(Ventilator_Dialog);
        lab_Gif->setObjectName("lab_Gif");
        lab_Gif->setGeometry(QRect(270, 120, 221, 101));

        retranslateUi(Ventilator_Dialog);

        QMetaObject::connectSlotsByName(Ventilator_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Ventilator_Dialog)
    {
        Ventilator_Dialog->setWindowTitle(QCoreApplication::translate("Ventilator_Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Ventilator_Dialog", "\346\275\256\346\260\224\351\207\217", nullptr));
        label_3->setText(QCoreApplication::translate("Ventilator_Dialog", "\346\274\217\346\260\224\351\207\217", nullptr));
        label_5->setText(QCoreApplication::translate("Ventilator_Dialog", "\346\257\217\345\210\206\351\222\237\351\200\232\346\260\224\351\207\217", nullptr));
        label_7->setText(QCoreApplication::translate("Ventilator_Dialog", "\345\221\274\345\220\270\351\242\221\347\216\207", nullptr));
        label_9->setText(QCoreApplication::translate("Ventilator_Dialog", "\345\220\270\346\260\224\346\227\266\351\227\264", nullptr));
        btn_quit->setText(QString());
        lab_name->setText(QCoreApplication::translate("Ventilator_Dialog", "TextLabel", nullptr));
        lab_age->setText(QCoreApplication::translate("Ventilator_Dialog", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("Ventilator_Dialog", "\351\200\232\346\260\224\346\250\241\345\274\217", nullptr));
        label_14->setText(QCoreApplication::translate("Ventilator_Dialog", "\345\215\207\345\216\213\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("Ventilator_Dialog", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Ventilator_Dialog", "\345\244\207\347\224\250\351\242\221\347\216\207", nullptr));
        label_6->setText(QCoreApplication::translate("Ventilator_Dialog", "\345\221\274\345\220\270\346\257\224\344\276\213", nullptr));
        label_8->setText(QCoreApplication::translate("Ventilator_Dialog", "\345\220\270\346\260\224\345\216\213\345\212\233", nullptr));
        label_10->setText(QCoreApplication::translate("Ventilator_Dialog", "\345\221\274\346\260\224\345\216\213\345\212\233", nullptr));
        label_15->setText(QCoreApplication::translate("Ventilator_Dialog", "\346\237\245\347\234\213", nullptr));
        btn_lock->setText(QString());
        lab_Gif->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ventilator_Dialog: public Ui_Ventilator_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTILATOR_DIALOG_H
