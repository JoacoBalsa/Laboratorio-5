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

MenImg* ManejadorMensaje::crearImagen(int id, DtReloj fec, float tam, Formato form, string text, string url){
    MenImg* retorno = new MenImg(id, fec, tam, form, text, url);
    return retorno;
}

MenVid* ManejadorMensaje::crearVideo(int id, DtReloj fec,float dur, string url){
    MenVid* retorno = new MenVid(id, fec, dur, url);
    return retorno;
}

MenSimple* ManejadorMensaje::crearSimple(int id, DtReloj fec, string text){
    MenSimple* retorno = new MenSimple(id, fec, text);
    return retorno;
}

MenContacto* ManejadorMensaje::crearMenContacto(int id, DtReloj fec, int tel, string nom){
    MenContacto* retorno = new MenContacto(id, fec, tel, nom);
    return retorno;
}
