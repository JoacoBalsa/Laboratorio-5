#include "main.h"
#include <iostream>
#include <stdio.h>

//Fabrica
#include "Fabrica.h"

//Interfaces
#include "IAbrirApp.h"
#include "IReloj.h"

using namespace std;

int main(){
    Fabrica* fabrica = Fabrica::getInstancia();
    IAbrirApp* iabrirapp = fabrica->getIAbrirApp();
    IReloj* ireloj = fabrica->getIReloj();
    int numeroSalida = 14, opc;
    
    menu();
    ingresarOpcion(opc, 1, numeroSalida);
    while(opc != numeroSalida){
        switch(opc)
            {
                case 1:         //Caso Abrir App
                    if(!iabrirapp->sesionActiva()) 
                        menuAbrirApp(opc, iabrirapp, numeroSalida, ireloj);
                    else
                        cout<<"Cierre la sesion actual para iniciar otra."<<endl;
                break;
                case 12:        //Caso Cerrar App
                    if(iabrirapp->sesionActiva()){
                        iabrirapp->cerrarSesion();

                        cout << "Sesion cerrada con exito."<< endl;
                    }
                    else
                        cout<<"Debe iniciar sesion antes."<<endl;
                break;
                case 6:
                    menuCambiarFecha(ireloj);
                break;
                case 7:
                    mostrarFecha(ireloj);
                break;
            }
            menu();
            ingresarOpcion(opc, 1, numeroSalida);
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
    cout<<"•8 Agregar contactos"<<endl;                 //(opcional)
    cout<<"•9 Alta grupo"<<endl;                        //(opcional)
    cout<<"•10 Agregar participantes a un grupo"<<endl;  //(opcional)
    cout<<"•11 Modificar usuario"<<endl;                  //(opcional)
    cout<<"•12 CerrarApp"<<endl;                          //(opcional)
    cout <<"•13 Cargar datos de prueba"<<endl;
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

void menuAbrirApp(int &opc, IAbrirApp* interfaz, int nroSal, IReloj* ireloj){
    int tel;
    cout <<"---------------- Abrir app ----------------"<< endl;
    cout <<"Ingrese un telefono para iniciar sesion: ";
    cin >> tel;
    if(interfaz->existeUsuario(tel)){
        interfaz->setSesionActual(tel);
        cout << "Sesion abierta con exito."<< endl;
    }else{
        cout <<"Ese telefono no esta registrado"<<endl;
        cout <<"1- Registrar ese telefono"<<endl;
        cout <<"2- Probar otro telefono"<<endl;
        cout <<"3- Salir"<<endl;
        ingresarOpcion(opc, 1, 3);
        switch (opc){
            case 1:
                menuAltaUsuario(tel, interfaz, ireloj);
            break;
            case 2:
                menuAbrirApp(opc, interfaz, nroSal, ireloj);
            break;
            case 3:
                opc = nroSal;
            break;
            }
        } 
}

void menuAltaUsuario(int tel, IAbrirApp* interfaz, IReloj* ireloj){
    string nom, url, desc;
    cout <<"---------------- Registrar usuario ----------------"<< endl;
    cout <<"Ingrese un nombre: ";
    cin >> nom;
    cout <<"Suba una imagen de perfil: ";
    cin >> url;
    cout <<"Ingrese una descripcion: ";
    cin >> desc;
    cout <<endl;
    DtReloj fecHorConex = interfaz->altaUsuario(tel, nom, url, desc, ireloj);
    cout <<"La fecha de conexion es: ";
    cout << fecHorConex.getFecha().getDia() << "/" << fecHorConex.getFecha().getMes() << "/" << fecHorConex.getFecha().getAnio();
    cout <<" y la hora de conexion es: ";
    cout << fecHorConex.getHora().getHora() << ":" << fecHorConex.getHora().getMin() << endl; 
    interfaz->setSesionActual(tel);
}

void menuCambiarFecha(IReloj* r){
    int dia, mes, anio, hora, minuto;
    DtReloj aux;
    cout << "Ingrese una nueva fecha:" << endl;
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Anio: ";
    cin >> anio;
    cout <<"Hora: ";
    cin >> hora;
    cout << "Minuto: ";
    cin >> minuto;
    Fecha fec = Fecha(dia, mes, anio);
    aux.setFecha(fec);
    Hora hor = Hora(hora, minuto);
    aux.setHora(hor);
    cout << "Voy a entrar a ireloj"<< endl;
    r->setFecha(aux);
    cout << "Fecha establecida correctamente." << endl;
}

void mostrarFecha(IReloj* r){
    DtReloj aux = r->getFecha();
    cout <<"La fecha y hora del sistema es: ";
    cout << aux.getFecha().getDia() << "/" << aux.getFecha().getMes() << "/" << aux.getFecha().getAnio();
    cout << " " << aux.getHora().getHora() << ":" << aux.getHora().getMin() << endl;
}