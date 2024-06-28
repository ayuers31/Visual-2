#include "even.h"
#include "ui_even.h"

even::even(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::even)
{
    ui->setupUi(this);
}

void even::setNmEvent(QString nmEvent)
{
    this->nmEvent = nmEvent;
}

QString even::getNmEvent()
{
    return this->nmEvent;
}

void even::setLokasi(QString lokasi)
{
    this->lokasi = lokasi;
}

QString even::getLokasi()
{
    return this->lokasi;
}

void even::setTanggal(QDate tanggal)
{
    this->tanggal = tanggal;
}

QDate even::getTanggal()
{
    return this->tanggal;
}

void even::setGambar(QString gambar)
{
    this->gambar = gambar;
}

QString even::getGambar()
{
    return this->gambar;
}

void even::setKet(QString ket)
{
    this->ket = ket;
}

QString even::getKet()
{
    return this->ket;
}

even::~even()
{
    delete ui;
}

even::even(QString nmEvent, QString lokasi, QDate tanggal, QString gambar, QString ket)
{
    this->nmEvent = nmEvent;
    this->lokasi = lokasi;
    this->tanggal = tanggal;
    this->gambar = gambar;
    this->ket = ket;
}

void even::on_pushButton_clicked()
{
    even e;

    e.setNmEvent(ui->namaEventLineEdit->text());
    e.setLokasi(ui->lokasiLineEdit->text());
    e.setTanggal(ui->tanggalDateEdit->date());
    e.setGambar(ui->namaGambarLineEdit->text());
    e.setKet(ui->keteranganLineEdit->text());

    qDebug()<<"Nama Event : "<<e.getNmEvent()<<"\n";
    qDebug()<<"Lokasi : "<<e.getLokasi()<<"\n";
    qDebug()<<"Tanggal : "<<e.getTanggal()<<"\n";
    qDebug()<<"Nama Gambar : "<<e.getGambar()<<"\n";
    qDebug()<<"Keterangan : "<<e.getKet()<<"\n";
}

