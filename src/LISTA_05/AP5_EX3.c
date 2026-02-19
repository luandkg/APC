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

float exponenciacao(float x, int y){

	float resultado =0;
	int i =0;

	for(i==0;i<y;i++){ 

		if(i==0){resultado=x;}else{resultado = resultado*x; }
		 
	}

	return resultado;
}

int main(void){

	printf("	### PROGRAMA EXPONENCIACAO ###	");


	float x =0;
	int y = 0;


	printf("\n\n\nInforme X: ");
	scanf("%f",&x);
	
	printf("Informe Y: ");
	scanf("%d",&y);
	

	
	printf("\nO Resultado eh : %.2f \n", exponenciacao(x,y));


	return 0;
}
