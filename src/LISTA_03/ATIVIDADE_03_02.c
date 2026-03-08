/*  ============================================================================
 ALGORITMO        	: AP3_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DISCIPLINA			: APC - Algoritmos de Programacao de Computadores
 LISTA				: 03
 QUESTAO			: 02
 ============================================================================ */

#include "ATIVIDADE_03_02.h"

int ATIVIDADE_03_02 (void) {

	int i =0 , somando = 0;

	printf("O SOMATORIO DE : ");
	
	for (i=1;i<=10;i++) {
	
		if (i==1) {
			printf(" %d ",i); 
		}
		else {
			printf(" + %d ",i);
		}

		somando +=i;
	}

	printf(" eh : %d \n", somando);

	return 0;

}

int somatorio(int inicio,int fim){
	int somatorio = 0;
	for(int i=inicio;i<=fim;i++){
		somatorio+=i;
	}
	return somatorio;
}

int ATIVIDADE_03_02_TESTE_SOMATORIO_TESTE_1(void){

	if(somatorio(1,10) == 55){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_03_02_TESTE_SOMATORIO_TESTE_2(void){

	if(somatorio(5,30) == 455){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_03_02_TESTE_SOMATORIO_TESTE_3(void){

	if(somatorio(50,90) == 2870){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}