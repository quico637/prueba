#include <stdio.h>
#include <list>
#include <string>
#include <map>

#include "Persona.h"
#include "Venta.h"

#ifndef CONCESIONARIO_H // include guard
#define CONCESIONARIO_H


class Concesionario
{
private:
    Persona * duenio;
    string nombre;
    list<Venta*> ventas;
    map<string, list<Coche*>> coches;
    map<string, int> stock;
 
public:
    Concesionario(Persona* p, string nombre, map<string, list<Coche*>> coches, map<string, int> stock);
    Persona* getDuenio();
    string getNombre();
    list<Venta*> getVentas();
    int getStock(string modelo);
    void toString();
    bool comprar(string modelo, Persona* p);
};

#endif