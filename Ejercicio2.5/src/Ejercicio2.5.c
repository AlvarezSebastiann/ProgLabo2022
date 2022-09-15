/*
Alvarez Lopez Sebastian
 */

#include <stdio.h>
#include <stdlib.h>
//#define libreta 450

int main(void) {
	setbuf(stdout, NULL);

	int numeroLegajo;
	char estadoCivil;
	int edad;
	int anioIngreso;
	char genero;
	int precioLibreta;
	int contadorMayores;
	char respuesta;
	int legajoMujerMasTiempo;
	int edadMujerMasTiempo;
	int anioIngresoViejo;
	int banderaMujerTiempo;
	int contadorGeneral;
	int totalSinDescuento;
	int totalConDescuento;
	int acumuladorLibretaMayores;
	int contadorMenoresDe60;
	int totalDescuentoMayores;

	precioLibreta = 450;
	contadorMayores = 0;
	legajoMujerMasTiempo = 0;
	edadMujerMasTiempo = 0;
	anioIngresoViejo = 0;
	banderaMujerTiempo = 0;
	contadorGeneral = 0;
	acumuladorLibretaMayores = 0;
	contadorMenoresDe60 = 0;

	do{

		do {
		printf("Ingrese su numero de legajo ");
		scanf("%d", &numeroLegajo);
		}while(numeroLegajo < 1000 || numeroLegajo > 9999);

		do{
			printf("Ingrese su estado civil: 's' para soltero, 'c' para casado y 'v' para viudo ");
			fflush(stdin);
			scanf("%c",&estadoCivil);
		}while(estadoCivil != 's' && estadoCivil != 'v' && estadoCivil != 'c');

		do{
			printf("Ingrese su edad ");
			scanf("%d",&edad);
		}while(edad<17 || edad > 75);

		do{
			printf("Ingrese su anio de ingreso ");
			scanf("%d",&anioIngreso);
		}while(anioIngreso < 1950 || anioIngreso > 2022);

		do{
			printf("Ingrese su genero sepa: 'f' femenino, 'm' para masculino y 'o' para no binario ");
			fflush(stdin);
			scanf("%c",&genero);
		}while(genero != 'f' && genero != 'm' && genero != 'o');



		if (edad>60){
			contadorMayores++;
			acumuladorLibretaMayores = acumuladorLibretaMayores + precioLibreta;
		}else {
			contadorMenoresDe60++;
		}

		if(genero == 'f'){
			if (banderaMujerTiempo == 0){
				legajoMujerMasTiempo = numeroLegajo;
				edadMujerMasTiempo = edad;
				anioIngresoViejo = anioIngreso;
				banderaMujerTiempo = 1;
			}else {
				if(anioIngreso < anioIngresoViejo){
					legajoMujerMasTiempo = numeroLegajo;
					edadMujerMasTiempo = edad;
					anioIngresoViejo = anioIngreso;
				}
			}
		}

		contadorGeneral++;

		printf("Desea seguir ingresando datos? s/n\n ");
		fflush(stdin);
		scanf("%c",&respuesta);
	}while(respuesta == 's');

		fflush(stdin);




	printf("La cantidad de personas mayores a 60 es de: %d\n",contadorMayores);
	printf("El legajo y la edad de la mujer que ingreso hace mas tiempo es respectivamente: %d , %d\n", legajoMujerMasTiempo , edadMujerMasTiempo);

		if(contadorGeneral>10){
			totalConDescuento = contadorGeneral * precioLibreta * 0.90;
			printf("El total con descuento es de: %d\n", totalConDescuento);
			if(edad>60){
				totalDescuentoMayores = contadorMayores * precioLibreta * 0.75;
				printf("Como hubo %d adultos, ellos pagan: %d\n" ,contadorMayores , totalDescuentoMayores);
			}
		}else {
			if(contadorGeneral > 5){
				totalConDescuento = contadorGeneral * precioLibreta * 0.95;
				printf("El total con descuento es de: %d\n", totalConDescuento);
				if(edad>60){
					totalDescuentoMayores = contadorMayores * precioLibreta * 0.75;
					printf("Como hubo %d adultos, ellos pagan: %d\n" ,contadorMayores , totalDescuentoMayores);
				}
			}else {
				if(contadorGeneral>0){
					totalSinDescuento = contadorGeneral * precioLibreta;
					printf("La facultad debe abonar por libreta: %d\n", totalSinDescuento);
					if(edad>60){
						totalDescuentoMayores = contadorMayores * precioLibreta * 0.75;
						printf("Como hubo %d adultos, ellos pagan: %d\n" ,contadorMayores , totalDescuentoMayores);
					}
				}
			}
		}

	return 0;
}
