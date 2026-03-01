/*
 ============================================================================
 ALGORITMO        	: AP2_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA				: 02
 QUESTAO			: 01
 ============================================================================
 */

#include "ATIVIDADE_02_01.h"
#include "../TESTE/TESTE.h"

int ATIVIDADE_02_01 (void) {

	printf("--------- NÚMERO - IGUALDADE --------------\n");

	int a, b;
	printf("Informe o 1º valor: ");
	scanf("%d",&a);
	printf("Informe o 2º valor: ");
	scanf("%d",&b);
	if  (inteiro_igual(a,b)) {
		printf ("Numeros iguais = %d\n",a);
	}
	else {
		printf("Numeros diferentes : %d e %d\n", a,b);
	}

	return(0);
}

int inteiro_igual(int a,int b){
	return a==b;
}

int ATIVIDADE_02_01_TESTE_IGUALDADE_TESTE_1(){

	if(inteiro_igual(3,3)){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_01_TESTE_IGUALDADE_TESTE_2(){

	if(!inteiro_igual(3,4)){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}

int ATIVIDADE_02_01_TESTE_IGUALDADE_TESTE_3(){
	if(inteiro_igual(100,100)){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}
