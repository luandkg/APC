/*
 ============================================================================
 ALGORITMO        	: AP1_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DESCRICAO 		: LISTA DE EXERCICIOS 01 - QUESTAO 04 -- Ansi-style
 LISTA			: 01
 QUESTAO		: 04
 ============================================================================
 */

#include "ATIVIDADE_01_04.h"


int ATIVIDADE_01_04(void) {

	printf("--------- EQUACAO DE SEGUNDO GRAU --------------\n");

	float a =0 , b =0 ,c =0;

	printf("Informe o numero A : ");

	scanf("%f",&a);

	printf("Informe o numero B : ");

	scanf("%f",&b);

	printf("Informe o numero C : ");

	scanf("%f",&c);


	float x1 =equacao_segundo_grau_x1(a,b,c); 
	float x2 =equacao_segundo_grau_x2(a,b,c);

	printf("X1 = %f\n", x1);
	printf("X2 = %f\n", x2);


	return 0;
}

float equacao_segundo_grau_x1(float a, float b, float c) {

	float delta = (b*b) - (4 * (a*c));
	float raiz = sqrt(delta);


	float x1 =0;

	x1 =( ( (-1) * b ) + raiz)/ (2*a);
	return x1;
}

float equacao_segundo_grau_x2(float a, float b, float c) {

	float delta = (b*b) - (4 * (a*c));
	float raiz = sqrt(delta);


	float x2 =0 ;

	x2 =( ( (-1) * b ) - raiz)/ (2*a);
	return x2;
}

int ATIVIDADE_01_04_TESTE_EQUACAO_SEGUNDO_GRAU_X1_TESTE_01() {

	
	float x1 = equacao_segundo_grau_x1(1,-5,6);
	                                   
		if(x1==3.000000){
		return 0;
	}else{
		return 1;
	}
	
}


int ATIVIDADE_01_04_TESTE_EQUACAO_SEGUNDO_GRAU_X2_TESTE_01() {

	
	float x2 = equacao_segundo_grau_x2(1,-5,6);
	                                   
		if(x2==2.000000){
		return 0;
	}else{
		return 1;
	}
	
}

int ATIVIDADE_01_04_TESTE_EQUACAO_SEGUNDO_GRAU_X1_TESTE_02() {

	
	float x1 = equacao_segundo_grau_x1(1,-7,12);
	                                   
		if(x1==4.000000){
		return 0;
	}else{
		return 1;
	}
	
}


int ATIVIDADE_01_04_TESTE_EQUACAO_SEGUNDO_GRAU_X2_TESTE_02() {

	
	float x2 = equacao_segundo_grau_x2(1,-7,12);
	                                   
		if(x2==3.000000){
		return 0;
	}else{
		return 1;
	}
	
}

int ATIVIDADE_01_04_TESTE_EQUACAO_SEGUNDO_GRAU_X1_TESTE_03() {

	
	float x1 = equacao_segundo_grau_x1(1,-9,20);
	                                   
		if(x1==5.000000){
		return 0;
	}else{
		return 1;
	}
	
}


int ATIVIDADE_01_04_TESTE_EQUACAO_SEGUNDO_GRAU_X2_TESTE_03() {

	
	float x2 = equacao_segundo_grau_x2(1,-9,20);
	                                   
		if(x2==4.000000){
		return 0;
	}else{
		return 1;
	}
	
}