/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
	setbuf(stdout, NULL);

	char nombre[15];
	char apellido[15];
	char nombreCompleto[30];
	int i;

	for(i=0; i<30;i++)
	{
		nombreCompleto[i]= '';
	}

	printf("\nIngrese el nombre ");
	fflush(stdin);
	gets(nombre);

	printf("\nIngrese el apellido ");
	fflush(stdin);
	gets(apellido);
	//formarApellidoNombre(nombre,apellido,nombreCompleto);
	strcpy(nombreCompleto,apellido);
	strcat(nombreCompleto,", ");
	strcat(nombreCompleto,nombre);

	printf("El nombre completo es: %s ",nombreCompleto);

	return EXIT_SUCCESS;
}

void formarApellidoNombre(char* nombre, char* apellido, char* nombreCompleto)
{
	if(nombre!=NULL && apellido!=NULL && nombreCompleto)
	{
		strcpy(nombreCompleto,apellido);
		strcat(nombreCompleto,", ");
		strcat(nombreCompleto,nombre);
	}
}
