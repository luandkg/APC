
/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 06
 QUESTAO        : 01
 ============================================================================ */

#include <stdio.h>

void TrocaValor (int *u, int *v, int *x, int *y ) {
  *u = 1;
  *v = 2;
  *x = 3;
  *y = 4;
}

int main() {

    int a, b,c,z;
    a = 1;
    b = 2;
    c = 3;
    z = 100;

    printf ("a = %d, b = %d, c = %d, z= %d \n", a,b,c,z);
    printf ("apos a funcao\n");
    TrocaValor(&a, &b, &c, &z);
    printf ("a = %d, b = %d, c = %d, z= %d \n", a,b,c,z);

    return(0);
}
