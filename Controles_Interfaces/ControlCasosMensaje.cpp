#include "ControlCasosMensaje.h"
#include <map>
#include "../DataTypes/DtGrupo.h"
#include "../Clases/Grupo.h"
#include <iostream>
#include <string.h>
#include "ControlAgregarContacto.h"

using namespace std;

ControlCasosMensaje::ControlCasosMensaje(){}

void ControlCasosMensaje::listarConver(){
    ManejadorUsuario *mU = mU->getInstancia();
    ManejadorConversacion *mC = mC->getInstancia();
    int cantArch = mU->getCantArch();
    list<DtConversacion> activas;
    mU->getActivas(activas);
    DtUsuario receptor;

    if(activas.size() > 0){
        for(auto iter = activas.begin(); iter != activas.end(); ++iter){
            receptor = mC->getReceptor(mU->getUsuario(), iter->getId());
            cout << "Id conversacion: " << iter->getId()<< " ";
            cout << " Nombre del usuario: " << receptor.getNombre()<< " ";
            cout << " Telefono: " << receptor.getTel()<< " ";
            cout << endl;
        }
    }else
        cout << "No hay conversaciones activas" << endl;
    if(cantArch >= 1)
        cout << "Archivadas: " << cantArch << endl;
    else
        cout << "No hay conversaciones archivadas" << endl;

}

void ControlCasosMensaje::listarArchivadas(){
    ManejadorUsuario *mU = mU->getInstancia();
    ManejadorConversacion *mC = mC->getInstancia();
    list<DtConversacion> archivadas;
    mU->getArchivadas(archivadas);
    DtUsuario receptor;
    for(auto iter = archivadas.begin(); iter != archivadas.end(); ++iter){
        receptor = mC->getReceptor(mU->getUsuario(), iter->getId());
        cout << "Id conversacion: " << iter->getId() << " ";
        cout << " Nombre del usuario: " << receptor.getNombre()<< " ";
        cout << " Telefono: " << receptor.getTel()<< " ";
        cout << endl;
    }
}

bool ControlCasosMensaje::hayConverActiva(int id){
    ManejadorUsuario *mU = mU->getInstancia();
    return mU->hayConverActiva(id);
};

bool ControlCasosMensaje::hayConverArchivada(int id){
    ManejadorUsuario *mU = mU->getInstancia();
    return mU->hayConverArchivada(id); 
}

bool ControlCasosMensaje::existeConverActiva(){
    ManejadorUsuario *mU = mU->getInstancia();
    return (mU->existeConverActiva());
}

bool ControlCasosMensaje::existeConverArchivada(){
    ManejadorUsuario *mU = mU->getInstancia();
    return (mU->existeConverArchivada());
}

bool ControlCasosMensaje::esContacto(int tel){
    ManejadorUsuario *mU = mU->getInstancia();
    return (mU->esContacto(tel));
}

int ControlCasosMensaje::crearConversacion(int receptor){
    ManejadorUsuario *mU = mU->getInstancia();
    ManejadorConversacion *mC = mC->getInstancia();
    Usuario* userDestino = mU->getUser(receptor); 
    Usuario* emisor = mU->getUsuario();
    Conversacion* conver = mC->crearConversacion(emisor, userDestino);
    userDestino->setActiva(conver->getId(), conver);
    emisor->setActiva(conver->getId(), conver);
    return conver->getId();
}

bool ControlCasosMensaje::hayConverconUser(int tel){
    ManejadorUsuario *mU = mU->getInstancia();
    ManejadorConversacion *mC = mC->getInstancia();
    return (mU->hayConverconUser(tel));
}

void ControlCasosMensaje::activarConver(int id){
    ManejadorUsuario *mU = mU->getInstancia();
    Usuario* user = mU->getUsuario();
    Conversacion* conver = user->getArchivada(id);
    user->dropConver(id);
    user->setActiva(id, conver);
}

void ControlCasosMensaje::archivarConver(int id){
    ManejadorUsuario *mU = mU->getInstancia();
    Usuario* user = mU->getUsuario();
    Conversacion* conver = user->getActiva(id);
    user->dropConver(id);
    user->setArchivada(id, conver);
}

void ControlCasosMensaje::crearMenImagen(int idConver, DtReloj fec, float tam, Formato form, string text, string url){
    ManejadorUsuario *mU = mU->getInstancia();
    Usuario* user = mU->getUsuario();
    Conversacion* conver = user->getActiva(idConver);
    ManejadorMensaje* mM = mM->getInstancia();
    MenImg* mensaje = mM->crearImagen(conver->getCantMensajes(), fec,tam,form,text, url);
    conver->setMensaje(mensaje->getId(), mensaje);
}

void ControlCasosMensaje::crearMenSimple(int idConver, DtReloj fec, string text){
    ManejadorUsuario *mU = mU->getInstancia();
    Usuario* user = mU->getUsuario();
    Conversacion* conver = user->getActiva(idConver);
    ManejadorMensaje* mM = mM->getInstancia();
    MenSimple* mensaje = mM->crearSimple(conver->getCantMensajes(), fec, text);
}

void ControlCasosMensaje::crearMenVid(int idConver, DtReloj fec, float dur, string url){
    ManejadorUsuario *mU = mU->getInstancia();
    Usuario* user = mU->getUsuario();
    Conversacion* conver = user->getActiva(idConver);
    ManejadorMensaje* mM = mM->getInstancia();
    MenVid* mensaje = mM->crearVideo(conver->getCantMensajes(), fec, dur, url);
    conver->setMensaje(mensaje->getId(), mensaje);
}

void ControlCasosMensaje::crearMenContacto(int idConver, DtReloj fec, int tel){
    ManejadorUsuario *mU = mU->getInstancia();
    Usuario* user = mU->getUsuario();
    Conversacion* conver = user->getActiva(idConver);
    ManejadorMensaje* mM = mM->getInstancia();
    MenContacto* mensaje = mM->crearMenContacto(conver->getCantMensajes(), fec, tel, mU->getUser(tel)->getNombre());
    conver->setMensaje(mensaje->getId(), mensaje);
}
