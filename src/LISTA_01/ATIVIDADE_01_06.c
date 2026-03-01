/*
 ============================================================================
 ALGORITMO        	: AP1_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DESCRICAO 			: LISTA DE EXERCICIOS 01 - QUESTAO 04 -- Ansi-style
 LISTA				: 01
 QUESTAO			: 06
 ============================================================================
 */

#include "ATIVIDADE_01_06.h"


int ATIVIDADE_01_06(void) {

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

	notafinal = calcular_media_ponderada(nota1,peso1,nota2,peso2,nota3,peso3);

	printf("------------------------------\n");

	printf("NOTA FINAL = %.2f\n", notafinal);


	return 0;
}

float calcular_media_ponderada(float nota1,int peso1,float nota2,int peso2,float nota3,int peso3){
	return ( (nota1*peso1) + (nota2*peso2) + (nota3*peso3)  ) / ( peso1 + peso2 + peso3 );
}

int ATIVIDADE_01_06_TESTE_CALCULA_NOTA_MEDIA_PONDERADA_TESTE_01(void) {

	float nota = calcular_media_ponderada(2,30,5,30,10,40);                       
	if((int)nota==6){
		return 0;
	}else{
		return 1;
	}
}

int ATIVIDADE_01_06_TESTE_CALCULA_NOTA_MEDIA_PONDERADA_TESTE_02(void) {
	float nota = calcular_media_ponderada(5,30,10,30,8,40);                       
	if((int)nota==7){
		return 0;
	}else{
		return 1;
	}
}

int ATIVIDADE_01_06_TESTE_CALCULA_NOTA_MEDIA_PONDERADA_TESTE_03(void) {
	float nota = calcular_media_ponderada(1,30,2,30,4,40);                       
	if((int)nota==2){
		return 0;
	}else{
		return 1;
	}
}