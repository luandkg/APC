/*
 ============================================================================
 ALGORITMO        	: AP1_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DESCRICAO 			: LISTA DE EXERCICIOS 01 - QUESTAO 02 -- Ansi-style
 LISTA				: 01
 QUESTAO			: 02
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	float a, b =0;

	printf("--------- MEDIA ARITMETICA --------------\n");

	printf("Informe o numero A : ");

	scanf("%f",&a);

	printf("Informe o numero B : ");

	scanf("%f",&b);


	float media = (a + b ) / 2;


	printf("A Media eh = %f\n", media);



	return 0;
}
