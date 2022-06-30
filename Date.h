#include <stdio.h>
#include <list>
#include <string>


#ifndef DATE_H // include guard
#define DATE_H

class Date
{
private:
    int ano;
    int mes;
    int dia;
    
 
public:
    Date(int ano, int mes, int dia);
    int getAno();
    int getMes();
    int getDia();
    void toString();
};

#endif
