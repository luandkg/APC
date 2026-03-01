/*
 ============================================================================
 ALGORITMO        	: AP1_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DESCRICAO 			: LISTA DE EXERCICIOS 01 - QUESTAO 03 -- Ansi-style
 LISTA				: 01
 QUESTAO			: 03
 ============================================================================
 */

#include "ATIVIDADE_01_03.h"

float cilindro_volume(float raio,float altura){
	const float PI = 3.14;
	return PI * ( raio*raio)*altura;
}

int ATIVIDADE_01_03(void) {

	float raio, altura =0;

	printf("--------- VOLUME DO CILINDRO --------------\n");

	printf("Informe o RAIO do cilindro em cm: ");

	scanf("%f",&raio);

	printf("Informe a ALTURA do cilindro em cm: ");

	scanf("%f",&altura);

	float volume = cilindro_volume(raio,altura);

	printf("O Volume do cilindro eh = %f cm cubicos \n", volume);


	return 0;
}

int ATIVIDADE_01_03_TESTE_CALCULAR_CILINDO_VOLUME_01() {

	
	float raio = 10;
	float altura = 30;

	float volume = cilindro_volume(raio,altura);

	if(volume==9420.0){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
	
}


int ATIVIDADE_01_03_TESTE_CALCULAR_CILINDO_VOLUME_02() {

	
	float raio = 60;
	float altura = 20;

	float volume = cilindro_volume(raio,altura);

	if(volume==226080.0){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
	
}

int ATIVIDADE_01_03_TESTE_CALCULAR_CILINDO_VOLUME_03() {

	
	float raio = 5;
	float altura = 12;

	float volume = cilindro_volume(raio,altura);
	                                   
	if(volume==942.0){
		return TESTE_SUCESSO;
	}else{
		return TESTE_FALHOU;
	}
	
}