/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 08
 QUESTAO        : 08
 ============================================================================ */


#include <stdio.h>

int MAX = 15;

void receber(float numeros[], char nome){

  int i =0;
  /* le os valores e armazena numa variavel do tipo vetor */

  printf("\n#######################  VETOR - %c  ############################\n",nome);

  for (i=0; i<MAX; i++) {

      printf("    Valor %d : ", (i+1));

      float valor = 0;

      scanf("%f",&valor);
      numeros[i] = valor;

    }

}

void processar(float X[],float Y[], float U[], float I[]){

  /* PROCESSANDO INTERSECCAO */
  int i =0;
  int k =0;

  for (i=0; i<MAX; i++) {

    int j = 0;
    int encontrado = -1;

    for (j=0; j<MAX; j++) {

        if(X[i] == Y[j]) {
          encontrado = 0;
        }

    }

    if (encontrado == 0 ) {

        I[k] = X[i];
        k+=1;

    }

  }

  for (i=k; i<MAX; i++) {

        I[i] = -1;

  }


/* PROCESSANDO UNIAO */


i =0;
int u =0;

for (i=0; i<MAX; i++) {

      U[u] = X[i];
      u+=1;

}


for (i=0; i<MAX; i++) {

  int j = 0;
  int encontrado = -1;

  for (j=0; j<MAX; j++) {

      if(Y[i] == X[j]) {
        encontrado = 0;
      }

  }

  if (encontrado == -1 ) {

      U[u] = Y[i];
      u+=1;

  }

}


for (i=u; i<2*MAX; i++) {

      U[i] = -1;

}




}


void exibir(float numeros[], int tamanho){

  int i =0;
  for (i=0; i<tamanho; i++) {

    if(numeros[i] != -1 ) {  printf("    %.3f", numeros[i]);}

  }

}

 int main () {

      float X[MAX] , Y[MAX],U[2*MAX], I[MAX];

      printf("\n####################  VETOR - ANALISE  ########################");

      receber(X, 'X');
      receber(Y, 'Y');

      printf("------------------------------------------------------------------");

      printf("\n RESULTADOS");


      processar(X,Y,U,I);

      printf("\n INTERSECCAO : ");
      exibir(I,MAX);

      printf("\n UNIAO : ");
      exibir(U,2*MAX);

      printf("\n################################################################\n");

      getchar();

    return 0;

 }
