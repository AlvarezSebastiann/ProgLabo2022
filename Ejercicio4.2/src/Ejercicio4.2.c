/*
 Alvarez Lopez Sebastian
 */

#include <stdio.h>
#include <stdlib.h>

int sumar(int operador1, int operador2, int* resul);

int main(void) {
	setbuf(stdout, NULL);


	int num2;
	int num1;
	int resultado;
	int puntero;

	printf("ingrese un numero");
	scanf("%d",&num1);
	printf("ingrese otro numero");
	scanf("%d",&num2);


	puntero = sumar(num1,num2,&resultado);
	printf("Si la funcion retorna 0, se pudo realizar la suma sino retornara -1 y tira error. la funcion retorna %d", puntero);

	return EXIT_SUCCESS;
}

int sumar(int operador1, int operador2,int* resul){



	(*resul) = operador1+operador2;

	if(resul!= 0)
	{
		return 0; //no hubo error
	}else
	{
		return -1;
	}


}


/* Para saber los tamaños de las variables
    int a;
	char b;
	float c;

	printf("el size de A es: %d\n", sizeof(a));     4
	printf("el size de B es: %d\n", sizeof(b));     1
	printf("el size de C es: %d\n", sizeof(c));     4

	Para saber la direccion de a:

	printf("la direccion de A es: %d\n", &a);
 */






/*
 int dividir(int operador1, int operador2,float* direccionDeVariableDeRetorno);

int main(void) {
	setbuf(stdout, NULL);
	int a =30;
	int b=0;
	float resultado;
	int retHuboError;

	printf("la direccion de resultado en el main es: %f\n", &resultado);

	retHuboError = dividir(a,b,&resultado);
	if(retHuboError == 1){
		printf("no se puede divivir");
	}else {
		printf("resultado: %f",resultado);
	}




	return EXIT_SUCCESS;
}

int dividir(int operador1, int operador2,float* direccionDeVariableDeRetorno){

	float resul;
	int huboError;

	printf("\nLa direccion de resultado en funcion dividir es: %f\n", &direccionDeVariableDeRetorno);

	if(operador2 !=0)
	{
		resul = (float)operador1 / operador2;
		//Escribir en la direccion de la variable direccionDeVariableDeRetorno el resultado de la division resul

		//escribimeEnLamemoriaEsto(direccionDeVariableDeRetorno,resul);
		(*direccionDeVariableDeRetorno)=resul;

		huboError = 0; //no hubo error
	}else
	{
		huboError = 1;
	}

	return huboError;
}




