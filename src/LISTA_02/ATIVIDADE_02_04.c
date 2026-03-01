/*
 ============================================================================
 ALGORITMO        	: AP2_EX4.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA				: 02
 QUESTAO			: 04
 ============================================================================
 */

#include "ATIVIDADE_02_04.h"


int ATIVIDADE_02_04 (void) {

	printf("	### PROBLEMA DO ESPACO ###		\n");

	float origem_x,origem_y,altura,largura,ponto_x,ponto_y;

	printf("------- PONTO DE ORIGEM ------\n");
	printf("Informe X: ");
	scanf("%f",&origem_x);
	
	printf("Informe Y: ");
	scanf("%f",&origem_y);

	printf("------- RETANGULO ------\n");
	printf("Informe ALTURA: ");
	scanf("%f",&altura);

	printf("Informe LARGURA: ");
	scanf("%f",&largura);

	
	printf("------- SEGUNDO PONTO ------\n");
	printf("Informe X: ");
	scanf("%f",&ponto_x);
	
	printf("Informe Y: ");
	scanf("%f",&ponto_y);



	int resposta = espaco_quadrado_ponto_dentro(origem_x,origem_y,altura,largura,ponto_x,ponto_y);	
	
	if (resposta == RESPOSTA_XY_DENTRO) {
		printf("Ponto(X,Y) - DENTRO DO RETANGULO !!!\n");
	} else if (resposta == RESPOSTA_Y_NA_LINHA) {
		printf("Ponto(Y) - NA LINHA DO RETANGULO !!!\n");
	} else if (resposta == RESPOSTA_Y_FORA) {
		printf("Ponto(Y)  - FORA DO RETANGULO !!!\n");
	} else if (resposta == RESPOSTA_X_NA_LINHA) {
		printf("Ponto(X) - NA LINHA DO RETANGULO !!!\n");
	} else if (resposta == RESPOSTA_X_FORA) {
		printf("Ponto(X) - NA LINHA DO RETANGULO !!!\n");
	}
	

	return 0;
}



int espaco_quadrado_ponto_dentro(float origem_x,float origem_y,
                                 float altura,float largura,
                                 float ponto_x,float ponto_y) {

    if (ponto_x > origem_x && ponto_x < origem_x + largura &&
        ponto_y > origem_y && ponto_y < origem_y + altura) {
        return RESPOSTA_XY_DENTRO;
    }

    if ((ponto_x == origem_x) || ponto_x == (origem_x + largura)) {
        return RESPOSTA_X_NA_LINHA;
    }

    if ((ponto_y == origem_y) || ponto_y == (origem_y + altura)) {
        return RESPOSTA_Y_NA_LINHA;
    }

    if ((ponto_x < origem_x) || ponto_x > (origem_x + largura)) {
        return RESPOSTA_X_FORA;
    }

    if ((ponto_y < origem_y) || ponto_y > (origem_y + altura)) {
        return RESPOSTA_Y_FORA;
    }

    return RESPOSTA_X_FORA; 
}

int ATIVIDADE_02_04_TESTE_DENTRO_TESTE_1(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,5,5) == RESPOSTA_XY_DENTRO){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_DENTRO_TESTE_2(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,2,3) == RESPOSTA_XY_DENTRO){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_DENTRO_TESTE_3(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,7,8) == RESPOSTA_XY_DENTRO){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_X_FORA_TESTE_1(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,15,5) == RESPOSTA_X_FORA){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_X_FORA_TESTE_2(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,20,3) == RESPOSTA_X_FORA){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_X_FORA_TESTE_3(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,70,8) == RESPOSTA_X_FORA){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_Y_FORA_TESTE_1(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,5,50) == RESPOSTA_Y_FORA){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_Y_FORA_TESTE_2(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,5,30) == RESPOSTA_Y_FORA){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_Y_FORA_TESTE_3(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,5,80) == RESPOSTA_Y_FORA){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_X_LINHA_TESTE_1(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,10,3) == RESPOSTA_X_NA_LINHA){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_X_LINHA_TESTE_2(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,10,5) == RESPOSTA_X_NA_LINHA){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_X_LINHA_TESTE_3(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,10,8) == RESPOSTA_X_NA_LINHA){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_Y_LINHA_TESTE_1(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,3,10) == RESPOSTA_Y_NA_LINHA){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_Y_LINHA_TESTE_2(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,5,10) == RESPOSTA_Y_NA_LINHA){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_04_TESTE_Y_LINHA_TESTE_3(void){

	if(espaco_quadrado_ponto_dentro(0,0,10,10,8,10) == RESPOSTA_Y_NA_LINHA){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}