/*
	Alvarez Lopez Sebastian
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int i;
	int menorNumero;
	int banderaMenorNumero;
	int numeroParMayor;
	int banderaPar;
	int acumuladorNegativos;
	int contador;
	int mayorNumero;
	int posicionMayor;

	banderaMenorNumero = 0;
	banderaPar=0;
	acumuladorNegativos = 1;
	contador = 0;

	for(i=0; i<8; i++){

		printf ("Ingrese un numero");
		scanf("%d",&numero);

		while (numero == 0){
			printf("Error, ingrese un numero distinto de 0: ");
			scanf("%d",&numero);
		}

		if(banderaMenorNumero == 0){
			menorNumero = numero;
			banderaMenorNumero = 1;
		}else {
			if(numero<menorNumero){
				menorNumero = numero;
			}
		}

		if(numero % 2 == 0){
			if(banderaPar == 0){
				numeroParMayor = numero;
				banderaPar = 1;
			}else {
				if(numero>numeroParMayor){
					numeroParMayor = numero;
				}
			}

		}

		if(numero<0){
			acumuladorNegativos = acumuladorNegativos * numero;
		}

		if (contador == 0){
			mayorNumero = numero;
			posicionMayor = contador;
			contador = 1;
		} else {
			if (numero>mayorNumero){
				mayorNumero = numero;
				posicionMayor = contador;
			}
		}
		contador++;
	}

	printf("El menor numero ingresado es: %d\n",menorNumero);
	printf("De los pares el mayor numero ingresado es: %d\n",numeroParMayor);

	if(acumuladorNegativos == 1){
		printf("No hubo ingreso de numeros negativos\n ");
	}else {
		printf("El producto de los negativos es: %d\n", acumuladorNegativos);
	}

	printf("El mayor numero fue ingresado en la posicion: %d\n", posicionMayor);





	return EXIT_SUCCESS;
}
