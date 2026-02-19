/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 06
 QUESTAO        : 03
 ============================================================================ */

#include <stdio.h>
#include <math.h>

void equacao_segundo_grau(int *a, int *b, int *c, int *r, float *x1, float *x2) {

   *r= (*b * *b) - (4**a**c);

    if (*r == 0 ) {

        *x1 = ( (-1) * (*b) + (sqrt(*r)) ) / (2 * *a) ;

    }

    if (*r > 0 ) {

         *x1 = ( (-1) * (*b) + (sqrt(*r)) ) / (2 * *a) ;

        *x2 = ( (-1) * (*b) - (sqrt(*r)) ) / (2 * *a) ;

    }

    if (*r < 0 ) {


    }

}



int main (){

    int a =0;
    int b = 0;
    int c=  0;

    int r = 0;

    float x1 = 0;
    float x2 = 0;


    printf("\nInforme A : ");
    scanf("%d", &a);

    printf("Informe B : ");
    scanf("%d", &b);

    printf("Informe C : ");
    scanf("%d", &c);

    equacao_segundo_grau(&a, &b, &c , &r, &x1, &x2);


    if (r == 0 ) {

        printf("\nUma raiz !!!!\n");

        printf("\n  X = %f !!!!\n",x1);
    }

    if (r > 0 ) {

        printf("\nDuas raizes !!!!\n");

        printf("\n  X1= %f !!!!\n",x1);

        printf("\n  X2 = %f !!!!\n",x2);

    }

    if (r < 0 ) {

        printf("\nSem Raizes !!!!\n");

    }


return 0;

}
