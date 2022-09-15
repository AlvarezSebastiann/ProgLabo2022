/*
 ============================================================================
 Pedir 10 números entre -100 y 100, guardarlos en un Array. Determinar:
 a) Cantidad de negativos.
 b) Sumatoria de los impares.
 c) El mayor de los pares.
 d) Listado de los números ingresados.
 e) Listado de los números mayores a 15.
 f) Listado de los números de las posiciones impares.
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumeros();

int main(void) {
	setbuf(stdout, NULL);

	int listaNumeros[10];
	int contadorNegativos;
	int sumatoriaImpares;
	int mayorPar;

	contadorNegativos = 0;
	sumatoriaImpares = 0;

	for (int i = 0; i < 10; i++)
	{
			listaNumeros[i] = pedirNumeros();
	}



	for (int i = 0; i < 10; i++) {
		if (listaNumeros[i]< 0) {
			contadorNegativos++;
		}
	}
	printf("\nLa cantidad de negativos es: %d\n", contadorNegativos);


	for (int i = 0; i < 10; i++) {
		if (listaNumeros[i] % 2 != 0) {
			sumatoriaImpares = sumatoriaImpares + listaNumeros[i];
		}
	}
			printf("\nLa suma de los numeros impares es: %d\n", sumatoriaImpares);


	for (int i = 0; i < 10; i++) {
		printf("\nEl numero ingresado es: %d", listaNumeros[i]);
	}


	for (int i = 0; i < 10; i++) {
		if (listaNumeros[i] > 15) {
			printf("\nNumero ingresado mayor a 15: %d", listaNumeros[i]);
		}
	}

	for(int i=0; i<10;i++)
	{
		if(listaNumeros[i]%2==0)
		{
			mayorPar = listaNumeros[i];
			if(listaNumeros[i] > mayorPar)
			{
				mayorPar = listaNumeros[i];
			}
		}
	}
	printf("\nEl mayor numero par es: %d",mayorPar);

	for(int i=0; i<10;i++)
	{
		if(i%2 == 0)
		{
			printf("\nEl siguiente numero esta en la posicion impar: %d", listaNumeros[i]);
		}
	}


	return EXIT_SUCCESS;
}

int pedirNumeros()
{
	int num;


		do{
			printf("Ingresar un un numero entre -100 y 100 ");
			scanf("%d",&num);
		}while(num < -100 || num > 100);

	return num;
}
