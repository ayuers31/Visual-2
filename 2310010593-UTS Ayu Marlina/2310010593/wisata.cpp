#include "wisata.h"
#include "ui_wisata.h"

wisata::wisata(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::wisata)
{
    ui->setupUi(this);
}

wisata::~wisata()
{
    delete ui;
}

wisata::wisata(QString nmWisata, QString alamat, QString sarana, QString ket, QString gambar, QString x, QString y)
{
    this->nmWisata = nmWisata;
    this->alamat = alamat;
    this->sarana = sarana;
    this->ket = ket;
    this->gambar = gambar;
    this->x = x;
    this->y = y;
}

void wisata::setNmWisata(QString nmWisata)
{
    this->nmWisata = nmWisata;
}

QString wisata::getNmWisata()
{
    return this->nmWisata;
}

void wisata::setAlamat(QString alamat)
{
    this->alamat = alamat;
}

QString wisata::getAlamat()
{
    return this->alamat;
}

void wisata::setSarana(QString sarana)
{
    this->sarana = sarana;
}

QString wisata::getSarana()
{
    return this->sarana;
}

void wisata::setKet(QString ket)
{
    this->ket = ket;
}

QString wisata::getKet()
{
    return this->ket;
}

void wisata::setGambar(QString gambar)
{
    this->gambar = gambar;
}

QString wisata::getGambar()
{
    return this->gambar;
}

void wisata::setX(QString x)
{
    this->x = x;
}

QString wisata::getX()
{
    return this->x;
}

void wisata::setY(QString y)
{
    this->y = y;
}

QString wisata::getY()
{
    return this->y;
}

void wisata::on_pushButton_clicked()
{
    wisata w;

    w.setNmWisata(ui->namaWisataLineEdit->text());
    w.setAlamat(ui->alamatLineEdit->text());
    w.setSarana(ui->saranaLineEdit->text());
    w.setKet(ui->keteranganLineEdit->text());
    w.setGambar(ui->namaGambarLineEdit->text());
    w.setX(ui->koorXLineEdit->text());
    w.setY(ui->koorYLineEdit->text());

    qDebug()<<"Nama Wisata : "<<w.getNmWisata()<<"\n";
    qDebug()<<"Alamat : "<<w.getAlamat()<<"\n";
    qDebug()<<"Sarana : "<<w.getSarana()<<"\n";
    qDebug()<<"Keterangan : "<<w.getKet()<<"\n";
    qDebug()<<"Nama Gambar : "<<w.getGambar()<<"\n";
    qDebug()<<"Koordinat X : "<<w.getX()<<"\n";
    qDebug()<<"Koordinat Y : "<<w.getY()<<"\n";
}

