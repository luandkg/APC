/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 08
 QUESTAO        : 05
 ============================================================================ */


#include <stdio.h>

int MAX = 9;

void receber_valores(int numeros[]){


  int i =0;
  /* le os valores e armazena numa variavel do tipo vetor */
  for (i=0; i<MAX; i++) {
      printf("\nDigite o %do numero: \n",i+1);
      int valor = 0;

      scanf("%d",&valor);
      numeros[i] = valor;

    }

}

void negativos(int numeros[]){



  int i =0;

  for (i=0; i<MAX; i++) {

      if(numeros[i] < 0) {

        printf("\n   %d na posicao : %d", numeros[i], i);

      }

  }


}

 int main () {

      int W[MAX];

      printf("\n########################  NEGATIVOS  ###########################");

      receber_valores(W);

      printf("------------------------------------------------------------------");
      printf("\n RESULTADOS");

      negativos(W);

      printf("\n################################################################\n");

      getchar();

    return 0;

 }
