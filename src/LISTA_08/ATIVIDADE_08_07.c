/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 08
 QUESTAO        : 07
 ============================================================================ */


#include <stdio.h>

int MAX = 15;

void receber(float numeros[]){

  int i =0;
  /* le os valores e armazena numa variavel do tipo vetor */
  for (i=0; i<MAX; i++) {

      printf("\nValor %d : ", (i+1));

      float valor = 0;

      scanf("%f",&valor);
      numeros[i] = valor;

    }

}

void processar(float numeros[],float novo[]){

  int i_novo =0;

  int i =0;

  for (i=0; i<MAX; i++) {

      if(numeros[i] != 0) {

          novo[i_novo] = numeros[i];

          i_novo+=1;
      }

  }

  for (i=i_novo; i<MAX; i++) {

        novo[i] = -1;

  }



}


void exibir(float numeros[]){

  printf("\n  COMPACTADO : ");

  int i =0;
  for (i=0; i<MAX; i++) {

    if(numeros[i]!=-1){printf("\n    %.3f", numeros[i]);}
    
  }

}

 int main () {

      float W[MAX];
      float novo[MAX];

      printf("\n####################  VETOR COMPACTADO  ########################");

      receber(W);

      printf("------------------------------------------------------------------");

      printf("\n RESULTADOS");

      processar(W,novo);

      exibir(novo);

      printf("\n################################################################\n");

      getchar();

    return 0;

 }
