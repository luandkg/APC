/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 10
 QUESTAO        : 01
 ============================================================================ */


#include <stdio.h>

int TAMANHO = 10;

void receber_vetor(int vetor[]){
  int i =0;
  for (i = 0; i < TAMANHO; i++) {
      printf("Informe o elemento %d do vetor:", i + 1);
      scanf("%d", &vetor[i]);
    }

}

void ordenar_bubble_sort(int vetor[]){

  int i, aux, fez_troca;
  fez_troca = 1;
  while (fez_troca) {
    fez_troca = 0;
    for (i = 0; i < TAMANHO-1; i++) {
      if (vetor[i] > vetor[i + 1]) {
        aux = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = aux;
        fez_troca = 1;
      }
    }
  }


}

void exibir_vetor(int vetor[]){

    int i = 0;

  for (i = 0; i < TAMANHO ; i++) {
    printf("%d\n", vetor[i]);
  }

}

int main () {
  int vetor[TAMANHO];

  printf("\n######################## ORDENACAO #################################\n");
  receber_vetor(vetor);
  ordenar_bubble_sort(vetor);
  printf("\n#################### VETOR ORDENADO ################################\n");
  exibir_vetor(vetor);



    return 0;
}
