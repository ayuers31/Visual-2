/********************************************************************************
** Form generated from reading UI file 'even.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVEN_H
#define UI_EVEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_even
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *namaEventLabel;
    QLineEdit *namaEventLineEdit;
    QLabel *lokasiLabel;
    QLineEdit *lokasiLineEdit;
    QLabel *tanggalLabel;
    QDateEdit *tanggalDateEdit;
    QLabel *namaGambarLabel;
    QLineEdit *namaGambarLineEdit;
    QLabel *keteranganLabel;
    QLineEdit *keteranganLineEdit;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QDialog *even)
    {
        if (even->objectName().isEmpty())
            even->setObjectName("even");
        even->resize(350, 350);
        formLayoutWidget = new QWidget(even);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(60, 10, 231, 127));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        namaEventLabel = new QLabel(formLayoutWidget);
        namaEventLabel->setObjectName("namaEventLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, namaEventLabel);

        namaEventLineEdit = new QLineEdit(formLayoutWidget);
        namaEventLineEdit->setObjectName("namaEventLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, namaEventLineEdit);

        lokasiLabel = new QLabel(formLayoutWidget);
        lokasiLabel->setObjectName("lokasiLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, lokasiLabel);

        lokasiLineEdit = new QLineEdit(formLayoutWidget);
        lokasiLineEdit->setObjectName("lokasiLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, lokasiLineEdit);

        tanggalLabel = new QLabel(formLayoutWidget);
        tanggalLabel->setObjectName("tanggalLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, tanggalLabel);

        tanggalDateEdit = new QDateEdit(formLayoutWidget);
        tanggalDateEdit->setObjectName("tanggalDateEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, tanggalDateEdit);

        namaGambarLabel = new QLabel(formLayoutWidget);
        namaGambarLabel->setObjectName("namaGambarLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, namaGambarLabel);

        namaGambarLineEdit = new QLineEdit(formLayoutWidget);
        namaGambarLineEdit->setObjectName("namaGambarLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, namaGambarLineEdit);

        keteranganLabel = new QLabel(formLayoutWidget);
        keteranganLabel->setObjectName("keteranganLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, keteranganLabel);

        keteranganLineEdit = new QLineEdit(formLayoutWidget);
        keteranganLineEdit->setObjectName("keteranganLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, keteranganLineEdit);

        tableView = new QTableView(even);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 180, 331, 161));
        pushButton = new QPushButton(even);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 150, 80, 21));

        retranslateUi(even);

        QMetaObject::connectSlotsByName(even);
    } // setupUi

    void retranslateUi(QDialog *even)
    {
        even->setWindowTitle(QCoreApplication::translate("even", "Dialog", nullptr));
        namaEventLabel->setText(QCoreApplication::translate("even", "Nama Event", nullptr));
        lokasiLabel->setText(QCoreApplication::translate("even", "Lokasi", nullptr));
        tanggalLabel->setText(QCoreApplication::translate("even", "Tanggal", nullptr));
        namaGambarLabel->setText(QCoreApplication::translate("even", "Nama Gambar", nullptr));
        keteranganLabel->setText(QCoreApplication::translate("even", "Keterangan", nullptr));
        pushButton->setText(QCoreApplication::translate("even", "Tambah", nullptr));
    } // retranslateUi

};

namespace Ui {
    class even: public Ui_even {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVEN_H
