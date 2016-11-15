#ifndef RWAY_H
#define RWAY_H
#include "nodorway.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <iostream>
#include <list>

using namespace std;

class rway
{
public:
    rway();
    ~rway();
    void agregarPalabra(QString palabra);
    bool buscarPalabra(QString palabra);
    void eliminarPalabra (QString palabra);
    void mostrarPalabrasPrefijo (QString prefijo, list <QString> & palabras);
    void PasarArchivoAarbol(QFile & archivo);
    void listarPalabras(list <QString> & palabras);
    void pasarArbolAArchivo(QFile & archivo);
private:
    nodoRway* root;
    int F;
    nodoRway*  buscar(nodoRway* x, QString palabra, int d);
    void borrar(nodoRway* & x, QString palabra, int d);
    void anexar ( nodoRway* x,QString &prefijo, list<QString> &palabras);
    void pasarArbol(nodoRway* x, QFile & archivo, QString &str);
};

#endif // RWAY_H
