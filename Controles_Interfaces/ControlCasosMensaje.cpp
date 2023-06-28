#include "ControlCasosMensaje.h"
#include <map>
#include "../DataTypes/DtGrupo.h"
#include "../Clases/Grupo.h"

void ControlCasosMensaje::listarConver(){
    ManejadorUsuario *mU = mU->getInstancia();
    ManejadorConversacion *mC = mC->getInstancia();
    map<int,DtConversacion*> activas = mU->getActivas();
    map<int, DtConversacion*> archivadas = mU->getArchivadas();
    DtConversacion* conve;
    DtUsuario receptor;

    if(activas.size() > 0){
        for(auto iter = activas.begin(); iter != activas.end(); iter++){
            try{
                DtGrupo* dtg = static_cast<DtGrupo*>(iter->second);
                cout << "Nombre del grupo: " << dtg->getNombre() << endl;
            }catch(bad_cast){
                receptor = mC->getReceptor(mU->getUsuario()->getTel());
                cout << "Nombre del usuario: " << receptor.getNombre();
                cout << " Telefono: " << receptor.getTel();
            }
        }
    }else
        cout << "No hay conversaciones activas" << endl;
    int cantArch = archivadas.size();
    cout << "Archivadas: " << cantArch << endl;
} 

void ControlCasosMensaje::elegirContacto(){
    ManejadorUsuario *mU = mU->getInstancia();

}