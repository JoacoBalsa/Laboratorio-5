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
        void listarConver();
        bool hayConverActiva(int id);
        bool hayConverArchivada(int id);
        bool existeConverActiva();
        bool existeConverArchivada();
        bool esContacto(int tel);
        void listarArchivadas();
        int crearConversacion(int receptor);
        void activarConver(int id);
        void archivarConver(int id);
        bool hayConverconUser(int tel);
        void crearMenImagen(int idConver, DtReloj fec, float tam, Formato form, string text, string url);
        void crearMenSimple(int idConver, DtReloj fec, string text); 
        void crearMenVid(int idConver, DtReloj fec, float dur, string url);
        void crearMenContacto(int idConver, DtReloj fec, int tel);
};

#endif