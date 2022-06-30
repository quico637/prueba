#include <stdio.h>
#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;


Persona::Persona(int edad, string nombre) {
    this->edad = edad;
    this->nombre = nombre;
}

void Persona::setEdad(int new_edad) {
    this->edad = new_edad;
}

void Persona::toString() {
    cout << "Edad: " << this->edad << endl;
    cout << "Nombre: " << this->nombre << endl;
}
