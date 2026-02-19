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

#include <stdio.h>


int main(void) {

	const float PI = 3.14;

	float raio, altura =0;

	printf("--------- VOLUME DO CILINDRO --------------\n");

	printf("Informe o RAIO do cilindro em cm: ");

	scanf("%f",&raio);

	printf("Informe a ALTURA do cilindro em cm: ");

	scanf("%f",&altura);


	float volume = PI * ( raio*raio)*altura;



	printf("O Volume do cilindro eh = %f cm cubicos \n", volume);



	return 0;
}
