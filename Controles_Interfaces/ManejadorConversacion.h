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
        ManejadorConversacion();
    public:
        ManejadorConversacion* getInstancia();
        void setConversacionActual(Conversacion* conver);
        DtUsuario getReceptor(int emisor);
};

#endif