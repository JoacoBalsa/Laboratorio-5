main:	DtUsuario.o DtFecha.o DtHora.o DtReloj.o DtMensaje.o DtConversacion.o DtGrupo.o DtMenContacto.o DtMenImg.o DtMenSimple.o DtMenVid.o DtPrivada.o Usuario.o Mensaje.o MenSimple.o MenVid.o MenImg.o MenContacto.o Conversacion.o main.o 
	g++ DtUsuario.o DtFecha.o DtHora.o DtReloj.o DtMensaje.o DtConversacion.o DtGrupo.o DtMenContacto.o DtMenImg.o DtMenSimple.o DtMenVid.o DtPrivada.o Usuario.o Mensaje.o MenSimple.o MenVid.o MenImg.o MenContacto.o Conversacion.o main.o -o sistema

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

Usuario.o: Usuario.cpp

Mensaje.o: Mensaje.cpp

MenSimple.o: MenSimple.cpp

MenVid.o: MenVid.cpp

MenImg.o: MenImg.cpp

MenContacto.o: MenContacto.cpp

Conversacion.o: Conversacion.cpp

main.o: main.cpp

clean:
	rm -f *.o sistema
	clear