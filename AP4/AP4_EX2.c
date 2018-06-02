/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright   	: FREITAS @ COPYRIGHTS
 CURSO		: COMPUTACAO
 TURNO		: NOTURNO
 DISCIPLINA	: APC - Algoritmos de Programacao de Computadores
 LISTA		: 04
 QUESTAO	: 02
 ============================================================================ */


/* descrição: imprimir os números de 1 a 5, cinco vezes.
    Entrada: não tem
    Saída: 1
     1 2
     1 2 3   
     1 2 3 4
     1 2 3 4 5    */

#include <stdio.h>


int main () {
    int i, j;
	
	
	for (j=1;j<=5;j++) {
        	i = 0;
        	do {
			i++;
			printf("%d ",i);
			} while(i<j);

      	printf("\n ");

    }

    getchar();

    return (0);
}
