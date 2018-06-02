/*
 ============================================================================
 ALGORITMO        	: AP2_EX4.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA			: 02
 QUESTAO		: 04
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main () {

	printf("	### PROBLEMA DO ESPACO ###		\n");

	float x1,y1,x2,y2,altura,largura ;

	printf("------- PONTO DE ORIGEM ------\n");
	printf("Informe X: ");
	scanf("%f",&x1);
	
	printf("Informe Y: ");
	scanf("%f",&y1);

	printf("------- RETANGULO ------\n");
	printf("Informe ALTURA: ");
	scanf("%f",&altura);

	printf("Informe LARGURA: ");
	scanf("%f",&largura);

	
	printf("------- SEGUNDO PONTO ------\n");
	printf("Informe X: ");
	scanf("%f",&x2);
	
	printf("Informe Y: ");
	scanf("%f",&y2);


	if (x2>x1 && x2 <(x1 + largura )) {
	
		if (y2>y1 && y2 <(y1 + altura )) {
			printf("DENTRO DO RETANGULO !!!\n");
		}
		else if (y2 == y1) {
			printf("Y2 NA LINHA DO RETANGULO !!!\n");
		}
		else if (y2 == (y1 + altura )) {
			printf("Y2 NA LINHA DO RETANGULO !!!\n");
		} 
		else {
			printf("Y2 - FORA DO RETANGULO !!!\n");
		}
	}
	else if (x2 == x1) {
		printf("X2 NA LINHA DO RETANGULO !!!\n");
	}
	else if (x2 == (x1 + largura )) {
		printf("X2 NA LINHA DO RETANGULO !!!\n");

	} else {
	
		printf("X2 - FORA DO RETANGULO !!!\n");
	}
	

	return(0);
}
