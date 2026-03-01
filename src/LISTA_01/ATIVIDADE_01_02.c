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

#include "ATIVIDADE_01_02.h"


int ATIVIDADE_01_02(void) {

	float a, b =0;

	printf("--------- MEDIA ARITMETICA --------------\n");

	printf("Informe o numero A : ");

	scanf("%f",&a);

	printf("Informe o numero B : ");

	scanf("%f",&b);

	float media = calcular_media(a,b);

	printf("A Media eh = %f\n", media);



	return 0;
}

float calcular_media(float a, float b){
	float media = (a + b ) / 2;
	return media;
}

int ATIVIDADE_01_02_TESTE_CALCULAR_MEDIA_01(void) {

	
	float a = 10.0;
	float b = 5.0;

	float media = calcular_media(a,b);

	if(media==7.5){
		return 0;
	}else{
		return 1;
	}
	
}


int ATIVIDADE_01_02_TESTE_CALCULAR_MEDIA_02(void) {

	
	float a = 8;
	float b = 6;

	float media = calcular_media(a,b);

	if(media==7.0){
		return 0;
	}else{
		return 1;
	}
	
}

int ATIVIDADE_01_02_TESTE_CALCULAR_MEDIA_03(void) {

	
	float a = 6.3;
	float b = 4.2;

	float media = calcular_media(a,b);

	if(media==5.25){
		return 0;
	}else{
		return 1;
	}
	
}