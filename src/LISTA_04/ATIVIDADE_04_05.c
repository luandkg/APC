/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright   	: FREITAS @ COPYRIGHTS
 CURSO			: COMPUTACAO
 TURNO			: NOTURNO
 DISCIPLINA		: APC - Algoritmos de Programacao de Computadores
 LISTA			: 04
 QUESTAO		: 05
 ============================================================================ */



#include <stdio.h>


int main () {
    
	printf("\n		### EXPONENCIACAO ###		 ");

	int x =0 ,k =0, i=0, j=0, expo =0 ;

	


	for(i=1;i<=4;i++) {

		printf("\nInforme o valor de X : ");
		scanf("%d",&x);

		printf("\nInforme o valor de K : ");
		scanf("%d",&k);

		expo = x;

		for (j=1;j<k;j++){
			expo = expo *x;
		}	


		printf("EXPONENCIACAO de %d elevado a %d : %d\n",x,k, expo);

	}


 
    return (0);
}
