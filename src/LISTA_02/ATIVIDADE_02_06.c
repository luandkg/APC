/*  ============================================================================
 ALGORITMO        	: AP2_EX6.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA				: 02
 QUESTAO			: 06
 ============================================================================ */

#include "ATIVIDADE_02_06.h"


int ATIVIDADE_02_06 (void) {

	printf("\n	### PROBLEMA DO TRIANGULO ###		\n\n");

	float a,b,c;

	printf("Informe o lado A do triangulo : ");
	scanf("%f",&a);
	
	printf("Informe o lado B do triangulo : ");
	scanf("%f",&b);

	printf("Informe o lado C do triangulo : ");
	scanf("%f",&c);

	printf( "\n--------------------------------------------\n"); 

	int triangulo = triangulo_analisar(a,b,c);	

	if(triangulo == TRIANGULO_ERRO_LADO_A){
 		printf ( "Nao eh TRIANGULO - LADO A maior que B + C !!!\n") ;
	}else if(triangulo == TRIANGULO_ERRO_LADO_B){
		printf ( "Nao eh TRIANGULO - LADO B maior que A + C !!!\n") ;
	}else if(triangulo == TRIANGULO_ERRO_LADO_C){
		printf ( "Nao eh TRIANGULO - LADO C maior que A + B !!!\n") ;
	}else if(triangulo == TRIANGULO_VALIDO_COMUM){
		printf ( "Eh TRIANGULO !!!\n");
		printf ( " - Não Eh TRIANGULO RETANGULO !!!\n");
	}else if(triangulo == TRIANGULO_VALIDO_RETANGULO){
		printf ( "Eh TRIANGULO !!!\n");
		printf ( " - Eh TRIANGULO RETANGULO !!!\n");
	}

	
	return 0;
}



int triangulo_analisar(float a,float b,float c){

	int analise = TRIANGULO_ERRO_LADO_A;

		if (b + c > a) {

		if ( a + c > b) {
		
			if ( a + b > c) {
			
				analise = TRIANGULO_VALIDO_COMUM;


				float maior = 0;
				float lado1 = 0;
				float lado2 = 0;


				 if (a > b ) {
					if ( a > c ) {
						maior = a;
						lado1 = b;
						lado2 = c;
					}else {
						maior = c;
						lado1 = a;
						lado2 = b;
					}
				}else {

					if ( b > c ) {
						maior = b;
						lado1 = a;
						lado2 = c;
					}else {
						maior = c;
						lado1 = a;
						lado2 = b;
					}

				}

				if ( (maior*maior)  == ( lado1*lado1 ) + (lado2*lado2) ) {  
					analise = TRIANGULO_VALIDO_RETANGULO;
				}


			}
			else { 
				analise = TRIANGULO_ERRO_LADO_C;
			}


		}
		else { 
			analise = TRIANGULO_ERRO_LADO_B;
		}
	}
	else { 
		analise = TRIANGULO_ERRO_LADO_A;
	}

	return analise;
}

int ATIVIDADE_02_06_TESTE_TRIANGULO_TESTE_1(void){

	if(triangulo_analisar(6,1,1) == TRIANGULO_ERRO_LADO_A){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}

int ATIVIDADE_02_06_TESTE_TRIANGULO_TESTE_2(void){

	if(triangulo_analisar(1,6,1) == TRIANGULO_ERRO_LADO_B){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}

int ATIVIDADE_02_06_TESTE_TRIANGULO_TESTE_3(void){

	if(triangulo_analisar(1,1,6) == TRIANGULO_ERRO_LADO_C){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}

int ATIVIDADE_02_06_TESTE_TRIANGULO_TESTE_4(void){

	if(triangulo_analisar(5,6,7) == TRIANGULO_VALIDO_COMUM){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}

int ATIVIDADE_02_06_TESTE_TRIANGULO_TESTE_5(void){

	if(triangulo_analisar(3,4,5) == TRIANGULO_VALIDO_RETANGULO){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
}