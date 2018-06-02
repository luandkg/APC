/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 08
 QUESTAO        : 09
 ============================================================================ */


#include <stdio.h>

int MAX = 2;

void receber(float notas_1[], float notas_2[]){

  int i =0;
  /* le os valores e armazena numa variavel do tipo vetor */
  for (i=0; i<MAX; i++) {

    float nota_1 = 0;
    float nota_2 = 0;

      printf("ALUNO %d : \n", (i+1));

      printf("  - NOTA 1 : ");
      scanf("%f",&nota_1);

      printf("  - NOTA 2 : ");
      scanf("%f",&nota_2);

      notas_1[i] = nota_1;
      notas_2[i] = nota_2;

    }

}

void calcular_medias(float notas_1[], float notas_2[], float medias[]){

  int i =0;
  float divisor = 2.0;

  for (i=0; i<MAX; i++) {

    float nota1 =notas_1[i];
    float nota2 =notas_2[i];

    float media_atual = ((  nota1+ nota2 ) / divisor);
    medias[i] = media_atual;

  }

}

void exibir(float notas_1[], float notas_2[], float medias[]){

  float somatorio = 0;
  float media_geral = 0;

  int aprovados = 0;
  int reprovados = 0;

  int i =0;
  for (i=0; i<MAX; i++) {


    printf("\n  - Aluno %d [ NOTA 1 : %.2f , NOTA 2 : %.2f ] - Media :  %.2f", (i+1), notas_1[i],notas_2[i],medias[i] );

    if (medias[i] >=7 ) {
        aprovados+=1;
    } else {
      reprovados+=1;
    }

    somatorio+=medias[i];

  }

  media_geral = somatorio / MAX;

  printf("\n\n   - Media Geral : %.2f", media_geral);
  printf("\n   - Aprovados : %d", aprovados);
  printf("\n   - Reprovados : %d", reprovados);


}



 int main () {

      float Notas_1[MAX] , Notas_2[MAX], Medias[MAX];


      printf("\n####################  NOTAS - TURMA  ########################\n");

      receber(Notas_1,Notas_2);


      printf("------------------------------------------------------------------");

      printf("\n RESULTADOS\n");

      calcular_medias(Notas_1,Notas_2,Medias);

      exibir(Notas_1,Notas_2,Medias);



      printf("\n\n################################################################\n");

      getchar();

    return 0;

 }
