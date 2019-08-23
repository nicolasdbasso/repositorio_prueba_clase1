/*
 ============================================================================
 Name        : ejercicio1.c
 Author      : Misael
 Version     :
 Copyright   : GLP
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int prom = 0;
	int numero;
	int suma = 0;
	for (i = 0 ; i < 5; i++){
		printf("Indica el número: ");
		scanf("%d", &numero);
		suma = suma + numero;
	}

	prom = suma / 5;

	printf("El prom de la suma es: %d", prom);
	return 0;
}
