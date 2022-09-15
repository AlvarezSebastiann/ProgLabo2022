/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirParOImpar (int);

int main(void) {
	setbuf(stdout, NULL);

	int numero;








	return EXIT_SUCCESS;
}

int pedirParOImpar (int num)
{

	printf("Ingrese un numero ");
	scanf("%d",&num);

	if(num % 2 == 0){
		return 1;
	}else {
		return 0;
	}

}
