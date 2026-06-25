/********************************************************************************
** Form generated from reading UI file 'ecgtest_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECGTEST_DIALOG_H
#define UI_ECGTEST_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_ECGTest_Dialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ECGTest_Dialog)
    {
        if (ECGTest_Dialog->objectName().isEmpty())
            ECGTest_Dialog->setObjectName("ECGTest_Dialog");
        ECGTest_Dialog->resize(669, 449);
        ECGTest_Dialog->setStyleSheet(QString::fromUtf8("border-image: url(:/resource/images/databack.jpg);"));
        buttonBox = new QDialogButtonBox(ECGTest_Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(190, 340, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(ECGTest_Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ECGTest_Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ECGTest_Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ECGTest_Dialog);
    } // setupUi

    void retranslateUi(QDialog *ECGTest_Dialog)
    {
        ECGTest_Dialog->setWindowTitle(QCoreApplication::translate("ECGTest_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ECGTest_Dialog: public Ui_ECGTest_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECGTEST_DIALOG_H
