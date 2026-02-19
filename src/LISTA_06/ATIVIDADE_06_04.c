/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 06
 QUESTAO        : 04
 ============================================================================ */

#include <stdio.h>

void leitura(int *codigo,float *nota_1, float *nota_2, float *nota_3) {


  printf("\nInforme o CODIGO  : ");
  scanf("%d", codigo);

  printf("\nInforme NOTA 1 : ");
  scanf("%f", nota_1);

  printf("\nInforme NOTA 2 : ");
  scanf("%f", nota_2);

  printf("\nInforme NOTA 3 : ");
  scanf("%f", nota_3);



}

float media( float nota_1, float nota_2, float nota_3){

  float resultado = ( (nota_1 * 3) + (nota_2 * 3) + (nota_3 * 4) ) / ( 10 ) ;

  return resultado;
}

int main (){

  int alunos_qtd = 0;
  int i=0;

  int codigo = 0;
  float nota_1, nota_2, nota_3;

printf("\n\n           ### BOLETIM ###          \n\n");

  printf("\nInforme a quantidade de Alunos : ");
  scanf("%d", &alunos_qtd);



for(i=0;i<alunos_qtd;i++){

    nota_1 = 0;
    nota_2 = 0;
    nota_3 = 0;

    printf("\n------------------ ALUNO : %d --------------------- \n", (i+1));

    leitura(&codigo,&nota_1,&nota_2,&nota_3);

    float mediafinal = media(nota_1,nota_2,nota_3);

    printf("\n----------- MEDIA : %.2f", mediafinal);

    printf("\n--------------------------------------------------\n");

}



return 0;


}
