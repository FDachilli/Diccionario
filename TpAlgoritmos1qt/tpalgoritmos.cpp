#include "tpalgoritmos.h"
#include "ui_tpalgoritmos.h"

TPAlgoritmos::TPAlgoritmos(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TPAlgoritmos)
{
    ui->setupUi(this);
}

TPAlgoritmos::~TPAlgoritmos()
{
    delete ui;
}


void TPAlgoritmos::on_botonContinuar_clicked()
{
    Principal * botonContinuar = new Principal ();
    botonContinuar -> show ();
    this->hide();

}

