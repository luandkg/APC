/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 09
 QUESTAO        : 03
 ============================================================================ */


#include <stdio.h>
#include <string.h>

int MAX = 20;

void Recebe_Texto(char * texto, int d){



     while ((strlen(texto) > MAX )   ||  (strlen(texto) < 1) )  {

       printf("\nInforme o texto %d [ MAX : %d ] : ",d, MAX);
       scanf("%[^\n]s", texto);

       getchar();

       if (strlen(texto) > MAX){
         printf("\n\t\t ---- Tamanho do TEXTO %d invalido !!![ TAM : %d]",d, strlen(texto));
         getchar();
       }


     }

}

int texto_igualdade(char palavra_1[], char palavra_2[]) {
    int i = 0;

    int resposta = 0;

    int tamanho1 = strlen(palavra_1);
    int tamanho2 = strlen(palavra_2);

    if (tamanho1 == tamanho2){

      while (i<tamanho1) {

        if (palavra_1[i] == palavra_2[i] ) {} else{

          resposta = 1;
          i=tamanho1;

        }

        i+=1;
      }


    }else{

      resposta = 1;
    }


    return resposta;
}

void comparar(char* texto_1, char* texto_2) {


  char texto_funcao[MAX+2];

  strcpy(texto_funcao,texto_1);
  texto_funcao[strlen(texto_1)] = ' ';

  int i =0;
  int tamanho =  strlen(texto_funcao);


  char palavra[MAX+1];
  int p=0;


  while(i<tamanho){
    char caracter = texto_funcao[i];

    if (caracter == ' ') {

        palavra[p] = '\0';

      if (  existe(palavra, texto_2) == 0 ) {

        printf("\n PALAVRA : %s existe no Texto 2", palavra);


      }else{

        printf("\n PALAVRA : %s nao existe no Texto 2", palavra);

      }

        p=0;
        strcpy(palavra,"");
    }else {
        palavra[p] = caracter;
        p+=1;
    }

    i+=1;
  }

printf("\n");


}


int existe(char* palavra_buscando, char* texto) {

  int resposta = 1;


  char texto_funcao[MAX+2];

  strcpy(texto_funcao,texto);
  texto_funcao[strlen(texto)] = ' ';

  int i =0;
  int tamanho =  strlen(texto_funcao);


  char palavra[MAX+1];
  int p=0;


  while(i<tamanho){
    char caracter = texto_funcao[i];

    if (caracter == ' ') {

        palavra[p] = '\0';

        int r =  texto_igualdade(palavra_buscando,palavra);

        if (r == 0 ) {

          resposta = 0;
          i=tamanho;

        }


        p=0;
        strcpy(palavra,"");
    }else {
        palavra[p] = caracter;
        p+=1;
    }

    i+=1;
  }


return resposta;

}


 int main () {

   char texto_1[MAX + 1];
   char texto_2[MAX + 1];

   strcpy(texto_1,"");
   strcpy(texto_2,"");


   printf("\n############ PROGRAMA PALAVRAS DUPLICADAS ########################");

   Recebe_Texto(texto_1,1);
   Recebe_Texto(texto_2,2);

   printf("\n##################### RESULTADO  #################################\n");

   comparar(texto_1,texto_2);


   printf("\n###################################################################\n");

    return 0;

 }
