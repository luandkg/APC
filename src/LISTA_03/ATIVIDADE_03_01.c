/*  ============================================================================
 ALGORITMO        	: AP3_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DISCIPLINA			: APC - Algoritmos de Programacao de Computadores
 LISTA				: 03
 QUESTAO			: 01
 ============================================================================ */

#include "ATIVIDADE_03_01.h"

/* Descricao: programa para imprimir os numeros de 1 a 10. Entrada: nao tem. Saida: 1,2,3,...,10  */

int ATIVIDADE_03_01 (void) {

	int i;
	printf("Os numeros de 1 a 10 sao : \n");
	
	for (i=1;i<=10;i++) {
		printf("%d\n",i);
		//getchar();
	}

	return 0;

}

int contagem(int inicio,int fim){

	int contado = 0;

	for (int i=inicio;i<=fim;i++) {
		contado+=1;
	}

	return contado;
}

int ATIVIDADE_03_01_TESTE_CONTAGEM_TESTE_1(void){

	if(contagem(1,10) == 10){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_03_01_TESTE_CONTAGEM_TESTE_2(void){

	if(contagem(21,40) == 20){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_03_01_TESTE_CONTAGEM_TESTE_3(void){

	if(contagem(1,50) == 50){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}