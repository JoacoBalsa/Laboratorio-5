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

/*DtUsuario ManejadorConversacion::getReceptor(int emisor){
    Conversacion* conveActual = this->conversacionActual;
    map<int, DtUsuario> integrantes = conveActual->getIntegrantes();
    for(auto iter = integrantes.begin(); iter != integrantes.end(); iter++){
        if(iter->second.getTel() != emisor)
            return iter->second;
    }
}*/
