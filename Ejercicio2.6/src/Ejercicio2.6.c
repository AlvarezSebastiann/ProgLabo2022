/*Sebastian Alvarez Lopez
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char caracter;
	int i;
	int contadorM;
	int contadorMinuscula;

	contadorM=0;
	contadorMinuscula=0;


	for(i=0 ; i<5; i++){

		printf("Ingrese un caracter ");
		fflush(stdin);
		scanf("%c",&caracter);

		if(caracter == 'm'){
			contadorMinuscula++;
		}else {
			if(caracter == 'M'){
				contadorM++;
			}
		}


	}

	if(contadorMinuscula ==0){
		printf("Usted no ingreso m minusculas\n ");
	}else {
		printf("Ingreso %d m minusculas\n ",contadorMinuscula);
	}

	if(contadorM ==0){
		printf("Usted no ingreso M mayusculas\n");
	}else {
		printf("Ingreso %d M mayusculas\n ", contadorM);
	}




	return EXIT_SUCCESS;
}
