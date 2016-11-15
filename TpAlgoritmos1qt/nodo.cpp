#include <iostream>
#include <fstream>
#include "Nodo.h"
#include <QChar>

using namespace std;

Nodo :: Nodo()
{
    letra= ' ';
    men=NULL;
    igual=NULL;
    may=NULL;
    valor= false;
}


Nodo::~Nodo()
{

}

QChar Nodo::obtenerContenido()
{
    return letra;
}

bool Nodo:: esPalabra()
{
    return valor;
}

void Nodo::borrarPalabra()
{
    valor=false;
}

Nodo* &Nodo:: Menor ()
{
    return men;
}

Nodo* &Nodo:: Igual ()
{
    return igual;
}

Nodo* &Nodo:: Mayor ()
{
    return may;
}

void Nodo::ponerCaracter(QChar C)
{
    letra= C;
}

void Nodo::marcarPalabra()
{
    valor= true;
}





