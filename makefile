main:	DtUsuario.o DtFecha.o DtHora.o DtRegistro.o DtMensaje.o main.o
			g++ DtUsuario.o DtFecha.o DtHora.o DtRegistro.o DtMensaje.o main.o -o sistema

DtUsuario.o: DtUsuario.cpp

DtFecha.o: DtFecha.cpp

DtHora.o: DtHora.cpp

DtRegistro.o: DtRegistro.cpp

DtMensaje.o: DtMensaje.cpp

main.o: main.cpp

clean:
	rm -f *.o sistema
	clear