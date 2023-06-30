#ifndef MANEJADORCONVERSACION_H
#define MANEJADORCONVERSACION_H
#include "IAbrirApp.h"
#include <string.h>
#include <iostream>
#include <map>
#include "../Clases/Conversacion.h"
#include "../DataTypes/DtConversacion.h"
#include "ICasosMensaje.h"

class ManejadorConversacion {
    private:
        static ManejadorConversacion* instancia; 
        Conversacion* conversacionActual;     
        map<int, Conversacion*> conversaciones;       
        ManejadorConversacion();
    public:
        ManejadorConversacion* getInstancia();
        void setConversacionActual(int id);
        void addConver(Conversacion* conver);
        DtUsuario getReceptor(Usuario* user, int id);
        Conversacion* crearConversacion(Usuario* emisor, Usuario* receptor);
        Conversacion* getConver(int id);
};

#endif