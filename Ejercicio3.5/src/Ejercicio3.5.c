

#include <stdio.h>
#include <stdlib.h>
#include "Calculos.h" //solo se incluye el header, osea la cabecera, el ".c" NO.
//Siempre los prototipos se guardan en un .h


/*int restar1(int num1, int num2); // los parentesis es para meter informacion
int restar2(void);
void restar3(int num1, int num2);
void restar4(void);
int pedirNumero(void);
void mostrarNumero(int);*/

int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	int resultado;

	printf("resta 1\n");
	numero1 = pedirNumero();
	numero2 = pedirNumero();
	resultado = restar1(numero1,numero2);
	mostrarNumero(resultado);

	printf("\nresta 2\n");
	resultado = restar2();
	mostrarNumero(resultado);

	printf("\nresta 3\n");
	numero1 = pedirNumero();
	numero2 = pedirNumero();
	restar3(numero1,numero2);

	printf("\nresta 4\n");
	restar4();


	return 0;
}

 /* //Todos los desarrollos de las funciones se guardan en un .c
int restar1 (int num1, int num2)
{
	int resta;

	resta = num1 - num2;

	return resta;
}

int restar2 (void)
{
	int num1;
	int num2;
	int resta;

	num1=pedirNumero();
	num2=pedirNumero();

	resta=restar1(num1,num2);

	return resta;
}

void restar3(int num1, int num2)
{
	int resta;
	resta = restar1(num1,num2);
	mostrarNumero(resta);

}

void restar4(void)
{
	int num1;
	int num2;
	int resta;

	num1=pedirNumero();
	num2=pedirNumero();
	resta=restar1(num1,num2);
	mostrarNumero(resta);
}

int pedirNumero(void)
{
	int resp;

		printf("Ingrese un numero: ");
		scanf("%d",&resp);

		return resp;

}

void mostrarNumero(int num)
{
	printf("El resultado de la resta es: %d\n",num);
}*/











/*  TEORIA DE GUIA 3 FUNCIONES


#include <stdio.h>
#include <stdlib.h>

int pedirNumero(); //prototipo. int es el tipo de variable que me va responder la funcion.
int sumar(int num1, int num2); //parametros formales. int num1 es el dato que recibe la funcion(que yo le voy a pasar).

//Pregunta de parcial: Diferencia entre parametros formales y parametros actuales/reales:
 ¿Existen los parametros formales en la llamada a la funcion? No, los parametros formales existen en el prototipo y los parametros actuales/reales son lo que existen cuando se llama a la funcion.
 ¿Los parametros formales y los actuales/reales se las declara con el mismo nombre? no necesariamente se crean con el mismo nombre, puede llamarse distintos.
 ¿Los parametros formales y los parametros actuales tienen que ser del mismo tipo? Si, porque si la declare pidiendo comida por asi decir, no le puedo pasar autos.

PUNTEROS.
   "*" te pide la direccion de memoria y "&" te la pasa.


  */
