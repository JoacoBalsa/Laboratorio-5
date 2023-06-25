#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <iostream>

//Fabrica
#include "Fabrica.h"

//Interfaces
#include "IAbrirApp.h"

using namespace std;

void ingresarOpcion(int &opcion, int inicio, int fin);

void menu();

void menuAbrirApp(int &opc, IAbrirApp* interfaz, int nroSal);

void menuAltaUsuario(int tel, IAbrirApp* interfaz);

#endif
