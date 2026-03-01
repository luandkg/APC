/*
 ============================================================================
 ALGORITMO        	: AP2_EX5.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA				: 02
 QUESTAO			: 05
 ============================================================================
 */

#include "ATIVIDADE_02_05.h"


int ATIVIDADE_02_05 (void) {

	printf("	### PROBLEMA DO MEIO AMBIENTE ###		\n");

	float poluicao;

	printf("informe o indice de poluicao: ");
	scanf("%f",&poluicao);
	
	printf( "--------------------------------------------\n"); 

	if (poluicao <0.05) { 
		printf( "ABAIXO DO NORMAL\n");
	 }

	if (poluicao >=0.05 && poluicao<0.25) {
		 printf( "NORMAL\n");
	 }
	
	if (poluicao >=0.25 && poluicao<0.30) { 
		printf( "ALERTA\n");
	 }

	if (poluicao >=0.30 && poluicao<0.40) {
		 printf( "Indústrias da lista A: Suspensas\n");
	 }


	if (poluicao >=0.40 && poluicao<0.50) { 

		printf( "Indústrias da lista A: Suspensas\n"); 
		printf( "Indústrias da lista B: Suspensas\n"); 

	}


	if (poluicao >=0.50 ) { 

		printf( "Indústrias da lista A: Suspensas\n"); 
		printf( "Indústrias da lista B: Suspensas\n"); 
		printf( "Indústrias da lista C: Suspensas\n"); 

	}


	return(0);
}
