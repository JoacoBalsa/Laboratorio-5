#ifndef DTHORA_H
#define DTHORA_H
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Hora{
    private:
        int hor;
        int minu;
    public:
        Hora();
        Hora(int h, int m);
        Hora(Hora &hor);
        int getHora();
        int getMin();
        void setHora(int h);
        void setMin(int m);
        ~Hora();
};

#endif