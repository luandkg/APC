

/*
 ============================================================================
 ALGORITMO        	: AP2_EX3.c
 ESTUDANTE      	: Luan Alves Freitas
 MATRICULA     		: 17.0003191
 Copyright   		: FREITAS @ COPYRIGHTS
 LISTA			: 02
 QUESTAO		: 03
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main () {

	printf("	### EQUACAO DE SEGUNDO GRAU ###		\n");

	float a, b,c ;
	printf("Informe A: ");
	scanf("%f",&a);
	
	printf("Informe B: ");
	scanf("%f",&b);

	printf("Informe C: ");
	scanf("%f",&c);

	float delta = (b*b) - (4*(a*c));

	

	if (delta > 0 ){

		float x1 = ((-1)*b + sqrt(delta)) / (2 * a);
		float x2 = ((-1)*b - sqrt(delta)) / (2 * a);


		printf("Raiz X1 : %.2f\n", x1);
		printf("Raiz X2 : %.2f\n", x2);

	} else {
		printf ("Equação sem raizes - Discriminante menor do que zero !!!\n");
	}

	

	return(0);
}
