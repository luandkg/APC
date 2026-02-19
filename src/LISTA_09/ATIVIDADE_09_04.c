/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 09
 QUESTAO        : 04
 ============================================================================ */


#include <stdio.h>
#include <string.h>

int MAX = 20;

void Recebe_Texto(char * texto){



     while ((strlen(texto) > MAX )   ||  (strlen(texto) < 1) )  {

       printf("\nInforme o texto [ MAX : %d ] : ", MAX);
       scanf("%[^\n]s", texto);

       getchar();

       if (strlen(texto) > MAX){
         printf("\n\t\t ---- Tamanho do TEXTO invalido !!![ TAM : %d]", strlen(texto));
         getchar();
       }


     }

}


void inverter(char* texto_1, char* texto_2) {


  int i =  strlen(texto_1) - 1;
  int j = 0;

  while(i>=0){
    char caracter = texto_1[i];
    texto_2[j] = caracter;

    i-=1;
    j+=1;
  }


  texto_2[j] = '\0';

}




 int main () {

   char texto_1[MAX + 1];
   char texto_2[MAX + 1];

   strcpy(texto_1,"");
   strcpy(texto_2,"");


   printf("\n############## PROGRAMA PALAVRAS INVERSAO #########################");

   Recebe_Texto(texto_1);

   printf("\n##################### RESULTADO  #################################\n");

   inverter(texto_1,texto_2);

   printf("Texto Inverso : %s", texto_2);

   printf("\n###################################################################\n");

    return 0;

 }
