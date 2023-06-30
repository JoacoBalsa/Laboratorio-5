#ifndef ICASOSMENSAJE_H
#define ICASOSMENSAJE_H
#include "../Formato.h"
#include "../DataTypes/DtReloj.h"

using namespace std;

class ICasosMensaje{
    public:
        virtual void listarConver() = 0;
        virtual bool hayConverActiva(int id) = 0;
        virtual bool hayConverArchivada(int id) = 0;
        virtual bool existeConverActiva() = 0;
        virtual bool existeConverArchivada() = 0;
        virtual bool esContacto(int tel) = 0;
        virtual void listarArchivadas() = 0;
        virtual int crearConversacion(int receptor) = 0;
        virtual bool hayConverconUser(int tel) = 0;
        virtual void activarConver(int id) = 0;
        virtual void archivarConver(int id) = 0;
        virtual void crearMenImagen(int idConver, DtReloj fec, float tam, Formato form, string text, string url) = 0;
        virtual void crearMenSimple(int idConver, DtReloj fec, string text) = 0;  
        virtual void crearMenVid(int idConver, DtReloj fec, float dur, string url) = 0;
        virtual void crearMenContacto(int idConver, DtReloj fec, int tel) = 0;
};

#endif