main:	DtUsuario.o DtFecha.o DtHora.o DtReloj.o DtMensaje.o DtConversacion.o DtGrupo.o DtMenContacto.o DtMenImg.o DtMenSimple.o DtMenVid.o DtPrivada.o DtVisto.o Usuario.o Mensaje.o MenImg.o MenSimple.o MenVid.o MenContacto.o Conversacion.o Fabrica.o ControlUsuario.o Reloj.o main.o 
	g++ DtUsuario.o DtFecha.o DtHora.o DtReloj.o DtMensaje.o DtConversacion.o DtGrupo.o DtMenContacto.o DtMenImg.o DtMenSimple.o DtMenVid.o DtPrivada.o DtVisto.o Usuario.o Mensaje.o MenImg.o MenSimple.o MenVid.o MenContacto.o Conversacion.o Fabrica.o ControlUsuario.o Reloj.o main.o -o sistema

DtUsuario.o: DtUsuario.cpp

DtFecha.o: DtFecha.cpp

DtHora.o: DtHora.cpp

DtReloj.o: DtReloj.cpp

DtMensaje.o: DtMensaje.cpp

DtConversacion.o: DtConversacion.cpp

DtGrupo.o: DtGrupo.cpp

DtMenContacto.o: DtMenContacto.cpp

DtMenImg.o: DtMenImg.cpp

DtMenSimple.o: DtMenSimple.cpp

DtMenVid.o: DtMenVid.cpp

DtPrivada.o: DtPrivada.cpp

DtVisto.o: DtVisto.cpp

Usuario.o: Usuario.cpp

Mensaje.o: Mensaje.cpp

MenImg.o: MenImg.cpp

MenSimple.o: MenSimple.cpp

MenVid.o: MenVid.cpp

MenContacto.o: MenContacto.cpp

Conversacion.o: Conversacion.cpp

Fabrica.o: Fabrica.cpp

ControlUsuario.o: ControlUsuario.cpp

Reloj.o: Reloj.cpp

main.o: main.cpp

clean:
	rm -f *.o sistema
	clear