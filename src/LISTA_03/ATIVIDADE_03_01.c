/*  ============================================================================
 ALGORITMO        	: AP3_EX1.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 DISCIPLINA			: APC - Algoritmos de Programacao de Computadores
 LISTA				: 03
 QUESTAO			: 01
 ============================================================================ */

#include <stdio.h>

/* Descricao: programa para imprimir os numeros de 1 a 10. Entrada: nao tem. Saida: 1,2,3,...,10  */

int ATIVIDADE_03_01 (void) {

	int i;
	printf("Os numeros de 1 a 10 sao : \n");
	
	for (i=1;i<=10;i++) {
		printf("%d\n",i);
		//getchar();
	}

	return 0;

}

