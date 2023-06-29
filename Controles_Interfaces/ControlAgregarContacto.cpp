#include "ControlAgregarContacto.h"

ControlAgregarContacto::ControlAgregarContacto(){}

void ControlAgregarContacto::listarContactos(){
    ManejadorUsuario *mU = mU->getInstancia();
    list<DtUsuario> conts;
    mU->getContactos(conts);
    for(auto itr = conts.begin(); itr != conts.end(); itr++)
        cout << "Nombre: " << itr->getNombre() << " Telefono: " << itr->getTel() << " Imagen: " << itr->getImg() << endl;
}

bool ControlAgregarContacto::numeroValido(int tel){
    ManejadorUsuario *mU = mU->getInstancia();
    list<DtUsuario> conts;
    mU->getContactos(conts);
    if(!mU->existeUser(tel)){
        cout << "Usuario de telefono "<< tel << " no existente" << endl; 
        return false;
    }
    for(auto itr = conts.begin(); itr != conts.end(); itr++){
        if(itr->getTel() == tel){
            cout << "Usuario de telefono "<< tel << " ya perteneciente a contactos" << endl;
            return false;
        }
    }
    return true;
}

void ControlAgregarContacto::agregarContacto(int tel){
    ManejadorUsuario *mU = mU->getInstancia();
    Usuario* cont = mU->getUser(tel);
    string  opc;
    cout << "Nombre: " << cont->getNombre() << endl;
    cout << "Telefono: " << cont->getTel() << endl;
    cout << "Imagen: " << cont->getImg() << endl;
    cout << "Fecha de Registro: " << cont->getFecha().getFecha().getDia() << "/";
    cout << cont->getFecha().getFecha().getMes() << "/";
    cout << cont->getFecha().getFecha().getAnio() << endl;
    cout << "Biografia: " << cont->getBio() << endl;
    cout << "Ultima vez en linea : " << cont->getUltVez().getFecha().getDia() << "/";
    cout << cont->getUltVez().getFecha().getMes() << "/";
    cout << cont->getUltVez().getFecha().getAnio() << endl; 
    do{
        cout << "¿Desea agregar al usuario? [s/n]: "; 
        cin >> opc;
        if(opc == "s" || opc == "S"){
            mU->setContacto(tel);
            cout << "Contacto agregado exitosamente" << endl;
        }
        else if (opc != "n" && opc != "N" and opc != "S" && opc != "s"){
            cout << "Opcion no valida";
        }

    }while(opc != "n" && opc != "N" && opc != "S" && opc != "s");

}