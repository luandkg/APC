/*
 ============================================================================
 ALGORITMO        	: AP1_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DESCRICAO 			: LISTA DE EXERCICIOS 01 - QUESTAO 01 -- Ansi-style
 LISTA				: 01
 QUESTAO			: 01
 ============================================================================
 */

#include <stdio.h>

int ATIVIDADE_01_01(void) {

	float a, b =0;

	printf("--------- TROCA DE VALORES --------------\n");

	printf("Informe o numero A : ");

	scanf("%f",&a);

	printf("Informe o numero B : ");

	scanf("%f",&b);


	float auxilador = 0 ;

	auxilador = a;

	a=b;
	b=auxilador;

	printf("Numero A = %f\n", a);
	printf("Numero B = %f\n", b);



	return 0;
}
