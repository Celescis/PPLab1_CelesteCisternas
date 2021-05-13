/*
 * Funciones.c
 *
 *  Created on: 13 may. 2021
 *      Author: celes
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Funciones.h"

int Menu()
{
	int opciones;

	printf("\n\t>ABM TRABAJOS<\t\n");
	printf("1. ALTA\n");
	printf("2. MODIFICAR\n");
	printf("3. BAJA\n");
	printf("4. MOSTRAR lista trabajos\n");
	printf("0. SALIR\n");
	utn_getInt("\nIngrese una opcion: \n","Error, opcion invalida",0,4,2,&opciones);

	return opciones;
}
int AltaTrabajo(eTrabajo lista[], int tam, eServicio listaS[], int tamS)
{
	int isOk=-1;
	int index;
	if(lista!=NULL && tam>0 && listaS!=NULL && tamS>0)
	{
		index=BuscarLibre(lista,tam);

		if(index<0)
		{
			printf("No hay espacio libre\n");
		}
		else
		{
			lista[index].id=ObtenerId();
			utn_getString("Ingrese la marca: \n","Error, reingrese\n",25,2,lista[index].marcaBicicleta);
			utn_getInt("Ingrese el rodado: \n","Error, reingrese\n",12,29,2,&lista[index].rodadoBicicleta);
			MostrarListaServicios(listaS,tamS);
			utn_getInt("Ingrese el ID del servicio: \n","Error, reingrese\n",20000,20004,2,&lista[index].idServicio);
			printf("Ingrese fecha de ingreso dd/mm/aaaa: \n");
			utn_getInt("Ingrese dia \n","Error, reingrese\n",1,31,2,&lista[index].fecha.dia);
			utn_getInt("Ingrese mes \n","Error, reingrese\n",1,12,2,&lista[index].fecha.mes);
			utn_getInt("Ingrese año [1970-2021]\n","Error, reingrese [1970-2021]\n",1970,2021,2,&lista[index].fecha.anio);
			lista[index].isEmpty=OCUPADO;

			isOk=0;
		}
	}

	return isOk;
}
int MostrarTrabajoConServicio(eTrabajo unTrabajo, eServicio servicios[], int tamS)
{
	int isOk=-1;
	char descripcionS[25];

	if(servicios != NULL && tamS>0)
	{
		GetDescripcionServicio(servicios,tamS,unTrabajo.idServicio,descripcionS);
		printf("ID de trabajo: %d\n"
			   "Marca bicicleta: %s\n"
			   "Numero de rodado: %d\n"
			   "ID servicio: %d\n"
			   "Descripcion: %s\n"
			   "Fecha: %2.d/%2.d/%d\n", unTrabajo.id
			   	   	   	   	   	   	  , unTrabajo.marcaBicicleta
									  , unTrabajo.rodadoBicicleta
								      , unTrabajo.idServicio
									  , descripcionS
									  , unTrabajo.fecha.dia
								  	  , unTrabajo.fecha.mes
									  , unTrabajo.fecha.anio);
		isOk=0;
	}

	return isOk;
}
int MostrarListaTrabajosConServicio(eTrabajo lista[], int tam, eServicio servicios[], int tamS)
{
	int isOk=-1;
	int i;

	if(lista!=NULL && tam>0 && servicios!=NULL && tamS>0)
	{
		printf("\n> LISTA DE TRABAJOS: \n");
		for(i=0;i<tam;i++)
		{
			if(lista[i].isEmpty==OCUPADO)
			{
				MostrarTrabajoConServicio(lista[i],servicios,tamS);
				isOk=0;
			}
		}
	}

	return isOk;
}
