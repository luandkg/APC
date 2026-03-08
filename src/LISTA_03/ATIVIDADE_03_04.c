/*  ============================================================================
 ALGORITMO        	: AP3_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DISCIPLINA		: APC - Algoritmos de Programacao de Computadores
 LISTA				: 03
 QUESTAO			: 03
 ============================================================================ */

#include <stdio.h>

int ATIVIDADE_03_04 (void) {

	int i = 0, o = 0;
	
	printf("\n	### TABUADAS - 10 a 20 ###		 \n");
	
	

	for (i=10;i<=20;i++) {
	
		printf("\n");

		printf(" TABUADA : %d \n",i);
	
		for (o=0;o<=10;o++) {
	
			printf(" %d x %d = %d \n",i,o,(i*o));
	
		}

		printf("\n");

	}

	
	return 0;

}

