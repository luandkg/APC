/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright   	: FREITAS @ COPYRIGHTS
 CURSO		: COMPUTACAO
 TURNO		: NOTURNO
 DISCIPLINA	: APC - Algoritmos de Programacao de Computadores
 LISTA		: 04
 QUESTAO	: 07
 ============================================================================ */



#include <stdio.h>


int main () {
    
	printf("\n		### MAIOR SOMA DA DUPLA DE UMA SEQUENCIA ###		 \n");

	int num_atual =1;
	
	int soma_maior = 0;

	int num_anterior, soma_corrente = 0;


	do {
		num_anterior = num_atual;
		printf("INFORME UM VALOR : ");
		scanf("%d",&num_atual);
		soma_corrente = num_atual + num_anterior;
		if (soma_corrente > soma_maior) { soma_maior = soma_corrente; }

	} while (num_atual>0);

	printf("--------------------------\n");
 	printf("MAIOR SOMA : %d\n", soma_maior);

    return (0);
}
