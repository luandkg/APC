
/*
 ============================================================================
 ALGORITMO        	: AP2_EX2.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA			: 02
 QUESTAO		: 02
 ============================================================================
 */


#include <stdio.h>

int main () {

	printf("--------- MAIOR VALOR --------------\n");

	int a, b;
	printf("Informe o 1º valor : ");
	scanf("%d",&a);
	printf("Informe o 2º valor : ");
	scanf("%d",&b);
	if  (a==b) {
		printf ("numeros iguais : %d\n",a);
	}
	else {
		
		if (a>b) { 
			printf("Maior Numero : %d\n", a); 
		} else {
			printf("Maior Numero : %d\n", b); 
		}
		
	}

	return(0);
}
