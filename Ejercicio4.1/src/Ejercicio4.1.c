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

	int i;
	int numero;
	int factorial;

	factorial = 1;

	numero = pedirNumero();

	for(i=1; i<= numero ; i++){
		factorial = factorial * i;
	}

	printf("El factorial de %d es : %d\n",numero,factorial);

	return EXIT_SUCCESS;
}
