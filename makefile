main:	DtUsuario.o DtFecha.o DtHora.o DtReloj.o DtMensaje.o DtConversacion.o DtGrupo.o DtMenContacto.o DtMenImg.o DtMenSimple.o DtMenVid.o DtPrivada.o main.o
			g++ DtUsuario.o DtFecha.o DtHora.o DtReloj.o DtMensaje.o DtConversacion.o DtGrupo.o DtMenContacto.o DtMenImg.o DtMenSimple.o DtMenVid.o DtPrivada.o main.o -o sistema

DtPrivada.o: DataTypes/DtPrivada.cpp

DtMenVid.o: DataTypes/DtMenVid.cpp

DtMenSimple.o: DataTypes/DtMenSimple.cpp

DtMenImg.o: DataTypes/DtMenImg.cpp

DtMenContacto.o: DataTypes/DtMenContacto.cpp

DtGrupo.o: DataTypes/DtGrupo.cpp

DtConversacion.o: DataTypes/DtConversacion.cpp

DtUsuario.o: DataTypes/DtUsuario.cpp

DtFecha.o: DataTypes/DtFecha.cpp

DtHora.o: DataTypes/DtHora.cpp

DtReloj.o: DataTypes/DtReloj.cpp

DtMensaje.o: DataTypes/DtMensaje.cpp

main.o: main.cpp

clean:
	rm -f *.o sistema
	clear