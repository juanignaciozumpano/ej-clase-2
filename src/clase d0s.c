/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



/*int num;

		fflush (stdin); //windows (#include<stdio.h>)
		__fpurge(stdin); // linux (#include<stdio_ext.t>)
		fpurge(stdin); // OSX (#include<stdio.h>)

		scanf(formato de lo que van a escribir, direccion)
		scanf("%d",&num); // num = lo que ingresaron

*/



int main(void) {
		setbuf(stdout,NULL);

		int acumulador=0;
		int numero;
		int contador=0;
		float promedio;

		while(1)
		{
			printf("Ingrese un numero");
			scanf("%d",&numero);

			 if(numero!=999){

				acumulador = acumulador + numero;
				contador++;

			 }else{
				 break;
			 }
		 }

		 promedio = (float) acumulador / contador;
		 printf("\n El promedio es: %.2f",promedio);

		 return 0;
	}
