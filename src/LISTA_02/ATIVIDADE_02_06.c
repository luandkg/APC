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

	if (b + c > a) {

		if ( a + c > b) {
		
			if ( a + b > c) {
			
				printf ( "Eh TRIANGULO !!!\n");


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
					printf ( " - Eh TRIANGULO RETANGULO !!!\n");
				 } else {
					printf ( " - Não Eh TRIANGULO RETANGULO !!!\n");
				}


			}
			else { printf ( "Nao eh TRIANGULO - LADO C maior que A + B !!!\n") ;}


		}
		else { printf ( "Nao eh TRIANGULO - LADO B maior que A + C !!!\n") ;}
	}
	else { printf ( "Nao eh TRIANGULO - LADO A maior que B + C !!!\n") ;}

	return(0);
}
