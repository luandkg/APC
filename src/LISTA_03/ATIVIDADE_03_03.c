/*  ============================================================================
 ALGORITMO        	: AP3_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA			: 03
 QUESTAO		: 03
 ============================================================================ */

#include <stdio.h>

int main () {

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

