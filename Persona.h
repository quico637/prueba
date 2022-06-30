#include <stdio.h>
#include <list>
#include <string>

using namespace std;

#ifndef PERSONA_H // include guard
#define PERSONA_H

class Persona
{
private:
    int edad = 2;
    string nombre = "quecko";
    
 
public:
    Persona(int edad, string nombre);
    int getEdad() { return this->edad; }
    string getNombre() { return this->nombre; }
    void toString();
    void setEdad(int new_edad);

};

#endif
