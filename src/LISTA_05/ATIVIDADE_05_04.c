/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright			: FREITAS @ COPYRIGHTS
 CURSO					: COMPUTACAO
 TURNO					: NOTURNO
 DISCIPLINA			: APC - Algoritmos de Programacao de Computadores
 LISTA					: 05
 QUESTAO				: 04
 ============================================================================ */


#include <stdio.h>

int SomaPares(int n){

	int i =0;
	int resultado =0;

	for(i==0;i<=n;i++){

		if ( (i % 2) == 0) {resultado +=i;}

	}

	return resultado;
}

int main(void){

	printf("\n\n	### PROGRAMA SOMA PARES ###	");


	int x =0;


	printf("\n\n\nInforme X: ");
	scanf("%d",&x);

	if (x>=0) {
		printf("\n\t - O Resultado eh : %d \n\n", SomaPares(x));
	} else {
		printf("\n\t - O numero nao eh positivo !!!!\n\n");
	}



	return 0;
}
