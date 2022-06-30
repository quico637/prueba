#include <stdio.h>
#include <iostream>
#include <list>
#include <string>

#include "Coche.h"
#include "Persona.h"
using namespace std;

Coche::Coche(Persona *prop, string modelo) {
    this->propietario = prop;
    this->modelo = modelo;
}

Persona* Coche::getPropietario() {
    return this->propietario;
}

string Coche::getModelo() {
    return this->modelo;
}

void Coche::toString() {
    cout << "Propietario: " << this->propietario << endl;
    cout << "Modelo: " << this->modelo << endl;
}

void Coche::showPersona(Persona p) {
    p.toString();
}