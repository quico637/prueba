
#include <iostream>
#include <string>
#include <map>
#include <list>

#include "Persona.h"
#include "Date.h"
#include "Venta.h"
#include "Concesionario.h"

using namespace std;


Coche *c;

void mem(void * p) {
    cout << p << endl;
}

void cambiarValor(int & a) {
    a = 2;
    cout << "a inside: " << a << endl;
    mem(&a);
}

void cambiarEdad(Persona & p) {
    p.setEdad(99);
    cout << "p inside: " << p.getEdad() << endl;
    mem(&p);
}

void cambiarEdadSinReferencia(Persona p) {
    p.setEdad(99);
    cout << "p inside: " << p.getEdad() << endl;
    mem(&p);
}

void cambiarEdadPtr(Persona * p) {
    p->setEdad(99);
    cout << "p ptr inside:" << p->getEdad() << endl;
    mem(p);
}

Coche crearCoche(Persona*p, string modelo) {
    Coche c = Coche(p, modelo);
    return c;
}


int main() {

    cout << "Hello World!\n";

    Persona p = Persona(20, "quecko");

    Coche c2 = crearCoche(&p, "pollico");
    c = &c2;

    p.toString();
    mem(&p);
    c2.getPropietario()->toString();
    mem(c2.getPropietario());
    c->getPropietario()->toString();
    mem(c->getPropietario());

    Persona *p2 = new Persona(21, "Leire Dimanche");
    Coche *c3 = new Coche(p2, "didi");

    p2->toString();
    mem(p2);
    c3->getPropietario()->toString();
    mem(c3->getPropietario());


    cout << "---------------------" << endl;

    c3->showPersona(p);

    cout << "---------------------" << endl;

    Persona p4 = p;
    p4.toString();
    mem(&p4);

    map<string, list<Coche*>> coches;
    coches["pollico"] = list<Coche*> ( {&c2, new Coche(&p, "pollico")} );
    coches["didi"] = list<Coche*> ( {c3} );

    map<string, int> stock;
    stock["pollico"] = coches["pollico"].size();
    stock["didi"] = coches["didi"].size();

    Concesionario * conc = new Concesionario(new Persona(54, "Pecos"), "Automobile S.L", coches, stock);
    
    cout << "Stock pollico antes:" << conc->getStock("pollico") << endl;
    conc->getStock("pollico");

    conc->comprar("pollico", p2);
    cout << "Stock pollico despues:" << conc->getStock("pollico") << endl;
    conc->getStock("pollico");
    for(auto i : conc->getVentas()) {
        i->toString();
    }


    int a = 1;
    cout << "a before: " << a << endl;
    mem(&a);

    cambiarValor(a);
    cout << "a after: " << a << endl;
    mem(&a);

    // No puntero quecko 20 años


    cout << "p.edad antes: " << p.getEdad() << endl;
    mem(&p);

    cambiarEdad(p);
    cout << "p.edad despues: " << p.getEdad() << endl;
    mem(&p);

    cout << "##############################################" << endl;

    // Leire dominguez 21
    cout << "p.edad ptr antes: " << p2->getEdad() << endl;
    mem(p2);

    cambiarEdadPtr(p2);
    cout << "p.edad ptr despues: " << p2->getEdad() << endl;
    mem(p2);

    cout << "##############################################" << endl;

    
    Persona * p3 = new Persona(54, "Pecos");

    // Pecos edad 54
    cout << "p3->edad ptr sin ptr antes: " << p3->getEdad() << endl;
    mem(p3);

    cambiarEdadSinReferencia(*p3);
    cout << "p->edad ptr sin ptr despues: " << p3->getEdad() << endl;
    mem(p3);



    cout << "Penco 2" << endl;
    cout << "Penco 3" << endl;
    cout << "Penco 4" << endl;



    // liberamos la memoria
    delete p2;
    delete c3;
    delete conc;

    return 0;
}
