/*
Ejercicio 1:
Crear una función que le solicite al usuario el ingreso de un numero y lo retorne.

Ejercicio 2:
Crear una función que reciba como parámetro dos números enteros, que realice el promedio de los números y que retorne dicho valor.

Ejercicio 3:
Crear una función que reciba como parámetro un número entero. La función retorna 1 en caso de que sea positivo, -1 en caso de que sea negativo y 0 en caso de que sea 0. Realizar la prueba lógica de la función en el main.

Ejercicio 4:
Realizar un programa que permita el ingreso de 10 números enteros.
Determinar:
El promedio de los positivos
La cantidad de ceros
Del menor de los negativos la suma de los antecesores de ese valor (frenar en cero).

Nota:
Utilizar las funciones del punto anterior y desarrollar funciones para resolver los procesos que están resaltados.


 */

#include <stdio.h>
#include <stdlib.h>


int pedirNumero(void);
float hacerPromedio(int,int);
int recibirNumero(int);


int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	float promedio;

	numero1 = pedirNumero();
	numero2 = pedirNumero();

	promedio = hacerPromedio(numero1,numero2);
	printf("su promedio es %.2f", promedio);






	return EXIT_SUCCESS;
}


int pedirNumero(void)
{
	int numero;
	printf("Ingrese un numero");
	scanf("%d",&numero);
	return numero;
}
float hacerPromedio(int num1,int num2)
{
	float promedio;

	promedio = (num1 + (float)num2) /2 ;

	return promedio;
}

int recibirNumero(int)
{
	int rtn;

}



