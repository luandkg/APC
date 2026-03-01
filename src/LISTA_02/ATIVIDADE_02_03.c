

/*
 ============================================================================
 ALGORITMO        	: AP2_EX3.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA				: 02
 QUESTAO			: 03
 ============================================================================
 */

#include "ATIVIDADE_02_03.h"


int ATIVIDADE_02_03 (void) {

	printf("	### EQUACAO DE SEGUNDO GRAU ###		\n");

	float a, b,c ;
	printf("Informe A: ");
	scanf("%f",&a);
	
	printf("Informe B: ");
	scanf("%f",&b);

	printf("Informe C: ");
	scanf("%f",&c);

	float delta = equacao_segundo_grau_delta(a,b,c);

	printf("Delta : %.2f\n", delta);

	if (delta > 0 ){

		float x1 = equacao_segundo_grau_raiz_1(a,b,delta);
		float x2 = equacao_segundo_grau_raiz_2(a,b,delta);

		printf("Raiz X1 : %.2f\n", x1);
		printf("Raiz X2 : %.2f\n", x2);

	} else {
		printf ("Equação sem raizes - Discriminante menor do que zero !!!\n");
	}

	
	return 0;
}

float equacao_segundo_grau_delta(float a,float b,float c){
	return (b*b) - (4*(a*c));
}

float equacao_segundo_grau_raiz_1(float a,float b,float delta){
	return ((-1)*b + sqrt(delta)) / (2 * a);
}

float equacao_segundo_grau_raiz_2(float a,float b,float delta){
	return ((-1)*b - sqrt(delta)) / (2 * a);;
}

int ATIVIDADE_02_03_TESTE_DELTA_TESTE_1(void){

	if((int)equacao_segundo_grau_delta(1,2,2) == -4){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_03_TESTE_DELTA_TESTE_2(void){

	if((int)equacao_segundo_grau_delta(1,-5,6) == 1){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_03_TESTE_DELTA_TESTE_3(void){

	if((int)equacao_segundo_grau_delta(1,-8,15) == 4){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_03_TESTE_RAIZ_1_TESTE_1(void){

	if((int)equacao_segundo_grau_raiz_1(1,-8,15) == 5){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_03_TESTE_RAIZ_1_TESTE_2(void){

	if((int)equacao_segundo_grau_raiz_1(1,-9,20) == 6){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_03_TESTE_RAIZ_1_TESTE_3(void){

	if((int)equacao_segundo_grau_raiz_1(1,-11,30) == 8){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_03_TESTE_RAIZ_2_TESTE_1(void){

	if((int)equacao_segundo_grau_raiz_2(1,-8,15) == 2){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_03_TESTE_RAIZ_2_TESTE_2(void){

	if((int)equacao_segundo_grau_raiz_2(1,-9,20) == 2){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_03_TESTE_RAIZ_2_TESTE_3(void){

	if((int)equacao_segundo_grau_raiz_2(1,-11,30) == 2){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}