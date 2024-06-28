#ifndef WISATA_H
#define WISATA_H

#include <QDialog>
#include <QString>

namespace Ui {
class wisata;
}

class wisata : public QDialog
{
    Q_OBJECT

public:
    explicit wisata(QWidget *parent = nullptr);
    ~wisata();

    wisata(QString nmWisata, QString alamat, QString sarana, QString ket, QString gambar, QString x, QString y);

    void setNmWisata(QString nmWisata);
    QString getNmWisata();

    void setAlamat(QString alamat);
    QString getAlamat();

    void setSarana(QString sarana);
    QString getSarana();

    void setKet(QString ket);
    QString getKet();

    void setGambar(QString gambar);
    QString getGambar();

    void setX(QString x);
    QString getX();

    void setY(QString y);
    QString getY();

private slots:
    void on_pushButton_clicked();

private:
    Ui::wisata *ui;

    QString nmWisata, alamat, sarana, ket, gambar, x, y;
};

#endif // WISATA_H
