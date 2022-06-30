#include "Venta.h"
#include "Persona.h"
#include "Coche.h"
#include "Date.h"

#include <iostream>
using namespace std;

Venta::Venta(Persona * p, Coche* c, Date* f) {
    this->comprador = p;
    this->coche = c;
    this->fechaVenta = f;
}


Persona* Venta::getPersona() {
    return this->comprador;
}

Coche* Venta::getCoche() {
    return this->coche;
}


Date* Venta::getFecha() {
    return this->fechaVenta;
}

void Venta::toString() {
    cout << "Comprador: " << this->comprador->getNombre() << endl;
    cout << "Coche: " << this->coche->getModelo() << endl;
    this->fechaVenta->toString();
}