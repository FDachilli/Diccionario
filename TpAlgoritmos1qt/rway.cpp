#include "rway.h"
#include "nodorway.h"
#include <QString>
#include <QDebug>
#include <QChar>
#include <QFile>
#include <QTextStream>
#include <QTextCodec>
#include "list"

rway::rway()
{
    root= new nodoRway();
    F=256;
}

rway::~rway()
{

}

void rway::agregarPalabra(QString palabra)
{
    nodoRway * cursor= root;
    nodoRway* x ;
    if (palabra.length() ==0)
    {
        cursor->ponerValor(true);
        return;
    }
    else
    {
        for (int i = 0; i< palabra.length(); i++)
        {
            QChar letra=palabra[i];
            int j=letra.unicode();
            x = cursor->obtenerSiguiente(j);
            if (x!= NULL)
                cursor= x;
            else
            {
                nodoRway* nuevo = new nodoRway();
                nuevo->ponerContenido (j);
                cursor->ponerSiguiente(j, nuevo);
                cursor= nuevo;
            }
            if (i== (palabra.length()-1))
                cursor->ponerValor(true);

        }
    }
}



void rway::borrar(nodoRway *&x, QString palabra, int d)
{
        if (x == NULL)
        {
             return;
        }

        if (d == palabra.length()-1)
        {
             if (x->obtenerSiguiente(palabra[d].unicode())->devolverValor())
                  if (!x->obtenerSiguiente(palabra [d].unicode())->lleno())
                    {
                      delete x->obtenerSiguiente(palabra [d].unicode());
                      x->obtenerSiguiente(palabra [d].unicode())=NULL;
                    }
             else
                  {
                        x->obtenerSiguiente(palabra [d].unicode())->ponerValor(false);
                        return;
                  }
        }
        if (d< palabra.length()-1)
        {

            borrar (x->obtenerSiguiente(palabra [d].unicode()),palabra,d+1);
            if ((!x->obtenerSiguiente(palabra[d].unicode())->lleno()) && (!x->obtenerSiguiente(palabra[d].unicode())->devolverValor ()))
            {
                delete x->obtenerSiguiente(palabra [d].unicode());
                x->obtenerSiguiente(palabra [d].unicode())=NULL;
            }
            else
                return;
        }
}

void rway::eliminarPalabra(QString palabra)
{
    borrar(root, palabra, 0);
}


nodoRway *rway::buscar(nodoRway *x, QString palabra, int i)
{
    if (x == NULL)
        return NULL;

    if (i == palabra.length())
        return x;
    QChar letra=palabra[i];
    int j=letra.unicode();
    return buscar(x->obtenerSiguiente(j), palabra, i+1);

}

bool rway::buscarPalabra(QString palabra)
{
    nodoRway *x= buscar(root, palabra, 0);
    if (x == NULL)
       return false;
    else
        return x->devolverValor();
}



void rway:: anexar (nodoRway* x, QString & prefijo, list <QString> &palabras)
{
   if (x == NULL)
   {
    return;
   }

   if (x->devolverValor())
   {
        palabras.push_back(prefijo);
   }
   for (int c = 0; c < F; c++)
   {
           if (x->obtenerSiguiente(c)!=NULL)
        {
            prefijo.push_back(x->obtenerSiguiente(c)->obtenerContenido());
            anexar(x->obtenerSiguiente(c), prefijo, palabras);
            prefijo.remove(prefijo.length()-1, prefijo.length());
        }
   }
}

void  rway:: mostrarPalabrasPrefijo(QString prefix, list<QString> &palabras)
{
    anexar(buscar(root, prefix, 0), prefix, palabras);
}

void rway::PasarArchivoAarbol(QFile & archivo)
{
    QTextStream in(&archivo);
    in.setAutoDetectUnicode(true);
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());

    while (!in.atEnd())
           {
                QString palabra=in.readLine();
                agregarPalabra(palabra);
           }
}



void rway::listarPalabras(list<QString> &palabras)
{
    QString prefix = "";
    anexar(root,prefix , palabras);
}

void rway::pasarArbolAArchivo(QFile & archivo)
    {
        QString str= "";
        nodoRway*x= root;
        pasarArbol (x, archivo, str);
    }


void rway::pasarArbol(nodoRway *x, QFile & archivo, QString &str)
{
    if (x == NULL)
   {
    return;
   }
   if (x->devolverValor())
   {
       QTextStream out (& archivo);
       out<< str << endl;
   }
   for (int c = 0; c < F; c++)
   {
           if (x->obtenerSiguiente(c)!=NULL)
        {
            str.push_back(x->obtenerSiguiente(c)->obtenerContenido());
            pasarArbol(x->obtenerSiguiente(c),archivo , str);
            str.remove(str.length()-1, str.length());
        }
   }
}

