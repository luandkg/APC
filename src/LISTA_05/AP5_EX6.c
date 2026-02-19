/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright			: FREITAS @ COPYRIGHTS
 CURSO					: COMPUTACAO
 TURNO					: NOTURNO
 DISCIPLINA			: APC - Algoritmos de Programacao de Computadores
 LISTA					: 05
 QUESTAO				: 06
 ============================================================================ */


#include <stdio.h>

int Produto(int numero1, int numero2){

	int resultado =0;

	while (numero1>=1) {

		if((numero1 % 2 ) == 1) { resultado +=numero2;}

		numero1 = numero1 / 2;
		numero2 = numero2 * 2;

	}

	return resultado;
}

int main(void){

	printf("\n\n	### PROGRAMA PRODUTO - METODO DA MULTIPLICACAO ###	");

	int i =0;

	for(i=1; i<=10;i++) {

		printf("\n\n ----------------------- CALCULO %d -------------------------------", i);

		int numero1 = 0, numero2 = 0 ;


		printf("\nInforme Numero 1: ");
		scanf("%d",&numero1);

		printf("Informe Numero 2: ");
		scanf("%d",&numero2);



		printf("\n\t - O PRODUTO eh : %d ", Produto(numero1,numero2));


	}





	return 0;
}
