#ifndef TDAVEHICULO_H_INCLUDED
#define TDAVEHICULO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
//TDA vehiculo


//estructura que define vehiculo
typedef struct Vehiculo{
char *tipo;
char  *marca;
char *modelo;
char *patente;
}Vehiculo;


//typedef de puntero al tipo de dato
typedef Vehiculo* VehiculoPtr;


//------------------------------------------------


// Primitivas - Vehiculo


// Operación de creación
// Precondicion: Vehiculo no fue creado
// Postcondición: se crea Vehículo y sus datos
// Parámetros:
// tipo: char*
// marca: string
// modelo: string
// patente: string
//Devuelve puntero a la estructura vehiculo en memoria dinámica
VehiculoPtr crearVehiculo(char* tipo, char marca, char modelo, char patente);


// Operación de destrucción (Destructor)
// Precondicion: Vehiculo debe haberse creado con crearVehiculo
// Postcondición: se destruye vehiculo y se libera la memoria que ocupaba
// Parámetros:
// datos(tipo,marca,modelo,patente):  TDAVehiculo a destruir
// Devuelve NULL
VehiculoPtr destruirVehiculo(VehiculoPtr vp);


// Operación de obtención del Tipo
// Precondicion: Vehiculo debe haberse creado
// Postcondición: se obtiene el tipo de vehículo
// Parámetros:
// tipo: TDAVehiculo del que es obtiene el tipo
// Devuelve un char* con el tipo
char* getTipo(VehiculoPtr vp);


// Operación de obtención de Marca
// Precondicion: vehiculo debe haberse creado
// Postcondición: se obtiene la marca  del vehiculo
// Parámetros:
// Marca: TDAVehiculo del que se obtiene la marca
// Devuelve un string con la marca
int getMarca(VehiculoPtr vp);


// Operación de obtención de Modelo
// Precondicion: Vehiculo debe haberse creado
// Postcondición: se obtiene el modelo del Vehiculo
// Parámetros:
// modelo: TDAVehiculo del que se obtiene el modelo
// Devuelve un string del modelo
int getModelo(VehiculoPtr vp);


// Operación de obtención de Patente
// Precondicion: Vehiculo debe haberse creado
// Postcondición: se obtiene la patente del vehiculo
// Parámetros:
// patente: TDAVehiculo del que se obtiene la patente
// Devuelve un string de la patente
int getPatente(VehiculoPtr vp);


// Función de obtención de memoria
// Precondicion: Ninguna
// Postcondición: se reserva la memoria solicitada
// o se detiene el programa con un mensaje de error si no se pudo
// Parámetros:
// tamanio: tamaño de la memoria a reservar en size_t
// devuelve void* apuntando a la memoria reservada
void* obtenerMemoria(size_t tamano);




// Operación de asignación del tipo
// Precondicion: Vehiculo debe haberse creado
// Postcondición: Vehiculo cambia con el nuevo valor de tipo
// Parámetros:
// Vehiculo: TDAVehiculo al que se asignara el nuevo valor de tipo
// nombre: char* representando el nuevo valor del tipo de vehiculo
// No devuelve valor.
int setTipo(VehiculoPtr vp);


// Operación de asignación  de marca
// Precondicion: Vehiculo debe haberse creado
// Postcondición: Vehiculo cambia con el nuevo valor de marca
// Parámetros:
// Vehiculo: TDAVehiculo al que se asignara el nuevo valor de marca
// apellido: string representando la marca del vehiculo
// No devuelve valor.
int setMarca(VehiculoPtr vp);


// Operación de asignación de modelo
// Precondicion: Vehiculo debe haberse creado
// Postcondición: Vehiculo cambia con el nuevo valor del modelo
// Parámetros:
// Vehiculo: TDAVehiculo al que se asignara el nuevo valor del modelo
// modelo: string representando el nuevo valor del modelo
// No devuelve valor.
int setModelo(VehiculoPtr vp);


// Operación de asignación de patente
// Precondicion: Vehiculo debe haberse creado
// Postcondición: Vehiculo cambia con el nuevo valor de cuil
//parámetros:
// Vehiculo: TDAVehiculo al que se asignara el nuevo valor de patente
// patente: string representando el nuevo valor de patente
// No devuelve valor.
int setPatente(VehiculoPtr vp);

#endif // TDAVEHICULO_H_INCLUDED
