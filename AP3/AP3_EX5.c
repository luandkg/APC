/*  ============================================================================
 ALGORITMO      : AP3_EX1.c
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA					: 03
 QUESTAO				: 04
 ============================================================================ */

#include <stdio.h>

int main () {

	int i = 0;
	int qtd_atletas = 10 , codigo = 0 , altura = 0 ;

	int baixo_codigo = 0 , baixo_altura = 0;
	int alto_codigo = 0 , alto_altura = 0;

	printf("\n	### CADASTRO DE ALTURA DE ATLETAS ###		 \n");



	for (i=1;i<=qtd_atletas;i++) {

		printf("\n");

		printf(" ATLETA : %d \n",i);
		printf("-------------------- Codigo : ");
		scanf("%d",&codigo);

		printf("-------------------- Altura : ");
		scanf("%d",&altura);

		if (i == 1 ){
			baixo_codigo = codigo;
			alto_codigo = codigo;
			baixo_altura = altura;
			alto_altura = altura;
		}

		if (altura < baixo_altura) { baixo_altura=altura; baixo_codigo = codigo; }
		if (altura > alto_altura) { alto_altura=altura; alto_codigo = codigo; }

		printf("\n");

	}

	printf("\n		### RESULTADOS ###		\n");

	printf("\n - MAIS BAIXO \n");
	printf("-------------------- Codigo : %d \n",baixo_codigo );
	printf("-------------------- Altura : %d \n",baixo_altura );

	printf("\n - MAIS ALTO \n");
	printf("-------------------- Codigo : %d \n",alto_codigo );
	printf("-------------------- Altura : %d \n",alto_altura );

	return 0;

}
