#include "main.h"
#include <iostream>
#include <stdio.h>

//Fabrica
#include "Fabrica.h"

//Interfaces
#include "IAbrirApp.h"

using namespace std;

int main(){
    Fabrica* fabrica = Fabrica::getInstancia();
    IAbrirApp* iabrirapp = fabrica->getIAbrirApp();
    int numeroSalida = 14, opc;
    
    menu();
    ingresarOpcion(opc, 1, numeroSalida);
    while(opc != numeroSalida){
        switch(opc)
            {
                case 1:
                    if(!iabrirapp->sesionActiva()) 
                        menuAbrirApp(opc, iabrirapp, numeroSalida);
                    else
                        cout<<"Cierre la sesion actual para iniciar otra."<<endl;
                break;
                case 2: //ultimo caso de uso
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

void menuAbrirApp(int &opc, IAbrirApp* interfaz, int nroSal){
    int tel;
    cout <<"---------------- Abrir app ----------------"<< endl;
    cout <<"Ingrese un telefono para iniciar sesion: ";
    cin >> tel;
    if(interfaz->existeUsuario(tel))
        interfaz->setSesionActual(tel);
    else{
        cout <<"Ese telefono no esta registrado"<<endl;
        cout <<"1- Registrar ese telefono"<<endl;
        cout <<"2- Probar otro telefono"<<endl;
        cout <<"3- Salir"<<endl;
        ingresarOpcion(opc, 1, 3);
        switch (opc){
            case 1:
                menuAltaUsuario(tel, interfaz);
            break;
            case 2:
                menuAbrirApp(opc, interfaz, nroSal);
            break;
            case 3:
                opc = nroSal;
            break;
            }
        }
    
    
}

 void menuAltaUsuario(int tel, IAbrirApp* interfaz){
    string nom, url, desc;
    cout <<"---------------- Registrar usuario ----------------"<< endl;
    cout <<"Ingrese un nombre: ";
    cin >> nom;
    cout <<"Suba una imagen de perfil: ";
    cin >> url;
    cout <<"Ingrese una descripcion: ";
    cin >> desc;
    cout <<endl;
    DtReloj fecHorConex = interfaz->altaUsuario(tel, nom, url, desc);
    cout <<"La fecha de conexion es: ";
    cout << fecHorConex.getFecha().getDia() << "/" << fecHorConex.getFecha().getMes() << "/" << fecHorConex.getFecha().getAnio();
    cout <<" y la hora de conexion es: ";
    cout << fecHorConex.getHora().getHora() << ":" << fecHorConex.getHora().getMin() << endl; 
    interfaz->setSesionActual(tel);
 }