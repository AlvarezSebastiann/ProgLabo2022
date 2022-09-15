/*
 * Calculos.c
 *
 *  Created on: 1 sep. 2022
 *      Author: alvar
 */
// EN LOS PUNTOS C INCLUIMOS LAS BIBIOLETAS POR DEFECTO.
#include <stdio.h>
#include <stdlib.h>

int restar1 (int num1, int num2)
{
	int resta;

	resta = num1 - num2;

	return resta;
}

int restar2 (void)
{
	int num1;
	int num2;
	int resta;

	num1=pedirNumero();
	num2=pedirNumero();

	resta=restar1(num1,num2);

	return resta;
}

void restar3(int num1, int num2)
{
	int resta;
	resta = restar1(num1,num2);
	mostrarNumero(resta);

}

void restar4(void)
{
	int num1;
	int num2;
	int resta;

	num1=pedirNumero();
	num2=pedirNumero();
	resta=restar1(num1,num2);
	mostrarNumero(resta);
}

int pedirNumero(void)
{
	int resp;

		printf("Ingrese un numero: ");
		scanf("%d",&resp);

		return resp;

}

void mostrarNumero(int num)
{

	printf("El resultado de la resta es: %d\n",num);
}
