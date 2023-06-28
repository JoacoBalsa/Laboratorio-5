#include "ManejadorConversacion.h"

ManejadorConversacion* ManejadorConversacion::instancia = NULL;

ManejadorConversacion::ManejadorConversacion(){
    conversacionActual = NULL;
}

ManejadorConversacion* ManejadorConversacion::getInstancia(){
    if (instancia == NULL)
        instancia = new ManejadorConversacion();
    return instancia;
}

void ManejadorConversacion::setConversacionActual(Conversacion* conver){
    this->conversacionActual = conver;
}

/*DtUsuario ManejadorConversacion::getReceptor(int emisor){
    
}*/
