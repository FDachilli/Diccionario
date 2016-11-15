#ifndef TPALGORITMOS_H
#define TPALGORITMOS_H

#include <QMainWindow>
#include <principal.h>


namespace Ui {
class TPAlgoritmos;
}

class TPAlgoritmos : public QMainWindow
{
    Q_OBJECT

public:
    explicit TPAlgoritmos(QWidget *parent = 0);
    ~TPAlgoritmos();

private slots:
    void on_botonContinuar_clicked();

private:
    Ui::TPAlgoritmos *ui;
};

#endif // TPALGORITMOS_H
