/*
 * Trabajo.h
 *
 *  Created on: 12 may. 2021
 *      Author: celes
 */

#ifndef TRABAJO_H_
#define TRABAJO_H_
#define T 4
#define VACIO 0
#define OCUPADO 1

typedef struct
{
	int dia;
	int mes;
	int anio;
}eFecha;

typedef struct
{
	int id;
	char marcaBicicleta[25];
	int rodadoBicicleta;
	int idServicio;
	eFecha fecha;
	int isEmpty;
}eTrabajo;

int ObtenerId(void);
void Inicializar(eTrabajo lista[], int tam);
int BuscarLibre(eTrabajo lista[], int tam);


#endif /* TRABAJO_H_ */
