/*
 ============================================================================
 ALGORITMO        	: AP2_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA			: 02
 QUESTAO		: 01
 ============================================================================
 */

#include <stdio.h>

int main () {

	printf("--------- TROCA DE VALORES --------------\n");

	int a, b;
	printf("Informe o 1º valor: ");
	scanf("%d",&a);
	printf("Informe o 2º valor: ");
	scanf("%d",&b);
	if  (a==b) {
		printf ("Numeros iguais = %d\n",a);
	}
	else {
		printf("Numeros diferentes : %d e %d\n", a,b);
	}

	return(0);
}
