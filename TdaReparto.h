#ifndef TDAREPARTO_H_INCLUDED
#define TDAREPARTO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "TdaCliente.h"
#include "TdaChofer.h"
#include "TdaVehiculo.h"
#include "TdaPaquete.h"
// Interfaz de TDA Reparto



// Estructura que define al tipo

 typedef struct Reparto {

 ClientePtr Cliente;
 ChoferPtr Chofer;
 VehiculoPtr Vehiculo;
 PaquetePtr Paquete;

} Reparto;

// Typedef de puntero al tipo de dato

typedef Reparto *RepartoPtr;
 typedef void *CantidadRepartoPtr;
  typedef void *PtrConcluirReparto;
   typedef void *PtrHoraInicio;
    typedef void *PtrHoraconclucion;

// Primitivas

 // Operación de creación (Constructor)

// Precondición: el nodo a asignar como reparto no ha sido creado

 // Postcondición: se crea el nodo con nulll en PtrReparto y se asigna la informacion

// Parámetros:

// PtrReparto : puntero al nodo reparto

// PtrPaquete: puntero al dato a almacenar

//PtrChofer : puntero al dato a almacenar

//PtrCliente: puntero al dato a almacenar

//PtrVehiculo: puntero al dato a almacenar

// Devueve “dato insertado correctamente”

 RepartoPtr CrearReparto(char PtrReparto ,char PtrPaquete , char PtrChofer, char PtrCliente ,char Ptrvehiculo );




 // Operación de destrucción (destructor)

// Precondición: El nodo debe haberse creado

// Postcondición: Se libera la memoria del nodo destruido

// Parámetros:

// Puntero eliminado

// Devuelve NULL

RepartoPtr DestruirReparto(RepartoPtr Reparto);



// Operación de obtención de Reparto

// Precondición: Reparto debe haberse creado

// Postcondición:  se obtiene el puntero reparto

// Parámetros:

// reparto: puntero a reparto

// Devuelve puntero del reparto

RepartoPtr TraerReparto(RepartoPtr Reparto);


// Operación de creacion de cantidad de repartos

// Precondicion: al menos un reparto debe haberse creado

 // Postcondición: Obtiene la memora del puntero asignado como CantidadReparto

 // Parámetros:

 // PtrCanridadRepartos: puntero al nodo

// Devuelve puntero al dato almacenado



 RepartoPtr CantidadReparto(CantidadRepartoPtr CantidadReparto);


// Operación de obtención de CantidadReparto

// Precondición: CAntidadReparto debe haberse creado

// Postcondición:  se obtiene el puntero Cantidadreparto

// Parámetros:

// Cantidadreparto: puntero a cantidadreparto

// Devuelve puntero de Cantidadreparto

CantidadRepartoPtr TraerCantidad(CantidadRepartoPtr CantidadReparto);



// Operación de destrucción (destructor)

// Precondición: El nodo debe haberse creado

// Postcondición: Se libera la memoria del nodo destruido

// Parámetros:

// Puntero eliminado

// Devuelve NULL

CantidadRepartoPtr Destruircantidad(CantidadRepartoPtr CantidadReparto);



// Operación de crear

// Precondicion: Reparto debe existir

 // Postcondición: Obtiene la memora del puntero asignado como concluirReparto

 // Parámetros:

 // PtrConcluirRepartos: puntero al nodo

// Devuelve puntero al dato almacenado

 PtrConcluirReparto ConcluirReparto(PtrConcluirReparto ConcluirReparto);


// Operación de obtención de dato

// Precondición:ConcluirRepartos debe haberse creado

// Postcondición:  se obtiene el puntero Concluirreparto

// Parámetros:

// Concluirreparto: puntero a Concluirreparto

// Devuelve puntero de Concluirreparto

PtrConcluirReparto TraerConclusion(PtrConcluirReparto ConcluirReparto);



// Operación de destrucción (destructor)

// Precondición: El nodo debe haberse creado

// Postcondición: Se libera la memoria del nodo destruido

// Parámetros:

// Puntero eliminado

// Devuelve NULL

PtrConcluirReparto ConcluirCantidad(PtrConcluirReparto ConcluirReparto);


// Operación de creación

// Precondicion: cantidadReparto debe existir

 // Postcondición:  se crea una fecha con dia, mes, año, hora y minutos

 // Parámetros:

 //  dia

// mes

// anio

// hora

// minutos

// Devuelve puntero en memoria dinamica

PtrHoraInicio HoraInicio(int dia, int mes, int anio, int hora, int minuto);



// Operación de destrucción (destructor)

// Precondición: horainicio debe haberse creado

// Postcondición: Se libera la memoria ocupada

// Parámetros:

// HoraInicio destruida

// Devuelve NULL

PtrHoraInicio DestuirHoraInico(PtrHoraInicio HoraInicio);





// Operación de creación

// Precondicion: cantidadReparto y horaInicio deben existir

 // Postcondición:  se crea una fecha con dia, mes, año, hora y minutos

 // Parámetros:

 //  dia

// mes

// anio

// hora

// minutos

// Devuelve puntero en memoria dinamica

PtrHoraconclucion Horaconclucion(int dia, int mes, int anio, int hora, int minuto);





// Operación de destrucción (destructor)

// Precondición: horaconclucion debe haberse creado

// Postcondición: Se libera la memoria ocupada

// Parámetros:

// Horaconclucion destruida

// Devuelve NULL

PtrHoraconclucion DestuirHoraconclucion (PtrHoraInicio HoraInicio);

#endif // TDAREPARTO_H_INCLUDED
