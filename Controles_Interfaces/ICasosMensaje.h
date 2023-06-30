#ifndef ICASOSMENSAJE_H
#define ICASOSMENSAJE_H

using namespace std;

class ICasosMensaje{
    public:
        virtual int elegirContacto(int tel) = 0;
        virtual void listarConver() = 0;
        virtual void elegirTipoConve(int tel) = 0;
        virtual bool hayConverActiva(int id) = 0;
        virtual bool hayConverArchivada(int id) = 0;
        virtual bool existeConverActiva() = 0;
        virtual bool existeConverArchivada() = 0;
        virtual bool esContacto(int tel) = 0;
        virtual void listarArchivadas() = 0;
        virtual void crearConversacion(int receptor) = 0;
        virtual void crearMensaje(int tipoMen, DtReloj fec_env) = 0;
};

#endif