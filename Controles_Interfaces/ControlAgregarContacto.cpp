#include "ControlAgregarContacto.h"

ControlAgregarContacto::ControlAgregarContacto(){}

void ControlAgregarContacto::listarContactos(){
    ManejadorUsuario *mU = mU->getInstancia();
    list<DtUsuario> conts;
    mU->getContactos(conts);
    for(auto itr = conts.begin(); itr != conts.end(); itr++)
        cout << "Nombre: " << itr->getNombre() << " Telefono: " << itr->getTel() << endl;
}