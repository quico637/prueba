#include "Concesionario.h"
#include <map>
#include <list>


#include <iostream>
using namespace std;

Concesionario::Concesionario(Persona* p, string nombre, map<string, list<Coche*>> coches, map<string, int> stock) {
    this->duenio = duenio;
    this->nombre = nombre;
    this->coches = coches;
    this->stock = stock;
}


/**
 * 
 * Devuelve -1 en caso de que no ofertemos ese modelo.
 * 
 */ 
int Concesionario::getStock(string modelo) {
    auto it = this->stock.find(modelo);
    if(it == this->stock.end())
        return -1;

    return this->stock[modelo];
}

Persona* Concesionario::getDuenio() {
    return this->duenio;
}

string Concesionario::getNombre() {
    return this->nombre;
}

list<Venta*> Concesionario::getVentas() {
    return this->ventas;
}

/**
 * 
 * Comprar un modelo de coche, no la referencia. La idea es buscar el modelo entre los q tenemos en stock y efectuar la venta.
 * 
 */
bool Concesionario::comprar(string modelo, Persona * p) {
    auto it = this->stock.find(modelo);
    if(it == this->stock.end())
        return false;

    this->stock[modelo]--;
    Coche* c = this->coches[modelo].front();
    Venta * v = new Venta(p, c, new Date(2022, 06, 9));
    this->ventas.push_back(v);
    // quitar el coche si el pop no lo hace
    return true;
}

void Concesionario::toString() {
    cout << "Duenio: " << this->duenio << endl;
    cout << "Nombre: " << this->nombre << endl;
    cout << "Ventas: " << endl;
    for (auto i : this->ventas) {
        i->toString();
    }
}