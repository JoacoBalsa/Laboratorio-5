CC = Clases/
CCI = Controles_Interfaces/
CDT= DataTypes/

main:	$(CDT)DtUsuario.o $(CDT)DtFecha.o $(CDT)DtHora.o $(CDT)DtReloj.o $(CDT)DtMensaje.o $(CDT)DtConversacion.o $(CDT)DtGrupo.o $(CDT)DtMenContacto.o $(CDT)DtMenImg.o $(CDT)DtMenSimple.o $(CDT)DtMenVid.o $(CDT)DtPrivada.o $(CDT)DtVisto.o $(CC)Usuario.o $(CC)Mensaje.o $(CC)MenImg.o $(CC)MenSimple.o $(CC)MenVid.o $(CC)MenContacto.o $(CC)Conversacion.o Fabrica.o $(CCI)ControlAbrirApp.o $(CC)Reloj.o $(CCI)ControlReloj.o $(CCI)ManejadorUsuario.o $(CCI)ManejadorConversacion.o $(CCI)ControlCasosMensaje.o $(CCI)ControlAgregarContacto.o $(CCI)ManejadorMensaje.o main.o 
	g++ $(CDT)DtUsuario.o $(CDT)DtFecha.o $(CDT)DtHora.o $(CDT)DtReloj.o $(CDT)DtMensaje.o $(CDT)DtConversacion.o $(CDT)DtGrupo.o $(CDT)DtMenContacto.o $(CDT)DtMenImg.o $(CDT)DtMenSimple.o $(CDT)DtMenVid.o $(CDT)DtPrivada.o $(CDT)DtVisto.o $(CC)Usuario.o $(CC)Mensaje.o $(CC)MenImg.o $(CC)MenSimple.o $(CC)MenVid.o $(CC)MenContacto.o $(CC)Conversacion.o Fabrica.o $(CCI)ControlAbrirApp.o $(CC)Reloj.o $(CCI)ControlReloj.o $(CCI)ManejadorUsuario.o $(CCI)ManejadorConversacion.o $(CCI)ControlCasosMensaje.o $(CCI)ControlAgregarContacto.o $(CCI)ManejadorMensaje.o main.o  -o sistema

$(CDT)DtUsuario.o: $(CDT)DtUsuario.cpp

$(CDT)DtFecha.o: $(CDT)DtFecha.cpp

$(CDT)DtHora.o: $(CDT)DtHora.cpp

$(CDT)DtReloj.o: $(CDT)DtReloj.cpp

$(CDT)DtMensaje.o: $(CDT)DtMensaje.cpp

$(CDT)DtConversacion.o: $(CDT)DtConversacion.cpp

$(CDT)DtGrupo.o: $(CDT)DtGrupo.cpp

$(CDT)DtMenContacto.o: $(CDT)DtMenContacto.cpp

$(CDT)DtMenImg.o: $(CDT)DtMenImg.cpp

$(CDT)DtMenSimple.o: $(CDT)DtMenSimple.cpp

$(CDT)DtMenVid.o: $(CDT)DtMenVid.cpp

$(CDT)DtPrivada.o: $(CDT)DtPrivada.cpp

$(CDT)DtVisto.o: $(CDT)DtVisto.cpp

$(CC)Usuario.o: $(CC)Usuario.cpp

$(CC)Mensaje.o: $(CC)Mensaje.cpp

$(CC)MenImg.o: $(CC)MenImg.cpp

$(CC)MenSimple.o: $(CC)MenSimple.cpp

$(CC)MenVid.o: $(CC)MenVid.cpp

$(CC)MenContacto.o: $(CC)MenContacto.cpp

$(CC)Conversacion.o: $(CC)Conversacion.cpp

Fabrica.o: Fabrica.cpp

$(CCI)ControlAbrirApp.o: $(CCI)ControlAbrirApp.cpp

$(CC)Reloj.o: $(CC)Reloj.cpp

$(CCI)ControlReloj.o: $(CCI)ControlReloj.cpp

$(CCI)ManejadorUsuario.o: $(CCI)ManejadorUsuario.cpp

$(CCI)ManejadorConversacion.o: $(CCI)ManejadorConversacion.cpp

$(CCI)ControlCasosMensaje.o: $(CCI)ControlCasosMensaje.cpp

$(CCI)ControlAgregarContacto.o: $(CCI)ControlAgregarContacto.cpp

$(CCI)ManejadorMensaje.o: $(CCI)ManejadorMensaje.cpp

main.o: main.cpp

clean:
	rm -f *.o sistema
	rm -f Clases/*.o sistema
	rm -f Controles_Interfaces/*.o sistema
	rm -f DataTypes/*.o sistema
	clear