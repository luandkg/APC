/*
 ============================================================================
 ALGORITMO        	: AP1_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DESCRICAO 		: LISTA DE EXERCICIOS 01 - QUESTAO 04 -- Ansi-style
 LISTA			: 01
 QUESTAO		: 04
 ============================================================================
 */

#include <stdio.h>
#include <math.h>


int main(void) {

	printf("--------- EQUACAO DE SEGUNDO GRAU --------------\n");

	float a =0 , b =0 ,c =0;

	printf("Informe o numero A : ");

	scanf("%f",&a);

	printf("Informe o numero B : ");

	scanf("%f",&b);

	printf("Informe o numero C : ");

	scanf("%f",&c);

	float delta = (b*b) - (4 * (a*c));
	float raiz = sqrt(delta);


	float x1 =0 ,x2 =0 ;

	x1 =( ( (-1) * b ) + raiz)/ (2*a);
	x2 =( ( (-1) * b ) - raiz)/ (2*a);


	printf("X1 = %f\n", x1);
	printf("X2 = %f\n", x2);


	return 0;
}
