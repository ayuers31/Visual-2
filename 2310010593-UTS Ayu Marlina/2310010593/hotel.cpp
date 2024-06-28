#include "hotel.h"
#include "ui_hotel.h"

hotel::hotel(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::hotel)
{
    ui->setupUi(this);
}

hotel::~hotel()
{
    delete ui;
}

hotel::hotel(QString nmHotel, QString alamat, int telp, QString ket, QString gambar)
{
    this->nmHotel = nmHotel;
    this->alamat = alamat;
    this->telp = telp;
    this->ket = ket;
    this->gambar = gambar;
}

void hotel::setNmHotel(QString nmHotel)
{
    this->nmHotel = nmHotel;
}

QString hotel::getNmHotel()
{
    return this->nmHotel;
}

void hotel::setAlamat(QString alamat)
{
    this->alamat = alamat;
}

QString hotel::getAlamat()
{
    return this->alamat;
}

void hotel::setTelp(int telp)
{
    this->telp = telp;
}

int hotel::getTelp()
{
    return this->telp;
}

void hotel::setKet(QString ket)
{
    this->ket = ket;
}

QString hotel::getKet()
{
    return this->ket;
}

void hotel::setGambar(QString gambar)
{
    this->gambar = gambar;
}

QString hotel::getGambar()
{
    return this->gambar;
}

void hotel::on_pushButton_clicked()
{
    hotel h;

    h.setNmHotel(ui->namaHotelLineEdit->text());
    h.setAlamat(ui->alamatLineEdit->text());
    h.setTelp(ui->teleponLineEdit->text().toInt());
    h.setKet(ui->keteranganLineEdit->text());
    h.setGambar(ui->namaGambarLineEdit->text());

    qDebug()<<"Nama Hotel : "<<h.getNmHotel()<<"\n";
    qDebug()<<"Alamat : "<<h.getAlamat()<<"\n";
    qDebug()<<"No HP : "<<h.getTelp()<<"\n";
    qDebug()<<"Keterangan : "<<h.getKet()<<"\n";
    qDebug()<<"Nama Gambar : "<<h.getGambar()<<"\n";
}

