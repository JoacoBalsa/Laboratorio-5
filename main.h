#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <iostream>

//Fabrica
#include "Fabrica.h"

//Interfaces
#include "Controles_Interfaces/IAbrirApp.h"
#include "Controles_Interfaces/IReloj.h"

using namespace std;

void ingresarOpcion(int &opcion, int inicio, int fin);

void menu();

void menuAbrirApp(int &opc, IAbrirApp* interfaz, int nroSal, IReloj* ireloj);

void menuAltaUsuario(int tel, IAbrirApp* interfaz, IReloj* r);

void menuCambiarFecha(IReloj* r);

void mostrarFecha(IReloj* r);

void menuEnviarMensaje();

void elegirTipoConve();

#endif
