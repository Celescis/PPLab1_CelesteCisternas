/*
 * Funciones.h
 *
 *  Created on: 13 may. 2021
 *      Author: celes
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include "Trabajo.h"
#include "Servicio.h"
#include "Utn.h"


int Menu();
int AltaTrabajo(eTrabajo lista[], int tam, eServicio listaS[], int tamS);
int MostrarTrabajoConServicio(eTrabajo unTrabajo, eServicio servicios[], int tamS);
int MostrarListaTrabajosConServicio(eTrabajo lista[], int tam, eServicio servicios[], int tamS);







#endif /* FUNCIONES_H_ */