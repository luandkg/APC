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

	int poluicao_classificada = poluicao_classificao(poluicao);


	if (poluicao_classificada == ABAIXO_DO_NORMAL) { 
		printf( "ABAIXO DO NORMAL\n");
	 }else if (poluicao_classificada == NORMAL) {
		 printf( "NORMAL\n");
	 }else if (poluicao_classificada == ALERTA) { 
		printf( "ALERTA\n");
	 }else if (poluicao_classificada == ALERTA_1) {
		 printf( "Indústrias da lista A: Suspensas\n");
	 }else if (poluicao_classificada == ALERTA_2) { 
		printf( "Indústrias da lista A: Suspensas\n"); 
		printf( "Indústrias da lista B: Suspensas\n"); 
	}else if (poluicao_classificada == ALERTA_3 ) { 
		printf( "Indústrias da lista A: Suspensas\n"); 
		printf( "Indústrias da lista B: Suspensas\n"); 
		printf( "Indústrias da lista C: Suspensas\n"); 
	}


	return 0;
}

int poluicao_classificao(float poluicao){

	int classificao = ABAIXO_DO_NORMAL;

	if (poluicao <0.05) { 
		classificao = ABAIXO_DO_NORMAL;	
	 }else if (poluicao >=0.05 && poluicao<0.25) {
		classificao = NORMAL;	
	 }else if (poluicao >=0.25 && poluicao<0.30) { 
		classificao = ALERTA;	
	 }else if (poluicao >=0.30 && poluicao<0.40) {
		classificao = ALERTA_1;	
	 }else if (poluicao >=0.40 && poluicao<0.50) { 
		classificao = ALERTA_2;	
	}else if (poluicao >=0.50 ) { 
		classificao = ALERTA_3;	
	}

	return classificao;
}

int ATIVIDADE_02_05_TESTE_POLUICAO_TESTE_1(void){

	if(poluicao_classificao(0.02) == ABAIXO_DO_NORMAL){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}

int ATIVIDADE_02_05_TESTE_POLUICAO_TESTE_2(void){

	if(poluicao_classificao(0.20) == NORMAL){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}

int ATIVIDADE_02_05_TESTE_POLUICAO_TESTE_3(void){

	if(poluicao_classificao(0.27) == ALERTA){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}

int ATIVIDADE_02_05_TESTE_POLUICAO_TESTE_4(void){

	if(poluicao_classificao(0.32) == ALERTA_1){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}

int ATIVIDADE_02_05_TESTE_POLUICAO_TESTE_5(void){

	if(poluicao_classificao(0.45) == ALERTA_2){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}

int ATIVIDADE_02_05_TESTE_POLUICAO_TESTE_6(void){

	if(poluicao_classificao(0.55) == ALERTA_3){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}