/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright   	: FREITAS @ COPYRIGHTS
 CURSO		: COMPUTACAO
 TURNO		: NOTURNO
 DISCIPLINA	: APC - Algoritmos de Programacao de Computadores
 LISTA		: 05
 QUESTAO	: 01
 ============================================================================ */


#include <stdio.h>

float recebe(char sexo, float altura){

	float p =0;

	if (sexo=='m') { p = (72.7 * altura) - 58; }
	if (sexo=='M') { p = (72.7 * altura) - 58; }

	if (sexo=='f') { p = (62.1 * altura) - 44.7; }
	if (sexo=='F') { p = (62.1 * altura) - 44.7; }


	return p;
}

int main(void){

	printf("	### PROGRAMA PESO IDEAL ###	");


	int i=0, qtd_pessoas = 0;
	float peso_ideal = 0, altura_corrente =0;
	char sexo_corrente = ' ';


	printf("\n\n\nQuantidade de Pessoas: ");
	scanf("%d",&qtd_pessoas);
	
	for(i=0;i<qtd_pessoas;i++){

		printf("\n-------------PESSOA - %d ------------\n", (i+1));
		printf("SEXO : ");

		getchar();

		scanf("%c",&sexo_corrente);

		printf("ALTURA : ");
		scanf("%f",&altura_corrente);


		peso_ideal = recebe(sexo_corrente,altura_corrente);

		printf("PESO IDEAL : %.2f\n",peso_ideal);

		sexo_corrente =' ';
		altura_corrente=0;


	}


	return 0;
}
