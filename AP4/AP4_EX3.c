/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright   	: FREITAS @ COPYRIGHTS
 CURSO		: COMPUTACAO
 TURNO		: NOTURNO
 DISCIPLINA	: APC - Algoritmos de Programacao de Computadores
 LISTA		: 04
 QUESTAO	: 03
 ============================================================================ */



#include <stdio.h>


int main () {
    
	int k = 0 , i = 0, somatorio = 0;
	
	do {
		somatorio = 0;

		printf("\nInforme o valor de K : ");
		scanf("%d",&k);

		if (k>=0) {
			for (i = 0; i<=k; i++){
				somatorio +=i;
			}
		
			printf("SOMATORIO : %d\n",somatorio);
		}


	} while (k>=0);

    return (0);
}
