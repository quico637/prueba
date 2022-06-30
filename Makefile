all: Persona.o Venta.o Coche.o Date.o Concesionario.o prueba.o
	g++ Persona.o Venta.o Coche.o Date.o Concesionario.o prueba.o

prueba.o:
	g++ -c prueba.cpp Coche.h Persona.h Date.h Venta.h

Concesionario.o:
	g++ -c Concesionario.cpp Concesionario.h Persona.h Coche.h Date.h

Coche.o:
	g++ -c Coche.cpp Coche.h Persona.h

Persona.o:
	g++ -c Persona.cpp Persona.h

Date.o:
	g++ -c Date.cpp Date.h

Venta.o:
	g++ -c Venta.cpp Venta.h Persona.h Coche.h Date.h

clean: 
	rm -f *.o