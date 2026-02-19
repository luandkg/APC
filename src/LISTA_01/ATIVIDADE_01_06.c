/*
 ============================================================================
 ALGORITMO        	: AP1_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DESCRICAO 		: LISTA DE EXERCICIOS 01 - QUESTAO 04 -- Ansi-style
 LISTA			: 01
 QUESTAO		: 06
 ============================================================================
 */

#include <stdio.h>
#include <math.h>


int main(void) {

	printf("--------- NOTAS --------------\n");

	float nota1 =0, nota2 =0, nota3=0;
	int peso1=0,peso2=0,peso3=0;

	float notafinal =0;


	printf("------------------------------\n");
	printf("Informe a NOTA 1 : ");

	scanf("%f",&nota1);

	printf("Informe o PESO 1 : ");

	scanf("%d",&peso1);


	printf("------------------------------\n");
	printf("Informe a NOTA 2 : ");

	scanf("%f",&nota2);

	printf("Informe o PESO 2 : ");

	scanf("%d",&peso2);


	printf("------------------------------\n");
	printf("Informe a NOTA 3 : ");

	scanf("%f",&nota3);

	printf("Informe o PESO 3 : ");

	scanf("%d",&peso3);


	notafinal = ( (nota1*peso1) + (nota2*peso2) + (nota3*peso3)  ) / ( peso1 + peso2 + peso3 );


		printf("------------------------------\n");

	printf("NOTA FINAL = %.2f\n", notafinal);


	return 0;
}
