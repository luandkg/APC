/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 08
 QUESTAO        : 01
 ============================================================================ */


 #include <stdio.h>

 int main () {
    int i, W[5];

    /* le os valores e armazena numa variavel do tipo vetor */
    for (i=0; i<5; i++) {
        printf("Digite o %do numero: \n",i+1);
        scanf("%d",&W[i]);
      }
      /* imprime na tela os valores armazenados no vetor W */

    for (i=0; i<5; i++) {
        printf("O valor armazenado em W[%d] = %d \n",i+1,W[i]);
    }

    getchar();

    return 0;

 }
