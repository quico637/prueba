#include <stdio.h>
#include <list>
#include <string>

#include "Persona.h"
#include "Coche.h"
#include "Date.h"

#ifndef VENTA_H // include guard
#define VENTA_H


class Venta
{
private:
    Persona * comprador;
    Coche * coche;
    Date * fechaVenta;
 
public:
    Venta(Persona * p, Coche * c, Date* f);
    Persona* getPersona();
    Coche * getCoche();
    Date * getFecha();
    void toString();
    
};

#endif
