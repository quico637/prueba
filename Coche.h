#include <stdio.h>
#include <list>
#include <string>
#include "Persona.h"

using namespace std;


#ifndef COCHE_H // include guard
#define COCHE_H


class Coche
{
private:
    Persona *propietario;
    string modelo;

public:
    Coche(Persona *prop, string modelo);

    Persona* getPropietario();
    string getModelo();
    void toString();
    void showPersona(Persona p);

};

#endif
