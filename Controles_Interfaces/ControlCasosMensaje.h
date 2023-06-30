#ifndef CONTROLCASOSMENSAJE_H
#define CONTROLCASOSMENSAJE_H
#include "ICasosMensaje.h"
#include "ManejadorUsuario.h"
#include "ManejadorConversacion.h"
#include "ManejadorMensaje.h"
#include "../Clases/Conversacion.h"
#include "../Formato.h"

class ControlCasosMensaje : public ICasosMensaje{
    public:
        ControlCasosMensaje();
        int elegirContacto(int tel);
        void listarConver();
        bool hayConverActiva(int id);
        bool hayConverArchivada(int id);
        bool existeConverActiva();
        bool existeConverArchivada();
        bool esContacto(int tel);
        void listarArchivadas();
        void crearConversacion(int receptor);
        void crearMensaje(int tipoMen, DtReloj fec_env);
};

#endif