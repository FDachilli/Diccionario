#ifndef NODORWAY_H
#define NODORWAY_H

#include <iostream>
#include <QChar>
#include "list"

class nodoRway
{
public:
    nodoRway();
    ~nodoRway();
    QChar obtenerContenido ();
    bool devolverValor();
    nodoRway *& obtenerSiguiente(int c);
    void ponerValor(bool val);
    void ponerContenido(QChar c);
    void ponerSiguiente (int c, nodoRway *& x);
    bool lleno();

private:
    QChar caracter;
    bool valor;
    nodoRway * next[256];

};

#endif // NODORWAY_H
