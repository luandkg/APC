/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 08
 QUESTAO        : 06
 ============================================================================ */


#include <stdio.h>

int MAX = 12;

void receber(float numeros[]){


  int i =0;
  /* le os valores e armazena numa variavel do tipo vetor */
  for (i=0; i<MAX; i++) {


    switch(i){
      case 0:
          printf("\nTemperatura do Mes de JANEIRO : ");
          break;
      case 1:
          printf("\nTemperatura do Mes de FEVEREIRO : ");
          break;
      case 2:
          printf("\nTemperatura do Mes de MARCO : ");
          break;
      case 3:
          printf("\nTemperatura do Mes de ABRIL : ");
          break;
      case 4:
          printf("\nTemperatura do Mes de MAIO : ");
          break;
      case 5:
          printf("\nTemperatura do Mes de JUNHO : ");
          break;
      case 6:
          printf("\nTemperatura do Mes de JULHO : ");
          break;
      case 7:
          printf("\nTemperatura do Mes de AGOSTO : ");
          break;
      case 8:
          printf("\nTemperatura do Mes de SETEMBRO : ");
          break;
      case 9:
          printf("\nTemperatura do Mes de OUTUBRO : ");
          break;
      case 10:
          printf("\nTemperatura do Mes de NOVEMBRO : ");
          break;
      case 11:
          printf("\nTemperatura do Mes de DEZEMBRO : ");
          break;
      default:
          printf("\nTemperatura do Mes %d : ", (i+1));
          break;
    }


      float valor = 0;

      scanf("%f",&valor);
      numeros[i] = valor;

    }

}

void analisar(float numeros[],float *maior_valor, float *menor_valor, int *maior_pos, int *menor_pos){

  int i =0;

  for (i=0; i<MAX; i++) {

      if(i == 0) {
          *maior_valor = numeros[i];
          *menor_valor = numeros[i];
          *maior_pos=(i+1);
          *menor_pos=(i+1);
      }

      if(numeros[i] > *maior_valor) {
          *maior_valor = numeros[i];
          *maior_pos=(i+1);
      }

      if(numeros[i] < *menor_valor) {
          *menor_valor = numeros[i];
          *menor_pos=(i+1);
      }

  }


}

 int main () {

      float W[MAX];

      float maior_valor = 0;
      float menor_valor = 0;

      int maior_pos = 0;
      int menor_pos = 0;


      printf("\n#######################  TEMPERATURA  ##########################");

      receber(W);

      printf("------------------------------------------------------------------");
      printf("\n RESULTADOS");

      analisar(W, &maior_valor, &menor_valor, &maior_pos, &menor_pos);

      printf("\n  MAIOR : %.3f no MES : %d", maior_valor, maior_pos);

      printf("\n  MENOR : %.3f no MES : %d", menor_valor, menor_pos);

      printf("\n################################################################\n");

      getchar();

    return 0;

 }
