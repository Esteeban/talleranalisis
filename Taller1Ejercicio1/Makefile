#MAKE BASICO PARA EL EJERCICIO 1 DEL TALLER 1
all: programa

programa: ejercio1.o validadatos.o validaciondicion.o
	g++ -o programa ejercio1.o validadatos.o validaciondicion.o

ejercio1.o: ejercio1.cpp funciones.h
	g++ -c ejercio1.cpp
	
validadatos.o: validadatos.cpp funciones.h
	g++ -c validadatos.cpp
	
validaciondicion.o: validaciondicion.cpp funciones.h
	g++ -c validaciondicion.cpp
	
clean:
	rm -f programa *.o
	
