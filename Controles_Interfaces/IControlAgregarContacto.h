#ifndef ICONTROLAGREGARCONTACTO_H
#define ICONTROLAGREGARCONTACTO_H
#include "../Clases/Usuario.h"

using namespace std;

class IControlAgregarContacto{
    public:
        virtual void listarContactos() = 0;
        virtual void agregarContacto(int tel) = 0;
        virtual bool numeroValido(int tel) = 0;
};

#endif