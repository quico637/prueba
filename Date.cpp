#include "Date.h"
#include <iostream>
using namespace std;


Date::Date(int ano, int mes, int dia)
{
        this->ano = ano;
        this->mes = mes;
        this->dia = dia;
}

int Date::getAno() { return this->ano; }
int Date::getMes() { return this->mes; }
int Date::getDia() { return this->dia; }
void Date::toString() {
    cout << "Anio: " << this->ano << endl;
    cout << "Mes: " << this->mes << endl;
    cout << "Dia: " << this->dia << endl;
}