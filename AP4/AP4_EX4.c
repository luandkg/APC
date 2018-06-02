/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright   	: FREITAS @ COPYRIGHTS
 CURSO		: COMPUTACAO
 TURNO		: NOTURNO
 DISCIPLINA	: APC - Algoritmos de Programacao de Computadores
 LISTA		: 04
 QUESTAO	: 04
 ============================================================================ */



#include <stdio.h>


int main () {
    
	int n =0, t =0 ,i =0 , fatorial = 1, n_calculando=0;
	
	printf("\nInforme o valor de T : ");
	scanf("%d",&t);

	for (i=1;i<=t;i++){

		printf("\nInforme o valor de N : ");
		scanf("%d",&n);

	


		n_calculando = n;

		while (n_calculando>0){

			fatorial = fatorial*n_calculando;
			n_calculando-=1;
		}	


		printf("FATORIAL de %d : %d\n", n, fatorial);

	}


 
    return (0);
}
