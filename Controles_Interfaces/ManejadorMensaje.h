#ifndef MANEJADORMENSAJE_H
#define MANEJADORMENSAJE_H
#include "IAbrirApp.h"
#include <string.h>
#include <iostream>
#include <map>
#include "../Clases/Mensaje.h"
#include "../Clases/MenContacto.h"
#include "../Clases/MenImg.h"
#include "../Clases/MenSimple.h"
#include "../Clases/MenVid.h"
#include "ICasosMensaje.h"

class ManejadorMensaje{
    private:
        static ManejadorMensaje* instancia;
        Mensaje* mensajeActual;
        ManejadorMensaje();
    public:
        ManejadorMensaje* getInstancia();
        MenImg* crearImagen(int id, DtReloj fec, float tam, Formato form, string text, string url);
        MenVid* crearVideo(int id, DtReloj fec,float dur,string url);
        MenSimple* crearSimple(int id, DtReloj fec, string text);
        MenContacto* crearMenContacto(int id, DtReloj fec, int tel, string nom);
};

#endif