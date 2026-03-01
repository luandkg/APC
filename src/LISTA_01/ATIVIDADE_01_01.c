/*
 ============================================================================
 ALGORITMO        	: AP1_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DESCRICAO 			: LISTA DE EXERCICIOS 01 - QUESTAO 01 -- Ansi-style
 LISTA				: 01
 QUESTAO			: 01
 ============================================================================
 */

#include "ATIVIDADE_01_01.h"


int ATIVIDADE_01_01(void) {

	int a, b =0;

	printf("--------- TROCA DE VALORES --------------\n");

	printf("Informe o numero A : ");

	scanf("%d",&a);

	printf("Informe o numero B : ");

	scanf("%d",&b);

	trocar_valor(&a,&b);

	printf("Numero A = %d\n", a);
	printf("Numero B = %d\n", b);


	return 0;
}

void trocar_valor(int *a,int *b){

	int auxilador = 0 ;

	auxilador = *a;

	*a=*b;
	*b=auxilador;

}

int ATIVIDADE_01_01_TESTE_01_TROCAR_VALOR_TESTE_01() {

	int a = 5;
	int b = 10;

	trocar_valor(&a,&b);

	if(a==10 && b==5){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
	
}

int ATIVIDADE_01_01_TESTE_01_TROCAR_VALOR_TESTE_02() {

	int a = 100;
	int b = 3;

	trocar_valor(&a,&b);
		
	if(a==3 && b==100){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
	
}

int ATIVIDADE_01_01_TESTE_01_TROCAR_VALOR_TESTE_03() {

	int a = 50;
	int b = 10;

	trocar_valor(&a,&b);
		
	if(a==10 && b==50){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
	
}