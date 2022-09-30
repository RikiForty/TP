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

 // Operaci�n de creaci�n (Constructor)

// Precondici�n: el nodo a asignar como reparto no ha sido creado

 // Postcondici�n: se crea el nodo con nulll en PtrReparto y se asigna la informacion

// Par�metros:

// PtrReparto : puntero al nodo reparto

// PtrPaquete: puntero al dato a almacenar

//PtrChofer : puntero al dato a almacenar

//PtrCliente: puntero al dato a almacenar

//PtrVehiculo: puntero al dato a almacenar

// Devueve �dato insertado correctamente�

 RepartoPtr CrearReparto(char PtrReparto ,char PtrPaquete , char PtrChofer, char PtrCliente ,char Ptrvehiculo );




 // Operaci�n de destrucci�n (destructor)

// Precondici�n: El nodo debe haberse creado

// Postcondici�n: Se libera la memoria del nodo destruido

// Par�metros:

// Puntero eliminado

// Devuelve NULL

RepartoPtr DestruirReparto(RepartoPtr Reparto);



// Operaci�n de obtenci�n de Reparto

// Precondici�n: Reparto debe haberse creado

// Postcondici�n:  se obtiene el puntero reparto

// Par�metros:

// reparto: puntero a reparto

// Devuelve puntero del reparto

RepartoPtr TraerReparto(RepartoPtr Reparto);


// Operaci�n de creacion de cantidad de repartos

// Precondicion: al menos un reparto debe haberse creado

 // Postcondici�n: Obtiene la memora del puntero asignado como CantidadReparto

 // Par�metros:

 // PtrCanridadRepartos: puntero al nodo

// Devuelve puntero al dato almacenado



 RepartoPtr CantidadReparto(CantidadRepartoPtr CantidadReparto);


// Operaci�n de obtenci�n de CantidadReparto

// Precondici�n: CAntidadReparto debe haberse creado

// Postcondici�n:  se obtiene el puntero Cantidadreparto

// Par�metros:

// Cantidadreparto: puntero a cantidadreparto

// Devuelve puntero de Cantidadreparto

CantidadRepartoPtr TraerCantidad(CantidadRepartoPtr CantidadReparto);



// Operaci�n de destrucci�n (destructor)

// Precondici�n: El nodo debe haberse creado

// Postcondici�n: Se libera la memoria del nodo destruido

// Par�metros:

// Puntero eliminado

// Devuelve NULL

CantidadRepartoPtr Destruircantidad(CantidadRepartoPtr CantidadReparto);



// Operaci�n de crear

// Precondicion: Reparto debe existir

 // Postcondici�n: Obtiene la memora del puntero asignado como concluirReparto

 // Par�metros:

 // PtrConcluirRepartos: puntero al nodo

// Devuelve puntero al dato almacenado

 PtrConcluirReparto ConcluirReparto(PtrConcluirReparto ConcluirReparto);


// Operaci�n de obtenci�n de dato

// Precondici�n:ConcluirRepartos debe haberse creado

// Postcondici�n:  se obtiene el puntero Concluirreparto

// Par�metros:

// Concluirreparto: puntero a Concluirreparto

// Devuelve puntero de Concluirreparto

PtrConcluirReparto TraerConclusion(PtrConcluirReparto ConcluirReparto);



// Operaci�n de destrucci�n (destructor)

// Precondici�n: El nodo debe haberse creado

// Postcondici�n: Se libera la memoria del nodo destruido

// Par�metros:

// Puntero eliminado

// Devuelve NULL

PtrConcluirReparto ConcluirCantidad(PtrConcluirReparto ConcluirReparto);


// Operaci�n de creaci�n

// Precondicion: cantidadReparto debe existir

 // Postcondici�n:  se crea una fecha con dia, mes, a�o, hora y minutos

 // Par�metros:

 //  dia

// mes

// anio

// hora

// minutos

// Devuelve puntero en memoria dinamica

PtrHoraInicio HoraInicio(int dia, int mes, int anio, int hora, int minuto);



// Operaci�n de destrucci�n (destructor)

// Precondici�n: horainicio debe haberse creado

// Postcondici�n: Se libera la memoria ocupada

// Par�metros:

// HoraInicio destruida

// Devuelve NULL

PtrHoraInicio DestuirHoraInico(PtrHoraInicio HoraInicio);





// Operaci�n de creaci�n

// Precondicion: cantidadReparto y horaInicio deben existir

 // Postcondici�n:  se crea una fecha con dia, mes, a�o, hora y minutos

 // Par�metros:

 //  dia

// mes

// anio

// hora

// minutos

// Devuelve puntero en memoria dinamica

PtrHoraconclucion Horaconclucion(int dia, int mes, int anio, int hora, int minuto);





// Operaci�n de destrucci�n (destructor)

// Precondici�n: horaconclucion debe haberse creado

// Postcondici�n: Se libera la memoria ocupada

// Par�metros:

// Horaconclucion destruida

// Devuelve NULL

PtrHoraconclucion DestuirHoraconclucion (PtrHoraInicio HoraInicio);

#endif // TDAREPARTO_H_INCLUDED
