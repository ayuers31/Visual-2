#ifndef EVEN_H
#define EVEN_H

#include <QDialog>
#include <QString>
#include <QDate>

namespace Ui {
class even;
}

class even : public QDialog
{
    Q_OBJECT

public:
    explicit even(QWidget *parent = nullptr);
    ~even();

    even(QString nmEvent, QString lokasi, QDate tanggal, QString gambar, QString ket);

    void setNmEvent(QString nmEvent);
    QString getNmEvent();

    void setLokasi(QString lokasi);
    QString getLokasi();

    void setTanggal(QDate tanggal);
    QDate getTanggal();

    void setGambar(QString gambar);
    QString getGambar();

    void setKet(QString ket);
    QString getKet();

private slots:
    void on_pushButton_clicked();

private:
    Ui::even *ui;

    QString nmEvent, lokasi, gambar, ket;
    QDate tanggal;
};

#endif // EVEN_H
