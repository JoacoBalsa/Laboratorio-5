#ifndef CONTROLAGREGARCONTACTOS_H
#define CONTROLAGREGARCONTACTOS_H
#include "IControlAgregarContacto.h"
#include "ManejadorUsuario.h"
#include "string.h"

class ControlAgregarContacto : public IControlAgregarContacto{
    public:
        ControlAgregarContacto();
        void listarContactos();
        void agregarContacto(int tel);
        bool numeroValido(int tel);
};

#endif