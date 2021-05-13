/*
 * utn.h
 *
 *  Created on: 8 may. 2021
 *      Author: celes
 */

#ifndef UTN_H_
#define UTN_H_

//-----------------------------------------------CHAR----------------------------------------------------
/**
 * @fn int SizeString(char[])
 * @brief convierte toda la cadena en minuscula excepto la primer letra
 *
 * @param string recibe una cadena
 * @return devuelve -1 si salio todo mal, devuelve 0 si salio todo bien
 */
int SizeString(char string[]);
/**
 * @fn int isChar(char[])
 * @brief verifica si la cadena es de tipo texto
 *
 * @param string recibe una cadena
 * @return devuelve -1 si salio todo mal, devuelve 0 si salio todo bien
 */
int isChar(char string[]);
/**
 * @fn int getString(char[], int)
 * @brief verifica en mi cadena si tengo un enter y convierte mi \n en mi final \0
 *
 * @param string recibe una cadena
 * @param tam le paso el tama�o que va a tener la cadena
 * @return devuelve -1 si salio todo mal, devuelve 0 si salio todo bien
 */
int getString(char string[], int tam);
/**
 * @fn int utn_getString(char[], char[], int, int, char[])
 * @brief paso un mensaje pidiendo un input de tipo cadena, si encuentra un error me descuenta en los reintentos y envia el mensaje de error
 *
 * @param mensaje imprime un mensaje
 * @param mensajeError imprime un mensaje de error
 * @param tam le paso el tama�o reservado
 * @param reintentos le paso la cantidad de intentos para que ingrese el input
 * @param input valor de tipo cadena que va a ingresar el usuario
 * @return devuelve -1 si salio todo mal, devuelve 0 si salio todo bien
 */
int utn_getString(char mensaje[], char mensajeError[], int tam, int reintentos,char input[]);
//-----------------------------------------------INT-----------------------------------------------------
/**
 * @fn int isInt(char[])
 * @brief
 *
 * @param resultado
 * @return devuelve -1 si salio todo mal, devuelve 0 si salio todo bien
 */
int isInt(char resultado[]);//verifica si la cadena tiene numeros
/**
 * @fn int getInt(int*)
 * @brief
 *
 * @param input
 * @return devuelve -1 si salio todo mal, devuelve 0 si salio todo bien
 */
int getInt(int* input);//verifica que sea int
/**
 * @fn int utn_getInt(char[], char[], int, int, int, int*)
 * @brief
 *
 * @param mensaje
 * @param mensajeError
 * @param min
 * @param max
 * @param reintentos
 * @param input
 * @return devuelve -1 si salio todo mal, devuelve 0 si salio todo bien
 */
int utn_getInt(char mensaje[],char mensajeError[],int min,int max,int reintentos,int* input);
//----------------------------------------------FLOAT----------------------------------------------------
/**
 * @fn int isFloat(char[])
 * @brief
 *
 * @param resultado
 * @return devuelve -1 si salio todo mal, devuelve 0 si salio todo bien
 */
int isFloat(char resultado[]);//verifica si la cadena son numeros y que tenga el '.'
/**
 * @fn int getFloat(float*)
 * @brief
 *
 * @param input
 * @return devuelve -1 si salio todo mal, devuelve 0 si salio todo bien
 */
int getFloat(float* input);//verifica que sea float
/**
 * @fn int utn_getFloat(char[], char[], float, float, int, float*)
 * @brief
 *
 * @param mensaje
 * @param mensajeError
 * @param min
 * @param max
 * @param reintentos
 * @param input
 * @return devuelve -1 si salio todo mal, devuelve 0 si salio todo bien
 */
int utn_getFloat(char mensaje[], char mensajeError[], float min, float max, int reintentos, float* input);
//----------------------------------------------OTROS----------------------------------------------------



#endif /* UTN_H_ */