/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int acumuladorNumeros;
	int i;
	float promedio;

	acumuladorNumeros = 0;

	for(i=0; i<7; i++)
	{
		do {
			printf("Ingrese un numero negativo ");
			scanf ("%d", &numero);
		}while(numero > 0);

		acumuladorNumeros = acumuladorNumeros + numero;
	}

	promedio = (float)acumuladorNumeros / i;
	printf ("El promedio de los numeros es: %.2f", promedio);





	return EXIT_SUCCESS;
}
