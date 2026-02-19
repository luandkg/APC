/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright   	: FREITAS @ COPYRIGHTS
 CURSO		: COMPUTACAO
 TURNO		: NOTURNO
 DISCIPLINA	: APC - Algoritmos de Programacao de Computadores
 LISTA		: 04
 QUESTAO	: 06
 ============================================================================ */



#include <stdio.h>


int main () {
    
	printf("\n		### EXPONENCIACAO ###		 ");

	int x =0 ,k =0, i=0, j=0,k_positivo=0 ;
	float expo =0.0;
	


	for(i=1;i<=4;i++) {

		printf("\nInforme o valor de X : ");
		scanf("%d",&x);

		printf("\nInforme o valor de K : ");
		scanf("%d",&k);

		expo = 1;
		k_positivo = k;

		if (k<0) {k_positivo = (-1)*k; }

		for (j=1;j<=k_positivo;j++){
			expo = expo *x;
		}


		if(k<0){expo = 1 / expo;} 
		

		printf("EXPONENCIACAO de %d elevado a %d : %0.2f\n",x,k, expo);

	}


 
    return (0);
}
