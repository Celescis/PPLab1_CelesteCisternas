/*
 * Trabajo.c
 *
 *  Created on: 12 may. 2021
 *      Author: celes
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Trabajo.h"
#include "Utn.h"

int idAutoIncremental=0;

int ObtenerId(void)
{
	return idAutoIncremental+=1;
}

void Inicializar(eTrabajo lista[],int tam)
{
	int i;

	for(i=0;i<tam;i++)
	{
		lista[i].isEmpty=VACIO;
	}
}

int BuscarLibre(eTrabajo lista[], int tam)
{
	int i;
	int index=-1;

	if(lista!=NULL)
	{
		for(i=0;i<tam;i++)
		{
			if(lista[i].isEmpty==VACIO)
			{
				index=i;
				break;
			}
		}
	}

	return index;
}
