/*
 Alvarez Lopez Sebastian.
 Ejercicios 3.1 , 3.2 y 3.4
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarNumero(float);
float pedirNumero(void);

int main(void) {
	setbuf(stdout, NULL);


		mostrarNumero(pedirNumero());


	return EXIT_SUCCESS;
}

void mostrarNumero(float num)
{
	printf("Su numero ingresado es: %.2f\n",num);
}

float pedirNumero(void)
{
	float num;

	do{
		printf("Ingrese un flotante entre 20 y 30 ");
		scanf("%f",&num);
	}while(num < 20 || num > 30);

	return num;
}
