CXX = g++                                               #VARIABLES
CXXFLAGS = -g3 -Wall -lm     #<-- GENERA OBJETOS                #CXXFLAGS: ARGUMENTOS DE COMPIL 
MKDIR = mkdir -p                             #-g3: se compila con +info para deback
				              #-Wall: imprime por pantalla todos los warnings que se ejecuten 
				              #-lm: algo con las funciones matematicas
				              # mkdir -p: crea directorios
				              # -lm:  
LIBS = -lm

directorios:
	$(MKDIR) build dist

main.o: directorios main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o build/main.o

funciones.o: directorios funciones.cpp
	$(CXX) $(CXXFLAGS) -c funciones.cpp -o build/funciones.o

all: clean main.o funciones.o
	$(CXX) $(CXXFLAGS) $(LIBS) -o dist/programa build/main.o build/funciones.o
	rm -fr build 

clean:
	rm -fr *.o a.out core programa dist build

.DEFAULT_GOAL := all
