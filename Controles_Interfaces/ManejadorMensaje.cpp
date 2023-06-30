#include "ManejadorMensaje.h"

ManejadorMensaje* ManejadorMensaje::instancia = NULL;

ManejadorMensaje::ManejadorMensaje(){
    mensajeActual = NULL;
}

ManejadorMensaje* ManejadorMensaje::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorMensaje();
    return instancia;
}

MenImg* ManejadorMensaje::crearImagen(string url, float tamanio, Formato formato, string texto){}

MenVid* ManejadorMensaje::crearVideo(string url,float dur){}

MenSimple* ManejadorMensaje::crearSimple(string tex){}

MenContacto* ManejadorMensaje::crearMenContacto(int telefono, string nombre){}
