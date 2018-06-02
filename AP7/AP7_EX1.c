/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 07
 QUESTAO        : 01
 ============================================================================ */

#include <stdio.h>



int main (){

  int alunos_qtd = 0;
  int i=0;

  float nota_1, nota_2, nota_3;

  printf("\n\n           ### BOLETIM ###          \n\n");

  char nome_arquivo[100];

  printf("\nInforme o nome do arquivo : ");
  scanf ("%99s",nome_arquivo);


  FILE *arquivo;
  arquivo = fopen(nome_arquivo, "w");

  /*printf("%s", nome_arquivo);*/

  printf("\nInforme a quantidade de alunos : ");
  scanf("%d", &alunos_qtd);

  for(i=0;i<alunos_qtd;i++){

    nota_1 = 0;
    nota_2 = 0;
    nota_3 = 0;

    printf("\n------------------ ALUNO : %d --------------------- \n", (i+1));

    printf("\nInforme NOTA 1 : ");
    scanf("%f", &nota_1);

    printf("\nInforme NOTA 2 : ");
    scanf("%f", &nota_2);

    printf("\nInforme NOTA 3 : ");
    scanf("%f", &nota_3);


    fprintf(arquivo, "%f", nota_1);
    fprintf(arquivo, "%f", nota_2);
    fprintf(arquivo, "%f", nota_3);

    fprintf(arquivo, " \n");



    printf("\n--------------------------------------------------\n");


}

    fclose(arquivo);

return 0;


}
