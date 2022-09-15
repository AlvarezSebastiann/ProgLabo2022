/*
 Sebastian Alvarez Lopez
 Ejercicio 2-2: Ingresar números enteros, hasta que el usuario pida. Mostrar:
a) El promedio de los positivos y su mínimo.
b) El promedio de los negativos y su máximo.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int acumuladorPositivos;
	int contadorPositivo;
	int acumuladorNegativos;
	int contadorNegativo;
	int minimoPositivo;
	int maximoNegativo;
	float promedioPositivo;
	float promedioNegativo;
	int banderaPositivo;
	int banderaNegativo;
	char respuesta;

	acumuladorPositivos = 0;
	contadorPositivo = 0;
	acumuladorNegativos = 0;
	contadorNegativo = 0;
	banderaPositivo = 0;
	banderaNegativo = 0;
	minimoPositivo = 0;


	do
	{
		printf("Ingrese su numero ");
		scanf("%d",&numero);

	if(numero >= 0)
	{
		acumuladorPositivos = acumuladorPositivos + numero;
		contadorPositivo++;
	} else{
		acumuladorNegativos = acumuladorNegativos + numero;
		contadorNegativo++;
	}

	//Minimo Positvo
	if(banderaPositivo == 0 && numero > 0)
	{
		minimoPositivo = numero;
		banderaPositivo = 1;
	}else{
		if(numero > 0)
		{
			if (numero < minimoPositivo)
			{
				minimoPositivo = numero;
			}
		}
	}

	//Maximo Negativo
	if(banderaNegativo == 0 && numero < 0)
	{
		maximoNegativo = numero;
		banderaNegativo = 1;
	}else {
		if(numero > maximoNegativo)
		{
			maximoNegativo = numero;
		}
	}

		 printf("Desea seguir ingresando numeros? s/n ");
		 fflush(stdin);
		 scanf("%c",&respuesta);
	}while(respuesta == 's');


	if (contadorPositivo == 0)
	{
		printf("No se ingresaron numeros positivos\n ");
	}else {
		promedioPositivo = (float)acumuladorPositivos / contadorPositivo;
		printf("El promedio de los positivos es: %.2f\n", promedioPositivo);
	}

	if(contadorNegativo == 0)
	{
		printf("No se ingresaron numeros negativos\n ");
	}else {
		promedioNegativo = (float)acumuladorNegativos / contadorNegativo;
		printf("El promedio de los negativos es: %.2f\n", promedioNegativo);

	}

	if (minimoPositivo>0)
	{
		printf("El minimo de los positivos es: %d\n", minimoPositivo);
	}

	if(promedioNegativo <0)
	{
		printf("El maximo de los negativos es: %d\n",maximoNegativo);
	}


	return EXIT_SUCCESS;
}
