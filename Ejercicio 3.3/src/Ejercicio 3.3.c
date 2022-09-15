/*
 Alvarez Lopez Sebastian
 */

#include <stdio.h>
#include <stdlib.h>

int informarParImpar(int);


int main(void) {
	setbuf(stdout, NULL);

	int valorA;
	int retorno;

	printf("Ingrese un numero ");
	scanf("%d",&valorA);

	retorno = informarParImpar(valorA);

	if(retorno == 1){
		printf("El numero es par");
	}else {
		printf("EL numero es impar");
	}

	return EXIT_SUCCESS;
}

int informarParImpar(int num)
{
	int rtn;


	if(num%2== 0){
		rtn= 1;
	}else {
		rtn = 0;
	}
	return rtn;
}
