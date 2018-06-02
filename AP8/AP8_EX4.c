/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 08
 QUESTAO        : 04
 ============================================================================ */


#include <stdio.h>

int MAX = 20;
int rec = 0;

void receber_valores(int numeros[], int* sair){

  *sair =0;

  while(rec == 0) {
    printf("\nInforme o tamanho do vetor [MAX : %d ]: ", MAX);
    scanf("%d",&rec);
    if(rec>MAX) {
      printf("\n - Tamanho invalido !!!");
      rec = 0;
    }

    if(rec<=0) {
      printf("\n - Tamanho invalido !!!");
      rec = 0;
    }

  }

  printf("################################################################");



  int i =0;
  /* le os valores e armazena numa variavel do tipo vetor */
  for (i=0; i<rec; i++) {
      printf("\nDigite o %do numero: \n",i+1);
      int valor = 0;

      scanf("%d",&valor);

      if(valor<0){ *sair = 1; i=rec;}else{numeros[i] = valor;}


    }

}

void analise_impar_par(int numeros[],  int* impar, int* par){

  *impar =0;
  *par=0;


  int i =0;

  for (i=0; i<rec; i++) {

      if((numeros[i] % 2 ) != 0 ){ *impar +=1;}
      if((numeros[i] % 2 )== 0 ){ *par +=1;}
  }


}

 int main () {
    int W[MAX];

    int sair = 0;
    int e = 1;

    while(sair == 0) {

      printf("\n####################### EXECUCAO : %d ###########################", e);

      receber_valores(W,&sair);

      if(sair ==0){

        /* imprime na tela os valores armazenados no vetor W */

        int impar =0;
        int par =0;

      analise_impar_par(W,&impar,&par);

      printf("------------------------------------------------------------------");
      printf("\n RESULTADOS");
      printf("\n    - Pares : %d", par);
      printf("\n    - Impares : %d\n", impar);

      printf("\n################################################################");

      rec = 0;
      e+=1;

      }



    }



    getchar();

    return 0;

 }
