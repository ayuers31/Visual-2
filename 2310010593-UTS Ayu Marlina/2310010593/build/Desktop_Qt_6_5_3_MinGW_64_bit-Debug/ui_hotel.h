/********************************************************************************
** Form generated from reading UI file 'hotel.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTEL_H
#define UI_HOTEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hotel
{
public:
    QTableView *tableView;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *namaHotelLabel;
    QLineEdit *namaHotelLineEdit;
    QLabel *alamatLabel;
    QLineEdit *alamatLineEdit;
    QLabel *teleponLabel;
    QLineEdit *teleponLineEdit;
    QLabel *keteranganLabel;
    QLineEdit *keteranganLineEdit;
    QLabel *namaGambarLabel;
    QLineEdit *namaGambarLineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *hotel)
    {
        if (hotel->objectName().isEmpty())
            hotel->setObjectName("hotel");
        hotel->resize(350, 350);
        tableView = new QTableView(hotel);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 180, 331, 161));
        formLayoutWidget = new QWidget(hotel);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(60, 10, 231, 128));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        namaHotelLabel = new QLabel(formLayoutWidget);
        namaHotelLabel->setObjectName("namaHotelLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, namaHotelLabel);

        namaHotelLineEdit = new QLineEdit(formLayoutWidget);
        namaHotelLineEdit->setObjectName("namaHotelLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, namaHotelLineEdit);

        alamatLabel = new QLabel(formLayoutWidget);
        alamatLabel->setObjectName("alamatLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, alamatLabel);

        alamatLineEdit = new QLineEdit(formLayoutWidget);
        alamatLineEdit->setObjectName("alamatLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, alamatLineEdit);

        teleponLabel = new QLabel(formLayoutWidget);
        teleponLabel->setObjectName("teleponLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, teleponLabel);

        teleponLineEdit = new QLineEdit(formLayoutWidget);
        teleponLineEdit->setObjectName("teleponLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, teleponLineEdit);

        keteranganLabel = new QLabel(formLayoutWidget);
        keteranganLabel->setObjectName("keteranganLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, keteranganLabel);

        keteranganLineEdit = new QLineEdit(formLayoutWidget);
        keteranganLineEdit->setObjectName("keteranganLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, keteranganLineEdit);

        namaGambarLabel = new QLabel(formLayoutWidget);
        namaGambarLabel->setObjectName("namaGambarLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, namaGambarLabel);

        namaGambarLineEdit = new QLineEdit(formLayoutWidget);
        namaGambarLineEdit->setObjectName("namaGambarLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, namaGambarLineEdit);

        pushButton = new QPushButton(hotel);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 150, 80, 21));

        retranslateUi(hotel);

        QMetaObject::connectSlotsByName(hotel);
    } // setupUi

    void retranslateUi(QDialog *hotel)
    {
        hotel->setWindowTitle(QCoreApplication::translate("hotel", "Dialog", nullptr));
        namaHotelLabel->setText(QCoreApplication::translate("hotel", "Nama Hotel", nullptr));
        alamatLabel->setText(QCoreApplication::translate("hotel", "Alamat", nullptr));
        teleponLabel->setText(QCoreApplication::translate("hotel", "Telepon", nullptr));
        keteranganLabel->setText(QCoreApplication::translate("hotel", "Keterangan", nullptr));
        namaGambarLabel->setText(QCoreApplication::translate("hotel", "Nama Gambar", nullptr));
        pushButton->setText(QCoreApplication::translate("hotel", "Tambah", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hotel: public Ui_hotel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTEL_H
