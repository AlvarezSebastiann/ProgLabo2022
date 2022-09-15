/*
 ============================================================================
 Name        : clase3.c
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

	int numero;
	int lista[5];
	char respuesta;
	int posicion;
	int acumulador;

	acumulador = 0;

	//carga secuencial: cargarlos de principio a fin pasando por todos los elementos.
	for(int i=0 ; i<5 ;i++)
	{
		lista[i]= -1; //valor ilogico para inicializar.

		/*printf("Ingrese un numero: ");
		scanf("%d",&lista[i]); //Le paso la direccion de memoria del vector en la posicion i.*/
	}

	//carga aleatoria
	do
	{
		printf("Ingrese un numero ");
		scanf("%d",&numero);

		printf("Ingrese la posicion dentro de la lista, sepa que de 1 a 5: ");
		scanf("%d", &posicion);
		lista[posicion-1] =  numero;

		printf("Desea seguir ingresando datos? s/n ");
		fflush(stdin);
		scanf("%c",&respuesta);
	}while(respuesta == 's');

	for(int i=0; i<5; i++)
	{
		if(lista[i] != -1)
		{
			acumulador = acumulador + lista[i];
		}
	}
	printf("El total acumulado es: %d\n", acumulador);

	printf("La lista de los numeros es: \n");
	for(int i=0; i<5 ; i++)
	{
		if(lista[i]!= -1)
		{
			printf("%d\n", lista[i]); // No hace falta el ampersa para mostrar numeros.
		}
	}

	return EXIT_SUCCESS;
}
