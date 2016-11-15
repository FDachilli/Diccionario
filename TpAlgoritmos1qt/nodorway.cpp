#include <iostream>
#include "nodorway.h"
#include <QChar>
#include "list"

nodoRway::nodoRway()
{
    caracter = ' ';
    valor = false;
    for (int i= 0; i< 256; i++)
        next[i]= NULL;
}

nodoRway::~nodoRway()
{

}

QChar nodoRway::obtenerContenido()
{
    return caracter;
}

void nodoRway::ponerContenido(QChar c)
{
    caracter= c;
}

bool nodoRway::lleno()
{
    for (int i= 0; i < 256; i++)
    {
        if (next[i]!= NULL)
            return true;
    }
    return false;
}

void nodoRway:: ponerValor(bool val)
{
    valor= val;
}
nodoRway *& nodoRway:: obtenerSiguiente (int c)
{
    return next[c];
}

void nodoRway::ponerSiguiente(int c, nodoRway * &x)
{
    next[c]= x;
}

bool nodoRway::devolverValor()
{
    return valor;
}

