/*  ============================================================================
 ALGORITMO        	: AP3_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA			: 03
 QUESTAO		: 01
 ============================================================================ */

#include <stdio.h>

/* Descricao: programa para imprimir os numeros de 1 a 10. Entrada: nao tem. Saida: 1,2,3,...,10  */

int main () {

	int i;
	printf("Os numeros de 1 a 10 sao: ");
	
	for (i=1;i<=10;i++) {
		printf("\n %d ",i);
		getchar();
	}

	

	return 0;

}

