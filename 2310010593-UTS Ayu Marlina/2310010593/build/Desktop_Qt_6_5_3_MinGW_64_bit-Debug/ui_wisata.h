/********************************************************************************
** Form generated from reading UI file 'wisata.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WISATA_H
#define UI_WISATA_H

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

class Ui_wisata
{
public:
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *koorXLabel;
    QLineEdit *koorXLineEdit;
    QPushButton *pushButton;
    QTableView *tableView;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *koorYLabel;
    QLineEdit *koorYLineEdit;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *namaWisataLabel;
    QLineEdit *namaWisataLineEdit;
    QLabel *alamatLabel;
    QLineEdit *alamatLineEdit;
    QLabel *saranaLabel;
    QLineEdit *saranaLineEdit;
    QLabel *keteranganLabel;
    QLineEdit *keteranganLineEdit;
    QLabel *namaGambarLabel;
    QLineEdit *namaGambarLineEdit;

    void setupUi(QDialog *wisata)
    {
        if (wisata->objectName().isEmpty())
            wisata->setObjectName("wisata");
        wisata->resize(350, 350);
        formLayoutWidget_2 = new QWidget(wisata);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(60, 150, 111, 24));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        koorXLabel = new QLabel(formLayoutWidget_2);
        koorXLabel->setObjectName("koorXLabel");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, koorXLabel);

        koorXLineEdit = new QLineEdit(formLayoutWidget_2);
        koorXLineEdit->setObjectName("koorXLineEdit");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, koorXLineEdit);

        pushButton = new QPushButton(wisata);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 180, 80, 21));
        tableView = new QTableView(wisata);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 210, 331, 131));
        formLayoutWidget_3 = new QWidget(wisata);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(180, 150, 111, 24));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        koorYLabel = new QLabel(formLayoutWidget_3);
        koorYLabel->setObjectName("koorYLabel");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, koorYLabel);

        koorYLineEdit = new QLineEdit(formLayoutWidget_3);
        koorYLineEdit->setObjectName("koorYLineEdit");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, koorYLineEdit);

        formLayoutWidget = new QWidget(wisata);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(60, 10, 231, 131));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        namaWisataLabel = new QLabel(formLayoutWidget);
        namaWisataLabel->setObjectName("namaWisataLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, namaWisataLabel);

        namaWisataLineEdit = new QLineEdit(formLayoutWidget);
        namaWisataLineEdit->setObjectName("namaWisataLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, namaWisataLineEdit);

        alamatLabel = new QLabel(formLayoutWidget);
        alamatLabel->setObjectName("alamatLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, alamatLabel);

        alamatLineEdit = new QLineEdit(formLayoutWidget);
        alamatLineEdit->setObjectName("alamatLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, alamatLineEdit);

        saranaLabel = new QLabel(formLayoutWidget);
        saranaLabel->setObjectName("saranaLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, saranaLabel);

        saranaLineEdit = new QLineEdit(formLayoutWidget);
        saranaLineEdit->setObjectName("saranaLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, saranaLineEdit);

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


        retranslateUi(wisata);

        QMetaObject::connectSlotsByName(wisata);
    } // setupUi

    void retranslateUi(QDialog *wisata)
    {
        wisata->setWindowTitle(QCoreApplication::translate("wisata", "Dialog", nullptr));
        koorXLabel->setText(QCoreApplication::translate("wisata", "Koor X", nullptr));
        pushButton->setText(QCoreApplication::translate("wisata", "Tambah", nullptr));
        koorYLabel->setText(QCoreApplication::translate("wisata", "Koor Y", nullptr));
        namaWisataLabel->setText(QCoreApplication::translate("wisata", "Nama Wisata", nullptr));
        alamatLabel->setText(QCoreApplication::translate("wisata", "Alamat", nullptr));
        saranaLabel->setText(QCoreApplication::translate("wisata", "Sarana", nullptr));
        keteranganLabel->setText(QCoreApplication::translate("wisata", "Keterangan", nullptr));
        namaGambarLabel->setText(QCoreApplication::translate("wisata", "Nama Gambar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wisata: public Ui_wisata {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WISATA_H
