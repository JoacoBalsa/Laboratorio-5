#ifndef CONTROLAGREGARCONTACTOS_H
#define CONTROLAGREGARCONTACTOS_H
#include "IControlAgregarContacto.h"
#include "ManejadorUsuario.h"

class ControlAgregarContacto : public IControlAgregarContacto{
    public:
        ControlAgregarContacto();
        void listarContactos();
        void agregarContacto(int tel);
        bool numeroValido(int tel);
};

#endif