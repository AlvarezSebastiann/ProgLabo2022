/*
 Alvarez Lopez Sebastian
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int i;
	int edad[10];
	float sueldo[10];
	float sumaSueldo;
	float promedio;

	sumaSueldo=0;

	for(i=0; i<10; i++)
	{

		printf("\ningrese su edad para la posicion %d",i);
		scanf("%d",&edad[i]);

		printf("\nIngrese su sueldo para la posicion %d",i);
		scanf("%f",&sueldo[i]);

		sumaSueldo = sumaSueldo + sueldo[i];
	}

	for(i=0; i<10; i++)
	{
		printf("\n la edad para la posicion %d es %d y su sueldo es: %f y el legajo es %d" ,i , edad[i], sueldo[i],i);
	}

	promedio = sumaSueldo/i;
	printf("\nEl sueldo promedio es: %f",promedio);



	return EXIT_SUCCESS;
}
