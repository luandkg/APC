/*
 ============================================================================
 ALGORITMO        	: AP1_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DESCRICAO 			: LISTA DE EXERCICIOS 01 - QUESTAO 04 -- Ansi-style
 LISTA				: 01
 QUESTAO			: 05
 ============================================================================
 */

#include "ATIVIDADE_01_05.h"


int ATIVIDADE_01_05(void) {

	printf("--------- HIPOTENUSA --------------\n");

	float a =0 , b =0 , hipotenusa =0 ;

	printf("Informe o CATETO A : ");

	scanf("%f",&a);

	printf("Informe o CATETO B : ");

	scanf("%f",&b);

	hipotenusa = calcular_hipotenusa(a,b);

	printf("Hipotenusa = %.2f\n", hipotenusa);


	return 0;
}

float calcular_hipotenusa(float a, float b){

	return sqrt((a*a)+(b*b));

}

int ATIVIDADE_01_05_TESTE_CALCULA_HIPOTENUSA_TESTE_01(void) {

	float hipotenusa = calcular_hipotenusa(2,5);                       
	if((int)hipotenusa==5){
		return 0;
	}else{
		return 1;
	}

}

int ATIVIDADE_01_05_TESTE_CALCULA_HIPOTENUSA_TESTE_02(void) {

	float hipotenusa = calcular_hipotenusa(10,3);                       
	if((int)hipotenusa==10){
		return 0;
	}else{
		return 1;
	}

}

int ATIVIDADE_01_05_TESTE_CALCULA_HIPOTENUSA_TESTE_03(void) {

	float hipotenusa = calcular_hipotenusa(5,5);                       
	if((int)hipotenusa==7){
		return 0;
	}else{
		return 1;
	}
}