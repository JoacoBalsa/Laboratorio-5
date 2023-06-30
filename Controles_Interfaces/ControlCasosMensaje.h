#ifndef CONTROLCASOSMENSAJE_H
#define CONTROLCASOSMENSAJE_H
#include "ICasosMensaje.h"
#include "ManejadorUsuario.h"
#include "ManejadorConversacion.h"
#include "../Clases/Conversacion.h"

class ControlCasosMensaje : public ICasosMensaje{
    public:
        ControlCasosMensaje();
        int elegirContacto(int tel);
        void listarConver();
        void elegirTipoConve(int tel);
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