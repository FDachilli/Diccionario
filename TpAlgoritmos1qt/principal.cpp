#include "principal.h"
#include "ui_principal.h"
#include "ternary.h"
#include "rway.h"
#include <QMessageBox>
#include <QFileDialog>
#include "list"

Principal::Principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal)
{
    ui->setupUi(this);
    modificoT=false;
    yaGuardoT=false;
    modificoR=false;
    yaGuardoR=false;
}

Principal::~Principal()
{
    delete ui;
}


bool Principal::saveFileT(QString nombre)
{
    QFile archivo(nombre);
    if (archivo.open(QFile::WriteOnly | QIODevice :: Text))
    {

              ArbolTernary.pasarArbolAArchivo(archivo);
              archivo.close();
              yaGuardoT=true;
              return true;


     }

    else
    {
        QMessageBox:: warning(this, "Error", tr ("No se pudo abrir el archivo %1 \n Error: %2")
                              .arg (nombre) .arg(archivo.errorString()));
        return false;
    }
    return false;
}

bool Principal::saveFileR(QString nombre)
{
    QFile archivo(nombre);
    if (archivo.open(QFile::WriteOnly | QIODevice :: Text))
    {
            ArbolRway.pasarArbolAArchivo(archivo);
            archivo.close();
            yaGuardoR=true;
            return true;

    }
    else
        {
        QMessageBox:: warning(this, "Error", tr ("No se pudo abrir el archivo %1 \n Error: %2")
                              .arg (nombre) .arg(archivo.errorString()));
        return false;
        }
        return false;
        }




bool Principal::maybeSaveT()
{
    if ((modificoT) && (!yaGuardoT))
            {
                QMessageBox::StandardButton opcion= QMessageBox::warning(this,
                                                                      "Arbol Ternario", tr ("El documento ha sido modificado.\n¿Usted quiere guardar los cambios?"),
                                                                      QMessageBox:: Yes | QMessageBox:: No| QMessageBox:: Cancel);
                if (opcion==QMessageBox::Yes)
                {
                    if (nombreT.isEmpty())
                        return on_botonGuardarComoT_clicked();
                    else
                        return saveFileT(nombreT);
                }
                else
                if (opcion==QMessageBox::Cancel)
                    return false;
                else
                    return true;

            }
            else
                return true;
}

bool Principal::maybeSaveR()

{
    if ((modificoR) && (!yaGuardoR))
        {
            QMessageBox::StandardButton opcion= QMessageBox::warning(this,
                                                                  "Arbol R-way", tr ("El documento ha sido modificado.\n¿Usted quiere guardar los cambios?"),
                                                                  QMessageBox:: Yes | QMessageBox:: No| QMessageBox:: Cancel);
            if (opcion==QMessageBox::Yes)
            {
                if (nombreR.isEmpty())
                    return on_botonGuardarComoR_clicked();
                else
                    return saveFileR(nombreR);
            }
            else
            if (opcion==QMessageBox::Cancel)
                return false;
            else
                return true;

        }
        else
            return true;

return false;
}

void Principal::listar()
{
    if (ui->tabWidget->currentIndex()==0)
    {
        ui->listaT->clear();
        list<QString> palabras;
        ArbolTernary.listarPalabras(palabras);
        for (list <QString>::iterator it= palabras.begin(); it!=palabras.end(); it++)
        {
            QString sal=*it;
            ui->listaT->addItem(sal);
        }
     }
    else
    if (ui->tabWidget->currentIndex()==1)
    {
        ui->listaR->clear();
        list<QString> palabras;
        ArbolRway.listarPalabras(palabras);
        for (list <QString>::iterator it= palabras.begin(); it!=palabras.end(); it++)
        {
            QString sal=*it;
            ui->listaR->addItem(sal);
        }
    }
}




void Principal::on_actionSalir_triggered()
{

    if (maybeSaveR()&& maybeSaveT())

     this->hide();
}


void Principal::on_borrarR_clicked()
{
    ui->barraDeEstadoR->clear();
    QList<QListWidgetItem *> seleccion = ui->listaR->selectedItems();
    if (!seleccion.isEmpty())
    {
            QListWidgetItem * seleccionada=seleccion.first ();
            QString entrada = seleccionada->text();
            ArbolRway.eliminarPalabra(entrada);
            modificoR=true;
            ui->barraDeEstadoR->setText("La palabra ha sido eliminada");
            listar();
            ultimaEliminadaR=entrada;
            ui->deshacerR->setEnabled(true);

    }
    else
        QMessageBox::warning(this, "Atención", tr ("No hay ninguna palabra seleccionada"));
}

void Principal::on_borrarT_clicked()
{
    ui->barraDeEstadoT->clear();
    QList<QListWidgetItem *> seleccion = ui->listaT->selectedItems();
    if (!seleccion.isEmpty())
    {
            QListWidgetItem * seleccionada=seleccion.first ();
            QString entrada = seleccionada->text();
            modificoT=true;
            ArbolTernary.eliminarPalabra(entrada);
            ui->barraDeEstadoT->setText("La palabra ha sido eliminada");
            listar();
            ultimaEliminadaT=entrada;
            ui->deshacerT->setEnabled(true);

    }
    else
        QMessageBox::warning(this, "Atención", tr ("No hay ninguna palabra seleccionada"));
}

void Principal::on_listaT_itemSelectionChanged()
{
    QList<QListWidgetItem *> seleccion = ui->listaT->selectedItems();
    if (!seleccion.isEmpty())
        ui->borrarT->setEnabled(true);
    else
        ui->borrarT->setDisabled(true);
}

void Principal::on_listaR_itemSelectionChanged()
{
    QList<QListWidgetItem *> seleccion = ui->listaR->selectedItems();
    if (!seleccion.isEmpty())
        ui->borrarR->setEnabled(true);
    else
        ui->borrarR->setDisabled(true);
}

void Principal::on_agregarR_clicked()
{
    ui->barraDeEstadoR->clear();
    QString entrada=ui->entradaAgregarR->text();
    if (!entrada.isEmpty())
    {
        if (ArbolRway.buscarPalabra(entrada))
             ui->barraDeEstadoR->setText("La palabra ya existe");
        else
        {
            modificoR=true;
            ArbolRway.agregarPalabra(entrada);
            listar();
            ui->barraDeEstadoR->setText("La palabra ha sido guardada");
            QList<QListWidgetItem *> seleccion=ui->listaR->findItems(entrada,Qt::MatchExactly);
            QListWidgetItem * seleccionada=seleccion.first ();
            seleccionada->setSelected(true);
            ui->listaR->setCurrentItem(seleccionada);
        }
    }
    else
        QMessageBox::warning(this, "Atención", tr ("Ingrese una palabra"));
        ui->entradaAgregarR->clear();
}

void Principal::on_agregarT_clicked()
{
    ui->barraDeEstadoT->clear();
    QString entrada=ui->entradaAgregarT->text();
    if (!entrada.isEmpty())
    {
        if (ArbolTernary.buscarPalabra(entrada))
             ui->barraDeEstadoT->setText("La palabra ya existe");
        else
        {
            modificoT=true;
            ArbolTernary.agregarPalabra(entrada);
            listar();
            ui->barraDeEstadoT->setText("La palabra ha sido guardada");
            QList<QListWidgetItem *> seleccion=ui->listaT->findItems(entrada,Qt::MatchExactly);
            QListWidgetItem * seleccionada=seleccion.first ();
            seleccionada->setSelected(true);
            ui->listaT->setCurrentItem(seleccionada);
        }
    }
    else
        QMessageBox::warning(this, "Atención", tr ("Ingrese una palabra"));
        ui->entradaAgregarT->clear();
}

void Principal::on_buscarPalabraR_clicked()
{
    ui->barraDeEstadoR->clear();
    QString entrada=ui->entradaBuscarR->text();

    if (!entrada.isEmpty())
    {
        if (ArbolRway.buscarPalabra(entrada))
        {
            QList<QListWidgetItem *> seleccion=ui->listaR->findItems(entrada,Qt::MatchExactly);
            QListWidgetItem * seleccionada=seleccion.first ();
            seleccionada->setSelected(true);
            ui->listaR->setCurrentItem(seleccionada);
            ui->barraDeEstadoR->setText("La palabra ha sido encontrada");
        }
        else
            ui->barraDeEstadoR->setText("La palabra no existe");

    }
    else
        QMessageBox::warning(this, "Atención", tr ("Ingrese una palabra"));
    ui->entradaBuscarR->clear();
}

void Principal::on_buscarPalabraT_clicked()
{
    ui->barraDeEstadoT->clear();
    QString entrada=ui->entradaBuscarT->text();

    if (!entrada.isEmpty())
    {
        if (ArbolTernary.buscarPalabra(entrada))
        {
            QList<QListWidgetItem *> seleccion=ui->listaT->findItems(entrada,Qt::MatchExactly);
            QListWidgetItem * seleccionada=seleccion.first ();
            seleccionada->setSelected(true);
            ui->listaT->setCurrentItem(seleccionada);
            ui->barraDeEstadoT->setText("La palabra ha sido encontrada");
        }
        else
            ui->barraDeEstadoT->setText("La palabra no existe");

    }
    else
        QMessageBox::warning(this, "Atención", tr ("Ingrese una palabra"));
    ui->entradaBuscarT->clear();
}

void Principal::on_deshacerT_clicked()
{
    ArbolTernary.agregarPalabra(ultimaEliminadaT);
    listar();
    QList<QListWidgetItem *> seleccion=ui->listaT->findItems(ultimaEliminadaT,Qt::MatchExactly);
    QListWidgetItem * seleccionada=seleccion.first ();
    seleccionada->setSelected(true);
    ui->listaT->setCurrentItem(seleccionada);
    ui->deshacerT->setDisabled(true);
}


void Principal::on_deshacerR_clicked()
{
    ArbolRway.agregarPalabra(ultimaEliminadaR);
    listar();
    QList<QListWidgetItem *> seleccion=ui->listaR->findItems(ultimaEliminadaR,Qt::MatchExactly);
    QListWidgetItem * seleccionada=seleccion.first ();
    seleccionada->setSelected(true);
    ui->listaR->setCurrentItem(seleccionada);
    ui->deshacerR->setDisabled(true);
}

void Principal::on_entradaPrefijoT_textEdited(const QString &arg1)
{
    ui->listaPrefijoT->clear();
    list <QString> palabras;
    ArbolTernary.mostrarPalabrasPrefijo(palabras,arg1);
    if (!palabras.empty())
    {
        list <QString>:: iterator it;
        for (list <QString>::iterator it= palabras.begin(); it!=palabras.end(); it++)
        {
            QString sal=*it;
            ui->listaPrefijoT->addItem(sal);
        }
    }
}

void Principal::on_entradaPrefijoR_textEdited(const QString &arg1)
{
    ui->listaPrefijoR->clear();
    list <QString> palabras;
    ArbolRway.mostrarPalabrasPrefijo(arg1, palabras);
    if (!palabras.empty())
    {
        list <QString>:: iterator it;
        for (list <QString>::iterator it= palabras.begin(); it!=palabras.end(); it++)
        {
            QString sal=*it;
            ui->listaPrefijoR->addItem(sal);
        }
    }

}

void Principal::on_botonAbrirT_clicked()
{
    if (maybeSaveT())
    {
        QString fileName = QFileDialog :: getOpenFileName(this,
                                                          "Seleccione el archivo...",
                                                          "",
                                                          "Text Files (*.txt)");

    if (! fileName.isEmpty())
    {
        QFile archivo (fileName);
        if (archivo.open(QIODevice::ReadOnly| QIODevice::Text))
        {

                ui->listaT->clear();
                ui->barraDeEstadoT->clear();
                ui->listaPrefijoT->clear();
                ArbolTernary.cargarArchivoAArbol(archivo);
                archivo.close();
                nombreT=fileName;
                yaGuardoT=false;
                listar();

        }
        else
            QMessageBox:: warning(this, "Error", tr ("No se pudo abrir el archivo %1 \n Error: %2")
                                  .arg (fileName) .arg(archivo.errorString()));
    }
}
}

void Principal::on_botonAbrirR_clicked()
{
    if (maybeSaveR())
    {
        QString fileName = QFileDialog :: getOpenFileName(this,
                                                          "Seleccione el archivo...",
                                                          "",
                                                          "Text Files (*.txt)");

    if (! fileName.isEmpty())
    {
        QFile archivo (fileName);
        if (archivo.open(QIODevice::ReadOnly| QIODevice::Text))
        {

                ui->listaR->clear();
                ui->barraDeEstadoR->clear();
                ui->listaPrefijoR->clear();
                ArbolRway.PasarArchivoAarbol(archivo);
                archivo.close();
                nombreR=fileName;
                yaGuardoR=false;
                listar();

        }
        else
            QMessageBox:: warning(this, "Error", tr ("No se pudo abrir el archivo %1 \n Error: %2")
                                  .arg (fileName) .arg(archivo.errorString()));
    }
    }
}


bool Principal::on_botonGuardarT_clicked()
{
    if (nombreT.isEmpty())
        return on_botonGuardarComoT_clicked();
    else
        return saveFileT(nombreT);
    return false;
}

bool Principal::on_botonGuardarR_clicked()
{
    if (nombreR.isEmpty())
        return on_botonGuardarComoR_clicked();
    else
        return saveFileR(nombreR);

    return false;
}

bool Principal::on_botonGuardarComoT_clicked()
{
    QString fileName = QFileDialog :: getSaveFileName(this,
                                                      "Guardar como...",
                                                      "",
                                                      "Text Files (*.txt)");
    if (fileName.isEmpty ())
        return false;
    else
    {

            nombreT= fileName;
            return saveFileT (nombreT);
    }
}

bool Principal::on_botonGuardarComoR_clicked()
{
    QString fileName = QFileDialog :: getSaveFileName(this,
                                                      "Guardar como...",
                                                      "",
                                                      "Text Files (*.txt)");
    if (fileName.isEmpty ())
        return false;
    else
    {
            nombreR= fileName;
            return saveFileR (nombreR);

    }
    return false;
}
