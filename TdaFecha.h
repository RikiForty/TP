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

 // Operación de creación (Constructor)

// Precondición: Fecha no ha sido creada
 // Postcondición: se crea PtrFecha

 // Parámetros:

// int Dia;
// int Mes;
// int Anio;
// int Hora;
// int Minuto;

// Devuelve puntero con la fecha creada

 FechaPtr crearFecha(int Dia, int Mes, int Anio, int Hora, int minuto);


 // Operación de destrucción (destructor)

// Precondición: Fecha debe existir

// Postcondición: deja ese espacio de memoria vacio
// Parámetros:

// Fecha: puntero a destruir

// destruir: indica si están o no los nodos

// Devuelve: Fecha destruida

FechaPtr destruirFecha(FechaPtr Fecha);


// Operación de obtención

// Precondición: fecha debe haberse creado

// Postcondición:  se obtiene fecha

// Parámetros:

// Fecha: puntero a la fecha

// Devuelve puntero de la fecha

FechaPtr TraerFecha (FechaPtr fecha);

#endif // TDAFECHA_H_INCLUDED
