#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QFileDialog>
#include "ternary.h"
#include "rway.h"
#include <qlist.h>

namespace Ui {
class Principal;
}

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principal(QWidget *parent = 0);
    ~Principal();


private slots:


    void on_actionSalir_triggered();

    void on_borrarR_clicked();

    void on_borrarT_clicked();

    void on_listaT_itemSelectionChanged();

    void on_listaR_itemSelectionChanged();

    void on_agregarR_clicked();

    void on_agregarT_clicked();

    void on_buscarPalabraR_clicked();

    void on_buscarPalabraT_clicked();

    void on_deshacerT_clicked();

    void on_deshacerR_clicked();

    void on_entradaPrefijoT_textEdited(const QString &arg1);

    void on_entradaPrefijoR_textEdited(const QString &arg1);

    void on_botonAbrirT_clicked();

    void on_botonAbrirR_clicked();

    bool on_botonGuardarT_clicked();

    bool on_botonGuardarR_clicked();

    bool on_botonGuardarComoT_clicked();

    bool on_botonGuardarComoR_clicked();

private:
    Ui::Principal *ui;
    bool saveFileT (QString nombre);
    bool saveFileR (QString nombre);
    bool maybeSaveT ();
    bool maybeSaveR ();
    void listar ();
    QString nombreT;
    QString nombreR;
    bool modificoT;
    bool modificoR;
    bool yaGuardoT;
    bool yaGuardoR;
    Ternary ArbolTernary;
    rway ArbolRway;
    QString ultimaEliminadaT;
    QString ultimaEliminadaR;
};

#endif // PRINCIPAL_H
