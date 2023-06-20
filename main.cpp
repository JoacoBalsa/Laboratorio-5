#include "main.h"

//  main.cpp

int main(){
    do{
        menu();
    }while(true);
}

void menu(){
    int opc;
    cout << "   MENU" << endl;
    cout << "1. Abrir App" << endl;
    cout << "2. Cerrar App" << endl;                                    // Opcional
    cout << "3. Agregar contactos" << endl;                             // Opcional
    cout << "4. Alta grupo " << endl;                                   // Opcional
    cout << "5. Enviar mensajes" << endl;
    cout << "6. Ver mensajes" << endl;
    cout << "7. Agregar participantes a un grupo" << endl;              // Opcional
    cout << "8. Archivar conversaciones" << endl;
    cout << "9. Modificar usuario" << endl;                             // Opcional
    cout << "10. Eliminar mensaje" << endl;
    cin >> opc;
    switch (opc){
        case 1:
        break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        break;
        case 6:
        break;
        case 7:
        break;
        case 8:
        break;
        case 9:
        break;
        case 10:
        break;
        default: break;
    }
}