#ifndef TERNARY_H
#define TERNARY_H
#include <iostream>
#include "Nodo.h"
#include <Qstring>
#include "list"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>

using namespace std;

class Ternary
{
    public:
        Ternary();
        void agregarPalabra (QString palabra);
        void eliminarPalabra (QString palabra);
        bool buscarPalabra(QString palabra);
        void mostrarPalabrasPrefijo(list <QString> & palabras, QString prefijo);
        void cargarArchivoAArbol (QFile &archivo);
        void pasarArbolAArchivo (QFile &archivo);
        void listarPalabras (list<QString>&palabras);
        virtual ~Ternary();

    private:
        Nodo*ternario;
        void ponerEnArbol (Nodo* &x, QString palabra, int d);
        Nodo * buscar (Nodo*x, QString palabra, int d);
        void eliminar (Nodo* x, QString palabra, int d);
        void buscoPalabrasPrefijo (Nodo * x, QString & prefijo, list <QString> & palabrasPref);
        void imprimir (Nodo*x, QString & str, list <QString> &palabras);
        void pasarArbol (Nodo*x, QFile &archivo, QString str);


};



#endif // TERNARY_H
