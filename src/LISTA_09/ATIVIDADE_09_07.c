/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 09
 QUESTAO        : 07
 ============================================================================ */


#include <stdio.h>
#include <string.h>

int MAX = 25;
int PAL = 10;

void Recebe_Frase(char * texto){

     while ((strlen(texto) > MAX )   ||  (strlen(texto) < 1) )  {

       printf("\nInforme a frase [ MAX : %d ] : ", MAX);
       scanf("%[^\n]s", texto);

       getchar();

       if (strlen(texto) > MAX){
         printf("\n\t\t ---- Tamanho da Frase invalido !!![ TAM : %d]", strlen(texto));
         getchar();
       }


     }

}



int texto_igualdade(char palavra_1[], char palavra_2[]) {
    int i = 0;

    int resposta = 0;

    int tamanho1 = strlen(palavra_1);
    int tamanho2 = strlen(palavra_2);

  /*  printf("\n Tentando %s por %s", palavra_1, palavra_2); */

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


/* ARRUMAR FUNCAO DE ANEXAR PALAVRAS */

void texto_anexar(char frase[], char palavra[]) {
    int i = 0;
    int j = 0;

    char nova_frase[MAX+1];



    int tamanho_frase = strlen(frase) - 1;
    int tamanho_palavra = strlen(palavra) - 1;

    while(i<=tamanho_frase){
      char caracter = frase[i];

    /*  printf("\n SOL : %c", caracter); */

      if (i<MAX && j<MAX) {

        if(caracter=='\0'){
          i=tamanho_frase;
          j+=1;
        }else{
            nova_frase[j] = caracter;
        }

      }



      i+=1;
      j+=1;
    }

    i=0;

    while(i<=tamanho_palavra){
      char caracter = palavra[i];

          if (i<MAX && j<MAX) {

            if(caracter=='\0'){
              i=tamanho_frase;
            }else{
                nova_frase[j] = caracter;
            }

          }


      i+=1;
      j+=1;
    }

    nova_frase[j] = '\0';

    strcpy(frase,nova_frase);

  /*  printf("\n ANEXANDO : %s", frase); */

}

void comparar(char* texto_1, char* pvelha, char*pnova) {


  char texto_funcao[MAX+2];

  strcpy(texto_funcao,texto_1);
  texto_funcao[strlen(texto_1)] = ' ';

  int i =0;
  int tamanho =  strlen(texto_funcao);


  char palavra[MAX+1];
  int p=0;

  char texto_2[MAX+1];
  strcpy(texto_2,"");

  while(i<tamanho){
    char caracter = texto_funcao[i];

    if (caracter == ' ') {

        palavra[p] = '\0';

      if ( texto_igualdade(palavra, pvelha) == 0 ) {


    /*    printf("\n ENCONTROU : %s", palavra); */

        texto_anexar(texto_2, pnova);
        texto_anexar(texto_2, " ");

      }else{

        texto_anexar(texto_2, palavra);
        texto_anexar(texto_2, " ");



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

texto_2[strlen(texto_2)-1] = '\0';

strcpy(texto_1,texto_2);


}




 int main () {

   char texto_1[MAX + 1];
   char pvelha[PAL + 1];
   char pnova[PAL + 1];

   strcpy(texto_1,"");
   strcpy(pvelha,"");
   strcpy(pnova,"");


   printf("\n############ PROGRAMA SUBSTITUI PALAVRAS #########################");

   Recebe_Frase(texto_1);


/* RECEBE PALAVRA pvelha*/

    while ((strlen(pvelha) > PAL )   ||  (strlen(pvelha) < 1) )  {


     printf("\nInforme a PALAVRA VELHA [ MAX : %d ] : ", PAL);
     scanf("%[^\n]s", pvelha);

     getchar();

     if (strlen(pvelha) > MAX){
       printf("\n\t\t ---- Tamanho da PALAVRA VELHA invalido !!![ TAM : %d]", strlen(pvelha));
       getchar();
     }


   }


   /* RECEBE PALAVRA pnova*/

       while ((strlen(pnova) > PAL )   ||  (strlen(pnova) < 1) )  {


        printf("\nInforme a PALAVRA NOVA [ MAX : %d ] : ", PAL);
        scanf("%[^\n]s", pnova);

        getchar();

        if (strlen(pnova) > MAX){
          printf("\n\t\t ---- Tamanho da PALAVRA NOVA invalido !!![ TAM : %d]", strlen(pnova));
          getchar();
        }


      }



   printf("\n##################### RESULTADO  #################################\n");

   comparar(texto_1,pvelha,pnova);

   printf("  Frase Nova : %s", texto_1);


   printf("\n###################################################################\n");

    return 0;

 }
