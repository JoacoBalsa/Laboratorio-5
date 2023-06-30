#include "ControlCasosMensaje.h"
#include <map>
#include "../DataTypes/DtGrupo.h"
#include "../Clases/Grupo.h"
#include <iostream>

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
        cout << "No hay conversaciones archivas" << endl;

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

int ControlCasosMensaje::elegirContacto(int tel){
    ManejadorUsuario *mU = mU->getInstancia();
    return tel;                                     //Cambiar
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

void ControlCasosMensaje::crearConversacion(int receptor){
    ManejadorUsuario *mU = mU->getInstancia();
    ManejadorConversacion *mC = mC->getInstancia();
    Usuario* userDestino = mU->getUser(receptor); 
    Usuario* emisor = mU->getUsuario();
    Conversacion* conver = mC->crearConversacion(emisor, userDestino);
    userDestino->setActiva(conver->getId(), conver);
    emisor->setActiva(conver->getId(), conver);
}

void ControlCasosMensaje::crearMensaje(int tipoMen, DtReloj fec_env){
    string url, formato, texto;
    float tamanio;
    switch (tipoMen){
    case 1:
        cout << "Ingrese el texto: ";
        cout << endl; 
    break;
    case 2:
        cout << "\nIngrese la url de la foto: ";
        cin >> url;
        cout << "\nIngrese el formato de la foto: ";
        cin >> formato;
        cout << "\nIngrese el tamanio de la foto: ";
        cin >> tamanio;
        cout << "\nIngrese un texto para la foto: ";
        cin >> texto;
    break;
    case 3:
    break;
    case 4:
    break;
    }
}

void ControlCasosMensaje::elegirTipoConve(int tel){}