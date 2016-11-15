#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <QChar>

using namespace std;

class Nodo {
public:
    Nodo();
    ~Nodo();
    QChar obtenerContenido ();
    bool esPalabra ();
    void borrarPalabra();
    void ponerCaracter(QChar C);
    void marcarPalabra();
    Nodo* &Menor ();
    Nodo* &Igual ();
    Nodo* &Mayor ();

private:
        QChar letra;
        Nodo* men;
        Nodo* igual;
        Nodo* may;
        bool valor;
};



#endif // NODE_H_INCLUDED
