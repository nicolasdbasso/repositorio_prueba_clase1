/*
 * sourcePrueba.cpp
 *
 *  Created on: 21 ago. 2019
 *      Author: alumno
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cifrUno;
	int cifrDos;
	int resCifr;

	scanf("Ingrese el primer numero: %d",cifrUno);
	scanf("Ingrese el segundo numero: %d",cifrDos);
	resCifr = cifrUno + cifrDos;

	printf("El primer numero es: %d y el segundo numero es: %d , dando como resultado: %d",cifrUno,cifrDos,resCifr);
	return 0;
}




