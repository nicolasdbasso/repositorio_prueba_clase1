/*
 ============================================================================
 Name        : Clase.c
 Author      : Misael
 Version     :
 Copyright   : GLP
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int pideSuma(int *res);

int main(void)
{
	int res;
	if (pideSuma(&res) == 0){
		printf("El resultado es: %d",res);
	}else{
		printf("ERROR");
	}
	return 0;
}

int pideSuma(int *res)
{
		int uno;
		int dos;
		printf("Ingrese el primer digito");
		scanf("%d",&uno);
		printf("Ingrese el segu");
		scanf("%d",&dos);
		*res= uno+dos;
		return 0;
}
