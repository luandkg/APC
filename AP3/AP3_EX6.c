/*  ============================================================================
 ALGORITMO      : AP3_EX1.c
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA					: 03
 QUESTAO				: 06
 ============================================================================ */

#include <stdio.h>

int main () {

	int i = 0,codigo =0, qtd_alunos = 0;
	float nota_1, nota_2, nota_3, media_nota;

	printf("\n	### ESCOLA - NOTAS PONDERADAS ###		 \n\n");

	printf("Deseja analisar quantos alunos : ");
	scanf("%d",&qtd_alunos);

	for (i=1;i<=qtd_alunos;i++) {

		printf("\n");

		printf(" ALUNO : %d \n",i);
		printf("-------------------- Codigo : ");
		scanf("%d",&codigo);

		printf("-------------------- NOTA 1 : ");
		scanf("%f",&nota_1);

		printf("-------------------- NOTA 2 : ");
		scanf("%f",&nota_2);

		printf("-------------------- NOTA 3 : ");
		scanf("%f",&nota_3);
		
		media_nota = ( (nota_1*2) + (nota_2*4) + (nota_3*4) ) / (10) ;


		printf("------------------------------");
		printf("\n-------------------- Codigo : %d",codigo);
		printf("\n-------------------- Media : %0.2f",media_nota);

		printf("\n");

	}

	


	return 0;

}
