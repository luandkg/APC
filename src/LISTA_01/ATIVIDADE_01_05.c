/*
 ============================================================================
 ALGORITMO        	: AP1_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DESCRICAO 			: LISTA DE EXERCICIOS 01 - QUESTAO 04 -- Ansi-style
 LISTA				: 01
 QUESTAO			: 05
 ============================================================================
 */

#include <stdio.h>
#include <math.h>


int ATIVIDADE_01_05(void) {

	printf("--------- HIPOTENUSA --------------\n");

	float a =0 , b =0 , hipotenusa =0 ;

	printf("Informe o CATETO A : ");

	scanf("%f",&a);

	printf("Informe o CATETO B : ");

	scanf("%f",&b);


	hipotenusa = sqrt((a*a)+(b*b));


	printf("Hipotenusa = %.2f\n", hipotenusa);


	return 0;
}
