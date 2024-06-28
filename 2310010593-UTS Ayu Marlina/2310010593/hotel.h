#ifndef HOTEL_H
#define HOTEL_H

#include <QDialog>
#include <QString>

namespace Ui {
class hotel;
}

class hotel : public QDialog
{
    Q_OBJECT

public:
    explicit hotel(QWidget *parent = nullptr);
    ~hotel();

    hotel(QString nmHotel, QString alamat, int telp, QString ket, QString gambar);

    void setNmHotel(QString nmHotel);
    QString getNmHotel();

    void setAlamat(QString alamat);
    QString getAlamat();

    void setTelp(int telp);
    int getTelp();

    void setKet(QString ket);
    QString getKet();

    void setGambar(QString gambar);
    QString getGambar();

private slots:
    void on_pushButton_clicked();

private:
    Ui::hotel *ui;

    QString nmHotel, alamat, ket, gambar;
    int telp;
};

#endif // HOTEL_H
