/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 06
 QUESTAO        : 02
 ============================================================================ */

#include <stdio.h>

void MaiorMenor (int *num1, int *num2, int *num3, int *maior, int *menor ) {

  *maior = *num1;
  *menor = *num1;

/* MAIOR */

  if(*num1 > *num2) {

      if(*num1 > *num3 ) {
          *maior = *num1;
      } else {
          *maior = *num3;
      }

  } else {

    if(*num2 > *num3 ) {
        *maior = *num2;
    } else {
        *maior = *num3;
    }

  }

/* MENOR */

  if(*num1 < *num2) {

      if(*num1 < *num3 ) {
          *menor = *num1;
      } else {
          *menor = *num3;
      }

  } else {

    if(*num2 < *num3 ) {
        *menor = *num2;
    } else {
        *menor = *num3;
    }

  }




}

int main() {

    int num1,num2,num3, maior,menor;

    printf("      ### MAIOR / MENOR ###      \n");

    printf("Informe o primeiro numero : ");
    scanf("%d",&num1 );

    printf("Informe o segundo numero : ");
    scanf("%d",&num2 );

    printf("Informe o terceiro numero : ");
    scanf("%d",&num3 );


    MaiorMenor(&num1,&num2,&num3,&maior,&menor);

    printf("\n\nMAIOR : %d ", maior);
    printf("\n\nMENOR : %d \n", menor);

    return(0);
}
