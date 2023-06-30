#include "Fabrica.h"
#include "Controles_Interfaces/ControlAbrirApp.h"
#include "Controles_Interfaces/ControlReloj.h"
#include "Controles_Interfaces/ControlAgregarContacto.h"
#include "Controles_Interfaces/ControlCasosMensaje.h"

Fabrica* Fabrica::instancia=NULL;

Fabrica::Fabrica(){}

Fabrica* Fabrica::getInstancia(){
    if (instancia==NULL)
        instancia= new Fabrica();
    return instancia;
}

IAbrirApp* Fabrica::getIAbrirApp(){
    return new ControlAbrirApp();
}

IReloj* Fabrica::getIReloj(){
    return ControlReloj::getInstancia();
}

IControlAgregarContacto* Fabrica::getICAgregarCon(){
    return new ControlAgregarContacto();
}

ICasosMensaje* Fabrica::getICasosMensaje(){
    return new ControlCasosMensaje();
}
