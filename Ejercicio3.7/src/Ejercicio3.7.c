/*
 Alvarez Lopez Sebastian
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void);
int restar(int,int);
int sumar(int,int);

int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	char operacion;
	int resultado;

	numero1 = pedirNumero();
	numero2 = pedirNumero();

	do{
		printf("Valide la operacion que desea: 's' para sumar o 'r' para restar\n");
		fflush(stdin);
		scanf("%c",&operacion);
	}while(operacion != 's' && operacion !='r');

	if(operacion == 's')
	{
		resultado = sumar(numero1,numero2);
		printf("El valor de la suma es: %d",resultado);
	}else
	{
		resultado = restar(numero1,numero2);
		printf("El valor de la resta es: %d",resultado);
	}

	return EXIT_SUCCESS;
}
int pedirNumero(void)
{
	int resp;

	do{
	printf("ingrese un numero");
	scanf("%d",&resp);
	}while(resp < 10 || resp >100);

	return resp;
}

int restar(int numA, int numB)
{
	int resta;

	resta = numA - numB;

	return resta;
}

int sumar(int valorA, int valorB)
{
	int suma;

	suma = valorA + valorB;

	return suma;
}
