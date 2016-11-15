#include "ternary.h"
#include "Nodo.h"
#include "list"
#include <QString>
#include <QDebug>
#include <QChar>
#include <QFile>
#include <QTextStream>
#include <QTextCodec>

Ternary::Ternary()
{
    ternario=NULL;
}

void Ternary::agregarPalabra(QString palabra)
{
    ponerEnArbol (ternario,palabra,0);
}

bool Ternary::buscarPalabra(QString palabra)
{
    Nodo*x= buscar (ternario, palabra, 0);
    if (x == NULL)
        return false;
    return x->esPalabra();

}

void Ternary:: eliminarPalabra (QString palabra)
     {
         eliminar (ternario, palabra, 0);
     }

void Ternary:: mostrarPalabrasPrefijo (list <QString> & palabras, QString prefijo)
{
    Nodo * x= buscar(ternario,prefijo,0);
    if (x!=NULL)
    {
        if (x->esPalabra())
            palabras.push_back (prefijo);
            buscoPalabrasPrefijo (x->Igual(), prefijo, palabras);
    }

}
void Ternary::listarPalabras(list<QString> &palabras)
{
    QString str= "";
    Nodo*x=ternario;
    imprimir (x, str, palabras);
}

void Ternary::ponerEnArbol (Nodo* &x, QString palabra, int d)
        {
            QChar l= palabra [d];
            if (x == NULL)
            {
                x= new Nodo ();
                x->ponerCaracter(l);
            }
            if (l<x->obtenerContenido())
                ponerEnArbol (x-> Menor(), palabra, d);
            else
            if (l>x->obtenerContenido())
                ponerEnArbol (x->Mayor(), palabra, d);
            else
            if (d<palabra.length()-1)
                ponerEnArbol (x->Igual(), palabra, d+1);
            else
            {
                x->marcarPalabra ();
                return;
            }
        }

Nodo * Ternary:: buscar (Nodo*x, QString palabra, int d)
{
    if (x==NULL)
        return NULL;

    QChar l= palabra [d];
    if (l < x->obtenerContenido())
        return buscar(x->Menor(), palabra, d);
    else
    if (l > x->obtenerContenido())
        return buscar(x->Mayor(), palabra, d);
    else
    if (d < palabra.length()-1)
        return buscar(x->Igual(), palabra, d+1);
    else
        return x;

}

void Ternary:: eliminar (Nodo* x, QString palabra, int d)
        {
            if (x == NULL)
                return;

            if (palabra [d] < x->obtenerContenido())
                   eliminar (x->Menor(), palabra, d);
            else
            if (palabra [d]> x->obtenerContenido())
                   eliminar (x->Mayor(), palabra, d);
            else
            {
                if ((x->esPalabra()) && (d == palabra.length ()- 1))
                        x->borrarPalabra();
                else
                if (d < palabra.length ()-1)
                        eliminar(x->Igual(), palabra, d+1);
            }
        }

void Ternary:: buscoPalabrasPrefijo (Nodo * x, QString & prefijo, list <QString> & palabrasPref)
     {
         if (x== NULL)
              return;
         buscoPalabrasPrefijo(x->Menor(), prefijo, palabrasPref);
         prefijo.push_back (x->obtenerContenido());
         if (x->esPalabra())
             palabrasPref.push_back (prefijo);
         buscoPalabrasPrefijo (x->Igual(), prefijo,palabrasPref);
         prefijo.remove (prefijo.length ()-1,prefijo.length ());
         buscoPalabrasPrefijo(x->Mayor(), prefijo, palabrasPref);
      }

void Ternary:: imprimir (Nodo*x, QString & str, list <QString> &palabras)
      {

           if (x == NULL)
                 return;
           imprimir (x->Menor(), str, palabras);
           str.push_back (x->obtenerContenido());
           if (x->esPalabra())
                  palabras.push_back(str);
           imprimir(x->Igual(), str, palabras);
           str.remove (str.length()-1,str.length());
           imprimir(x->Mayor(), str, palabras);

       }
void Ternary::pasarArbolAArchivo(QFile & archivo)
    {
        QString str= "";
        Nodo*x=ternario;
        pasarArbol (x, archivo, str);
    }


void Ternary::pasarArbol(Nodo* x, QFile & archivo, QString str)
{
    if (x == NULL)
        return;
    pasarArbol (x->Menor(), archivo, str);
    str.push_back (x->obtenerContenido());
    if (x->esPalabra())
    {
            QTextStream out (& archivo);
            out<< str << endl;
    }
    pasarArbol(x->Igual(), archivo, str);
    str.remove (str.length()-1,str.length());
    pasarArbol(x->Mayor(), archivo, str);
}

void Ternary::cargarArchivoAArbol(QFile & archivo)
{
    QTextStream in(&archivo);

    while (!in.atEnd())
     {
        QString palabra=in.readLine();
        agregarPalabra(palabra);
     }
}


Ternary::~Ternary()
{

}


