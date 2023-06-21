main:	DtUsuario.o DtFecha.o DtHora.o DtReloj.o DtMensaje.o main.o
			g++ DtUsuario.o DtFecha.o DtHora.o DtReloj.o DtMensaje.o main.o -o sistema

DtUsuario.o: DataTypes/DtUsuario.cpp

DtFecha.o: DataTypes/DtFecha.cpp

DtHora.o: DataTypes/DtHora.cpp

DtReloj.o: DataTypes/DtReloj.cpp

DtMensaje.o: DataTypes/DtMensaje.cpp

main.o: main.cpp

clean:
	rm -f *.o sistema
	clear