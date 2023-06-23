main:	DtUsuario.o DtFecha.o DtHora.o DtReloj.o DtMensaje.o DtConversacion.o DtGrupo.o DtMenContacto.o DtMenImg.o DtMenSimple.o DtMenVid.o DtPrivada.o main.o
	g++ DtUsuario.o DtFecha.o DtHora.o DtReloj.o DtMensaje.o DtConversacion.o DtGrupo.o DtMenContacto.o DtMenImg.o DtMenSimple.o DtMenVid.o DtPrivada.o main.o -o sistema

DtUsuario.o: DataTypes/DtUsuario.cpp

DtFecha.o: DataTypes/DtFecha.cpp

DtHora.o: DataTypes/DtHora.cpp

DtReloj.o: DataTypes/DtReloj.cpp

DtMensaje.o: DataTypes/DtMensaje.cpp

DtConversacion.o: DataTypes/DtConversacion.cpp

DtGrupo.o: DataTypes/DtGrupo.cpp

DtMenContacto.o: DataTypes/DtMenContacto.cpp

DtMenImg.o: DataTypes/DtMenImg.cpp

DtMenSimple.o: DataTypes/DtMenSimple.cpp

DtMenVid.o: DataTypes/DtMenVid.cpp

DtPrivada.o: DataTypes/DtPrivada.cpp

main.o: main.cpp

clean:
	rm -f *.o sistema
	clear