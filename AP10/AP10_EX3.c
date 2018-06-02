/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 10
 QUESTAO        : 03
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

int busca_binaria(int vetor[], int valor, int *pos){

  int inicio = 0;
  int fim = TAMANHO;
  int achou = 0;
  int meio = 0;

  *pos = -1;

  while ((inicio <= fim) && (!achou)) {
      meio = (inicio + fim) / 2;
      if (valor < vetor[meio]){
              fim = meio - 1;
      }else {
        if (valor > vetor[meio]){
            inicio = meio + 1;
        }else{
          achou = 1;
        }
      }
    }

  if (achou == 1 ) { *pos = meio + 1 ;}

  return achou;
}



int main () {
  int vetor[TAMANHO];


  printf("\n################### PESQUISA BINARIA ###############################\n");
  receber_vetor(vetor);


  /* VERIFICAR SE O VETOR ESTA ORDENADO */
  int ordenado = 0;
  int i =0;
  int ant = vetor[0];
  for( i=0; i<TAMANHO; i++){

      int tmp = vetor[i];

      if (tmp>=ant){
      } else{
          ordenado = -1;
      }
  }

    int buscando = 0;

    if (ordenado == 0) {

        printf("\n######################## PESQUISA #################################\n");

        printf("\nInforme o elemento a ser procurado:");
        scanf("%d", &buscando);

        printf("\n################### BUSCA BINARIA ##############################\n");
        int pos = 0;
        int resposta =  busca_binaria(vetor,buscando,&pos);

        if (resposta == 0){
            printf("\n Valor Nao ENCONTRADO !!!\n");
        }else{
            printf("\n Valor ENCONTRADO na posicao %d !!!\n", pos);
        }

    } else{
      printf("\n O VETOR nao esta ordenado !!!\n");
    }

    return 0;
}
