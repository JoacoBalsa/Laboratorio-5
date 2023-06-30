#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <iostream>

//Fabrica
#include "Fabrica.h"

//Interfaces
#include "Controles_Interfaces/IAbrirApp.h"
#include "Controles_Interfaces/IReloj.h"
#include "Controles_Interfaces/IControlAgregarContacto.h"

using namespace std;

void ingresarOpcion(int &opcion, int inicio, int fin);

void menu();

void menuAbrirApp(int &opc,int nroSal);

void menuAltaUsuario(int tel);

void menuCambiarFecha();

void mostrarFecha();

void menuEnviarMensaje();

void menuAgregarContactos();

void cargarDatos();

void menuEnviarMensaje();

#endif
