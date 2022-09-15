/*
 3-6: Realizar un programa que: asigne a la variable numero1 un valor
solicitado al usuario, valide el mismo entre 10 y 100, realice un descuento del 5% a
dicho valor a través de una función llamada realizarDescuento(). Mostrar el resultado
por pantalla.

ALvarez Lopez Sebastian
 */

#include <stdio.h>
#include <stdlib.h>

float realizarDescuento(float);

int main(void) {
	setbuf(stdout, NULL);

	float numero1;
	//float descuento;

	do{
		printf("Ingrese un numero entre 10 y 100");
		scanf("%f",&numero1);
	}while(numero1 < 10 || numero1 > 100);

	numero1 = realizarDescuento(numero1);
	printf("El descuento es: %f",numero1);

	return EXIT_SUCCESS;
}
float realizarDescuento(float numeroA){

	float descu;

	descu = numeroA*0.95;

	return descu;
}
