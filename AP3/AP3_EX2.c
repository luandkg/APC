/*  ============================================================================
 ALGORITMO        	: AP3_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA			: 03
 QUESTAO		: 02
 ============================================================================ */

#include <stdio.h>

int main () {

	int i =0 , somando = 0;

	printf("O SOMATORIO DE : ");
	
	for (i=1;i<=10;i++) {
	
		if (i==1) {printf(" %d ",i); }
		else {printf(" + %d ",i);}

		somando +=i;
	}

	printf(" eh : %d \n", somando);

	return 0;

}

