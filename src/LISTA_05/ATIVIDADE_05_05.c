/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright			: FREITAS @ COPYRIGHTS
 CURSO					: COMPUTACAO
 TURNO					: NOTURNO
 DISCIPLINA			: APC - Algoritmos de Programacao de Computadores
 LISTA					: 05
 QUESTAO				: 05
 ============================================================================ */

#include <stdio.h>

float MaiorValorDeTres(float numero1, float numero2, float numero3){

	float resultado = numero1;

	if (numero2>resultado) {resultado = numero2;}
	if (numero3>resultado) {resultado = numero3;}

	return resultado;
}

int main(void){

	printf("\n\n	### PROGRAMA MAIOR VALOR DE TRES ###	");

	float numero1 = 0, numero2 = 0, numero3 =0 ;

	printf("\n\n\nInforme Numero 1: ");
	scanf("%f",&numero1);

	printf("Informe Numero 2: ");
	scanf("%f",&numero2);

	printf("Informe Numero 3: ");
	scanf("%f",&numero3);

	printf("\n\t - O Resultado eh : %f \n\n", MaiorValorDeTres(numero1,numero2,numero3));

	return 0;
}
