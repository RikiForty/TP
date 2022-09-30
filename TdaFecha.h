#ifndef TDAFECHA_H_INCLUDED
#define TDAFECHA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
// Interfaz de TDA Fecha

// Estructura que define al tipo

 typedef struct Fecha {
 int dia ;
int mes;
int anio;
int hora;
int minuto;


} Fecha;

// Typedef de puntero al tipo de dato

typedef Fecha* FechaPtr;

// Primitivas

 // Operaci�n de creaci�n (Constructor)

// Precondici�n: Fecha no ha sido creada
 // Postcondici�n: se crea PtrFecha

 // Par�metros:

// int Dia;
// int Mes;
// int Anio;
// int Hora;
// int Minuto;

// Devuelve puntero con la fecha creada

 FechaPtr crearFecha(int Dia, int Mes, int Anio, int Hora, int minuto);


 // Operaci�n de destrucci�n (destructor)

// Precondici�n: Fecha debe existir

// Postcondici�n: deja ese espacio de memoria vacio
// Par�metros:

// Fecha: puntero a destruir

// destruir: indica si est�n o no los nodos

// Devuelve: Fecha destruida

FechaPtr destruirFecha(FechaPtr Fecha);


// Operaci�n de obtenci�n

// Precondici�n: fecha debe haberse creado

// Postcondici�n:  se obtiene fecha

// Par�metros:

// Fecha: puntero a la fecha

// Devuelve puntero de la fecha

FechaPtr TraerFecha (FechaPtr fecha);

#endif // TDAFECHA_H_INCLUDED
