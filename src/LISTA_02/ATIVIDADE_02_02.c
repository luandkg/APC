
/*
 ============================================================================
 ALGORITMO        	: AP2_EX2.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA				: 02
 QUESTAO			: 02
 ============================================================================
 */


#include "ATIVIDADE_02_02.h"

int ATIVIDADE_02_02 (void) {

	printf("--------- MAIOR VALOR --------------\n");

	int a, b;
	printf("Informe o 1º valor : ");
	scanf("%d",&a);
	printf("Informe o 2º valor : ");
	scanf("%d",&b);
	if  (inteiro_igual(a,b)) {
		printf ("numeros iguais : %d\n",a);
	}
	else {
		
		if (inteiro_maior(a,b)) { 
			printf("Maior Numero : %d\n", a); 
		} else {
			printf("Maior Numero : %d\n", b); 
		}
		
	}

	return(0);
}




int inteiro_maior(int a,int b){
	return a>b;
}


int ATIVIDADE_02_02_TESTE_MAIOR_TESTE_1(void){

	if(inteiro_maior(5,3)){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}

}

int ATIVIDADE_02_02_TESTE_MAIOR_TESTE_2(void){

	if(!inteiro_maior(1,4)){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}

int ATIVIDADE_02_02_TESTE_MAIOR_TESTE_3(void){
	if(inteiro_maior(200,100)){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}