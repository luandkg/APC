/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 09
 QUESTAO        : 06
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


void remover_parte(char* texto_1, int i, int n) {

  char texto_2[MAX + 1];
  strcpy(texto_2,"");


  int contador =0;
  int tamanho =  strlen(texto_1) ;
  int j = i+n;

int contador_texto1= 0;


  while(contador_texto1<tamanho){
    char caracter = texto_1[contador_texto1];

    if (contador_texto1>=i && contador_texto1<j) {

    }else{

        texto_2[contador] = caracter;
        contador+=1;

    }


    contador_texto1+=1;


  }


  texto_2[contador] = '\0';
  strcpy(texto_1,texto_2);

}




 int main () {

   char texto_1[MAX + 1];

   int i = -1;
   int n = -1;

   strcpy(texto_1,"");



   printf("\n############## PROGRAMA PALAVRAS REMOVER PEDACO ###################");

   Recebe_Texto(texto_1);



   while (i==-1) {

     printf("\nInforme o local de inicio da remocao : ");
     scanf("%d", &i);


     if (i>strlen(texto_1) ){
       printf("\nLocal invalido - Maior que o tamanho da string [ TAM : %d]", strlen(texto_1));
       i=-1;
     }else{

       if (i<0) {

         printf("\nLocal invalido - Menor que o inicio da string [ TAM : %d]", strlen(texto_1));
         i=-1;

       }


     }


     while (n==-1) {

       printf("\nInforme o tamanho da remocao : ");
       scanf("%d", &n);


       if (n> (strlen(texto_1) - i)  ){
         printf("\nLocal invalido - Maior que o tamanho da string [ TAM : %d]", strlen(texto_1));
         n=-1;
       }else{

         if (n<0) {

           printf("\nLocal invalido - Menor que o inicio da string [ TAM : %d]", strlen(texto_1));
           n=-1;

         }


       }


}

}


   printf("\n##################### RESULTADO  #################################\n");

   remover_parte(texto_1,i,n);

   printf("Texto : %s", texto_1);

   printf("\n###################################################################\n");

    return 0;

 }
