/*
 Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar
-Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	char respuesta;
	int banderaA;
	int banderaB;

	banderaA = 0;
	banderaB = 0;

	do{


		printf( "\n1 para iniciar\n"
				"\n2 para procesar\n"
				"\n3 para finalizar\n"
				"\n4 para salir\n"
				"\nIngrese una opcion\n");

		scanf("%d",&opcion);

		switch(opcion)
		{
		case 1:
			printf("Iniciando");
			banderaA = 1;
			break;
		case 2:
			if (banderaA == 0){
				printf("Debe Iniciar antes de procesar");
			}else {
				printf("proceso exitoso");
				banderaB = 1;
			}
			break;
		case 3:
			if(banderaA == 0){
				printf("Debe iniciar antes de finalizar");
			}else {
				if(banderaB == 0){
				printf("Debes procesar antes de finalizar");
			}else {
				printf("Finalizacion exitosa");
				banderaA=1;
				banderaB=1;
				}
			}
			break;
		case 4:
			printf("Esta seguro que desea salir? s/n");
			fflush(stdin);
			scanf("%c",&respuesta);
			break;
		}

	}while(respuesta != 's');


	return EXIT_SUCCESS;
}

// Hacerlo devuelta;
