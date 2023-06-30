#ifndef MANEJADORCONVERSACION_H
#define MANEJADORCONVERSACION_H
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
        MenImg* crearImagen(string url, float tamanio, Formato formato, string texto);
        MenVid* crearVideo(string url,float dur);
        MenSimple* crearSimple(string tex);
        MenContacto* crearMenContacto(int telefono, string nombre);

};



#endif