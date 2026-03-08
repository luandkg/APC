/*  ============================================================================
 ALGORITMO        	: AP3_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DISCIPLINA			: APC - Algoritmos de Programacao de Computadores
 LISTA				: 03
 QUESTAO			: 03
 ============================================================================ */

#include "ATIVIDADE_03_03.h"

int ATIVIDADE_03_03 (void) {

	int i = 0 , qtd_pessoas = 0;
	int idade = 0;
	float idade_media = 0.0;

	printf("	### MEDIA DE IDADES ###		 \n");
	
	printf("\nInforme a quantidade de pessoas : ");
	scanf("%d",&qtd_pessoas);

	printf("\n");

	for (i=1;i<=qtd_pessoas;i++) {
	
		printf("Pessoa %d - Idade : ",i);
		scanf("%d",&idade);

		idade_media +=idade;
	}

	printf("\n - Idade media : %0.2f \n", (idade_media/qtd_pessoas));

	return 0;

}

int ATIVIDADE_03_03_TESTE_MEDIA_DE_IDADES_TESTE_1(void){

	float idade_somatorio = 10+15;
	float idade_media = idade_somatorio/2;

	if(idade_media==12.500000){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_03_03_TESTE_MEDIA_DE_IDADES_TESTE_2(void){

	float idade_somatorio = 10+15+32;
	float idade_media = idade_somatorio/3;

	if(idade_media==19.000000){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_03_03_TESTE_MEDIA_DE_IDADES_TESTE_3(void){

	float idade_somatorio = 10+15+30+62;
	float idade_media = idade_somatorio/4;

	if(idade_media==29.250000){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}