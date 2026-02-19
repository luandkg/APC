/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 10
 QUESTAO        : 02
 ============================================================================ */


#include <stdio.h>

int TAMANHO = 10;

void receber_vetor(int vetor[]){

  int i =0;
  for (i = 0; i < TAMANHO; i++) {

      int valor = -1;
      while(valor<0){

          printf("\nInforme o elemento %d do vetor:", i + 1);
          scanf("%d", &valor);

          if (valor < 0){
            valor = -1;
            printf("\n    -- Informe um valor posistivo !!!");
          }else{
            vetor[i] = valor;
          }
        }
    }
}

int busca_sequencial(int vetor[], int valor){

  int resp = -1;

  int i =0;
  for (i = 0; i < TAMANHO-1; i++) {
      int procurando = vetor[i];
      if (procurando == valor){

        resp = i;
        break;

      }
  }

return resp;
}


int main () {
  int vetor[TAMANHO];
  int valor = 0;

  printf("\n######################## PESQUISA #################################\n");
  receber_vetor(vetor);

  printf("\n######################## PESQUISA #################################\n");

  printf("\nInforme o elemento a ser procurado:");
  scanf("%d", &valor);

  printf("\n################### BUSCA SEQUENCIAL ###############################\n");
  int resp =   busca_sequencial(vetor,valor);

  if (resp == -1){
      printf("\n Valor Nao ENCONTRADO !!!\n");
  }else{
    printf("\n Valor ENCONTRADO na posicao %d !!!\n", resp+1);
  }



    return 0;
}
