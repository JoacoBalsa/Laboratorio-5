#ifndef DTFECHA_H
#define DTFECHA_H
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Fecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        Fecha();
        Fecha(int d, int m, int a);
        Fecha(Fecha &fec);
        int getDia();
        int getMes();
        int getAnio();
        void setDia(int d);
        void setMes(int m);
        void setAnio(int a);
        ~Fecha();
};

#endif