/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright   	: FREITAS @ COPYRIGHTS
 CURSO		: COMPUTACAO
 TURNO		: NOTURNO
 DISCIPLINA	: APC - Algoritmos de Programacao de Computadores
 LISTA		: 03
 QUESTAO	: 07
 ============================================================================ */

#include <stdio.h>

int main () {

	int i = 0, j = 0, times = 8, jogadores = 12,codigo = 0, idade = 0;
	float altura = 0.0, peso = 0.0;

	float peso_medio_geral = 0.0 , idade_media_geral =0.0;

	float maior_altura = 0.0;
	int codigo_da_maior_altura =0;

	printf("\n	### CBV - VOLEI ###		 \n\n");

	for (i=1;i<=times;i++) {

		float peso_medio = 0.0 , idade_media =0.0;

		printf("-------------------- TIME %d --------------------- ", i);

		for (j=1;j<=jogadores;j++) {

			printf("\n");

			

			printf(" JOGADOR : %d \n",j);
			printf("-------------------- Codigo : ");
			scanf("%d",&codigo);

			printf("-------------------- Peso : ");
			scanf("%f",&peso);

			printf("-------------------- Altura : ");
			scanf("%f",&altura);

			printf("-------------------- Idade : ");
			scanf("%d",&idade);
		
			peso_medio +=peso;
			idade_media +=idade;
			
			peso_medio_geral+=peso;
			idade_media_geral+=idade;

			if (altura > maior_altura ) {
				maior_altura = altura;
				codigo_da_maior_altura = codigo;
			}


		}

		peso_medio = peso_medio/ jogadores;
		idade_media = idade_media/ jogadores;

 		printf("\n");
		printf("\n--------------------------------------------------");
		printf("\n-------------------- PESO MEDIO : %0.2f",peso_medio);
		printf("\n-------------------- IDADE MEDIA : %0.2f",idade_media);
		printf("\n--------------------------------------------------");
		printf("\n");
		printf("\n");


	}

	
		peso_medio_geral = peso_medio_geral/ (jogadores*times);
		idade_media_geral = idade_media_geral/ (jogadores*times);

 		printf("\n");
		printf("\n--------------------------------------------------");
		printf("\n--------------- RESULTADO GERAL ------------------");
		printf("\n--------------------------------------------------");
		printf("\n-------------------- PESO MEDIO GERAL : %0.2f",peso_medio_geral);
		printf("\n-------------------- IDADE MEDIA GERAL : %0.2f",idade_media_geral);
		printf("\n-------------------- CODIGO DA MAIOR ALTURA : %d",codigo_da_maior_altura);
		printf("\n-------------------- MAIOR ALTURA : %0.2f",maior_altura);
		printf("\n--------------------------------------------------");
		printf("\n");
		printf("\n");


	return 0;

}
