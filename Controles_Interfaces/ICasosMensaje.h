#ifndef ICASOSMENSAJE_H
#define ICASOSMENSAJE_H
#include <stdio.h>
#include <iostream>
#include <string.h>


using namespace std;

class ICasosMensaje{
    public:
        virtual void elegirContacto(int tel) = 0;
        virtual void listarConver(int tel) = 0;
        virtual void elegirTipoConve(int tel) = 0;
};

#endif