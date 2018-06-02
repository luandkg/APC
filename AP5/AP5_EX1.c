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

float fat(int x){

	int i;
	float p = 0;
	p=1;

	for (i=1;i<=x;i++){
		p=p*x;
	}

	return p;
}

int main(void){

	int n,k;
	float c;

	printf("Forneça o valor de n: ");
	scanf("%d",&n);
	printf("\n");
	printf("Forneça o valor de k: ");
	scanf("%d",&k);
	printf("\n");
	c=fat(n)/(fat(k)*fat(n-k));
	printf("%f\n",c);

	return 0;
}
