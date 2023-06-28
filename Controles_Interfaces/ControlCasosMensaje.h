#ifndef CONTROLCASOSMENSAJE_H
#define CONTROLCASOSMENSAJE_H
#include "ICasosMensaje.h"
#include "ManejadorUsuario.h"
#include "ManejadorConversacion.h"

class ControlCasosMensaje : public ICasosMensaje{
    public:
        ControlCasosMensaje();
        void listarConver();
        int elegirTipoConve();
        void elegirContacto();
};

#endif