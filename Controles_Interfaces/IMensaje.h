#ifndef IMENSAJE_H
#define IMENSAJE_H
#include <stdio.h>
#include <iostream>
#include <string.h>


using namespace std;

class IMensaje{
    public:
        virtual void elegirContacto(int tel) = 0;
        virtual void listarConver(int tel) = 0;
};

#endif