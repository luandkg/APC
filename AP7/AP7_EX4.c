/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 07
 QUESTAO        : 04
 ============================================================================ */

#include <stdio.h>

int main (){


  char ler[100];

  float nota_1, nota_2, nota_3, media;
  int codigo;


  printf("\n\n           ### BOLETIM - MEDIAS ###          \n\n");

  printf("\nInforme o nome do arquivo de leitura de notas H: ");
  scanf ("%99s",&ler);


  FILE *arquivo_ler;
  arquivo_ler = fopen(ler, "a");



  if( ! arquivo_ler){
        printf("\n ARQUIVO NAO ENCONTRADO !!! ");
  }else{




    while (!feof(arquivo_ler))
      {



        nota_1 =0;
        nota_2=0;
        nota_3=0;
        media = 0;

        char nome[30];

        char s;



          fscanf(arquivo_ler,"%30s",&nome);


          printf("\n %30s" , nome);

          fscanf(arquivo_ler,"%d",&codigo);

        fscanf(arquivo_ler,"%f",&nota_1);
        fscanf(arquivo_ler,"%f",&nota_2);
        fscanf(arquivo_ler,"%f",&nota_3);

        fscanf(arquivo_ler,"%s",&s);

}

  fclose(arquivo_ler);

}

return 0;


}
