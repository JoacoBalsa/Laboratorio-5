#include "main.h"

using namespace std;

Fabrica* fabrica = Fabrica::getInstancia();
IAbrirApp* iabrirapp = fabrica->getIAbrirApp();
IReloj* ireloj = fabrica->getIReloj();
IControlAgregarContacto* icAgregarCon = fabrica->getICAgregarCon();
ICasosMensaje* icMensaje = fabrica->getICasosMensaje();

int main(){
    int nroSalida = 14, opc;
    
    menu();
    ingresarOpcion(opc, 1, nroSalida);
    while(opc != nroSalida){
        switch(opc)
            {
                case 1:             //Caso Abrir App
                    if(!iabrirapp->sesionActiva()) 
                        menuAbrirApp(opc,nroSalida);
                    else
                        cout<<"Cierre la sesion actual para iniciar otra."<<endl;
                break;
                case 2:             //Caso Enviar Mensaje
                    if(iabrirapp->sesionActiva()){
                        menuEnviarMensaje();
                    }
                    else
                        cout<<"Debe iniciar sesion antes."<<endl;
                break;
                case 6:
                    menuCambiarFecha();
                break;
                case 7:
                    mostrarFecha();
                break;
                case 8:
                    if(iabrirapp->sesionActiva()){
                        menuAgregarContactos();
                    }
                    else
                        cout<<"Debe iniciar sesion antes."<<endl;
                break; 
                case 12:            //Caso Cerrar App
                    if(iabrirapp->sesionActiva()){
                        iabrirapp->cerrarSesion(ireloj);
                        cout << "Sesion cerrada con exito."<< endl;
                    }
                    else
                        cout<<"Debe iniciar sesion antes."<<endl;
                break;
                case 13:
                    cargarDatos();
                break;
            }
            menu();
            ingresarOpcion(opc, 1, nroSalida);
    }
}

void menu(){
    cout <<"---------------- Menu ----------------"<< endl;
    cout<<"•1 AbrirApp"<<endl; 
    cout<<"•2 Enviar mensajes"<<endl; 
    cout<<"•3 Ver mensajes"<<endl; 
    cout<<"•4 Archivar conversaciones"<<endl; 
    cout<<"•5 Eliminar mensajes"<<endl;
    cout<<"•6 Cambiar fecha"<<endl; 
    cout<<"•7 Consultar fecha"<<endl;
    cout<<"•8 Agregar contactos"<<endl;                 
    cout<<"•9 Alta grupo"<<endl;                        //(opcional)
    cout<<"•10 Agregar participantes a un grupo"<<endl;  //(opcional)
    cout<<"•11 Modificar usuario"<<endl;                  //(opcional)
    cout<<"•12 CerrarApp"<<endl;                          
    cout<<"•13 Cargar datos de prueba"<<endl;
    cout<<"•14 Salir"<<endl; 
    cout<<"-------------------------------------"<<endl;
}

void ingresarOpcion(int &opcion, int inicio, int fin){
    cout <<"Ingrese una opcion: ";
    cin >> opcion;
    cout <<endl;
    while(opcion < inicio && opcion > fin){
        cout <<"Opcion invalida, ingrese de nuevo una opcion: ";
        cin >> opcion;
        cout << endl;
    } 
}

void menuAbrirApp(int &opc, int nroSal){
    int tel;
    cout <<"---------------- Abrir app ----------------"<< endl;
    cout <<"Ingrese un telefono para iniciar sesion: ";
    cin >> tel;
    if(iabrirapp->existeUsuario(tel)){
        iabrirapp->setSesionActual(tel);
        cout << "Sesion abierta con exito."<< endl;
    }else{
        cout <<"Ese telefono no esta registrado"<<endl;
        cout <<"1- Registrar ese telefono"<<endl;
        cout <<"2- Probar otro telefono"<<endl;
        cout <<"3- Salir"<<endl;
        ingresarOpcion(opc, 1, 3);
        switch (opc){
            case 1:
                menuAltaUsuario(tel);
            break;
            case 2:
                menuAbrirApp(opc, nroSal);
            break;
            case 3:
                opc = nroSal;
            break;
            }
        } 
}

void menuAltaUsuario(int tel){
    string nom, url, desc;
    cout <<"---------------- Registrar usuario ----------------"<< endl;
    cout <<"Ingrese un nombre: ";
    cin.ignore();
    getline(cin, nom);
    cout <<"Suba una imagen de perfil: ";
    getline(cin, url);
    cout <<"Ingrese una descripcion: ";
    getline(cin, desc);
    cout <<endl;
    DtReloj fecHorConex = iabrirapp->altaUsuario(tel, nom, url, desc, ireloj);
    cout <<"La fecha de conexion es: ";
    cout << fecHorConex.getFecha().getDia() << "/" << fecHorConex.getFecha().getMes() << "/" << fecHorConex.getFecha().getAnio();
    cout <<" y la hora de conexion es: ";
    cout << fecHorConex.getHora().getHora() << ":" << fecHorConex.getHora().getMin() << endl; 
    iabrirapp->setSesionActual(tel);
}

void menuCambiarFecha(){
    int dia, mes, anio, hora, minuto;
    DtReloj aux;
    cout << "Ingrese una nueva fecha:" << endl;
    cout << "Dia: ";
    cin >> dia;
    while(dia < 1 || dia > 31){
        cout << "Valor invalido. Ingrese un valor valido." << endl;
        cin >> dia;
    }
    cout << "Mes: ";
    cin >> mes;
    while(mes < 1 || mes > 12){
        cout << "Valor invalido. Ingrese un valor valido." << endl;
        cin >> mes;
    }
    cout << "Anio: ";
    cin >> anio;
    while(anio < 2000 || anio > 2024){
        cout << "Valor invalido. Ingrese un valor valido." << endl;
        cin >> anio;
    }
    cout <<"Hora: ";
    cin >> hora;
    while(hora < 0 || hora > 23){
        cout << "Valor invalido. Ingrese un valor valido." << endl;
        cin >> hora;
    }
    cout << "Minuto: ";
    cin >> minuto;
    while(minuto < 1 || minuto > 59){
        cout << "Valor invalido. Ingrese un valor valido." << endl;
        cin >> minuto;
    }
    Fecha fec = Fecha(dia, mes, anio);
    aux.setFecha(fec);
    Hora hor = Hora(hora, minuto);
    aux.setHora(hor);
    ireloj->setFecha(aux);
    cout << "Fecha y hora del sistema cambiados correctamente." << endl;
}

void mostrarFecha(){
    DtReloj aux = ireloj->getFecha();
    cout <<"La fecha y hora del sistema es: ";
    cout << aux.getFecha().getDia() << "/" << aux.getFecha().getMes() << "/" << aux.getFecha().getAnio();
    cout << " " << aux.getHora().getHora() << ":" << aux.getHora().getMin() << endl;
}

void menuEnviarMensaje(){
    int opc,id, tel;
    cout <<"---------------- Enviar Mensaje ----------------"<< endl;
    icMensaje->listarConver();
    cout << "•1 Seleccionar una conversación activa" << endl;
    cout << "•2 Ver las conversaciones archivadas" << endl;
    cout << "•3 Enviar un mensaje a un contacto con el cual aún no ha iniciado una conversación" << endl;
    ingresarOpcion(opc, 1, 3);
    switch (opc){
        case 1:
            if(icMensaje->existeConverActiva()){
                cout << "Ingrese la id de la conversacion: ";
                cin >> id;
                while(!icMensaje->hayConverActiva(id)){
                    cout << "Id invalido. Vuelva a ingresar: ";
                    cin >> id;
                }
                //menuEnviarMensaje();
            }
            else{
                cout << "No tienes conversaciones activas" << endl;
            }
        break;
        case 2:
            if(icMensaje->existeConverArchivada()){
                icMensaje->listarArchivadas();
                cout << "Ingrese la id de la conversacion: ";
                cin >> id;
                while(!icMensaje->hayConverArchivada(id)){
                    cout << "Id invalido. Vuelva a ingresar: ";
                    cin >> id;
                }
                //menuEnviarMensaje();
            }
            else{
                cout << "No tienes conversaciones archivadas" << endl;
            }
        break;
        case 3:
                icAgregarCon->listarContactos();
                cout << "Ingrese el telefono del contacto con el que quiere entablar una conversacion." << endl;
                cin >> tel;
                while(!icMensaje->esContacto(tel)){
                    cout << "No tienes agendado a ese telefono. Vuelva a ingresar: ";
                    cin >> tel;
                }
                if(!icMensaje->hayConverActiva(tel) && !icMensaje->hayConverArchivada(tel)){
                    icMensaje->crearConversacion(tel);
                    //menuEnviarMensaje();
                }
                else{
                    cout << "Ya tienes una conversacion con ese contacto"<<endl;
                }
                    
        break;
    }
}

/*void menuEnviarMensaje(){
    cout <<"---------------- Elija Tipo Mensaje ----------------"<< endl;
}*/

void menuAgregarContactos(){
    int op,tel;
    cout << "---------------- Agregar Contactos ----------------" << endl;
    cout <<"Contactos:" << endl;
    icAgregarCon->listarContactos();
    do{
        cout << "•1 Agregar contacto" << endl;
        cout << "•2 Salir"<< endl;
        ingresarOpcion(op, 1, 2);
        if(op != 2){
            cout << "Ingrese numero: ";
            cin >> tel;
            if(icAgregarCon->numeroValido(tel)){
                icAgregarCon->agregarContacto(tel);
            }
        }
    }while(op != 2);
}

void cargarDatos(){
    iabrirapp->cargarUsuarios(ireloj);
    cout << "Datos cargados correctamente." << endl;
}
