/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 09
 QUESTAO        : 01
 ============================================================================ */


#include <stdio.h>
#include <string.h>

void Gabarito_Retorno(char * gabarito){

     while (strlen(gabarito) != 10)  {

       printf("\n\nInforme o gabarito da turma com 10 Questoes : ");
       scanf("%[^\n]s", gabarito);
       getchar();

       if (strlen(gabarito) != 10){
         printf("\n\t\t ---- Tamanho do GABARITO invalido !!![ Questoes : %d]", strlen(gabarito));
       }

     }

}

int acertos(char *gabarito, char  *prova){

  int respostas =0 ;


  int i =0 ;

  for (i=0; i<10; i++){

    if (gabarito[i] == prova[i]) {

      respostas+=1;

    }


  }


  return respostas;
}



/* GABARITO PADRAO : ABCDEABCDE */


 int main () {

   int qtd_alunos = 0;
   char gabarito[255];
   int i =0;


   printf("\n###################### PROGRAMA CESPE ############################");

   Gabarito_Retorno(gabarito);

   printf("Informe a quantidade de alunos da turma : ");
   scanf("%d", &qtd_alunos);

   getchar();

   printf("\n###################################################################");

   int maiornota =0 ;


   for (i=0; i<qtd_alunos;i++) {

            char prova[255] = { '\0' };
            strcpy(prova,"");


            while (strlen(prova) != 10)  {

              printf("\nGabarito do ALUNO %d  : ", i+1);

              scanf("%[^\n]s", prova);
              getchar();

              if (strlen(prova) != 10){
                printf("\n\t\t ---- Tamanho da PROVA invalida !!![ Questoes : %d]", strlen(prova));

              }


            }

            int nota = acertos (gabarito, prova ) ;

            if (nota > maiornota) { maiornota = nota;}


   }

   printf("\n########################### RESPOSTAS ############################");
   printf("\n MAIOR NOTA : %d" , maiornota);
   printf("\n###################################################################\n");



    return 0;

 }
