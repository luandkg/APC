/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 09
 QUESTAO        : 02
 ============================================================================ */


#include <stdio.h>
#include <string.h>

void Recebe_Texto(char * texto){



     while ((strlen(texto) > 25)   ||  (strlen(texto) < 1) )  {

       printf("\nInforme o texto a ser compactado [ MAX : 25 ] : ");
       scanf("%[^\n]s", texto);

       if (strlen(texto) > 25){
         printf("\n\t\t ---- Tamanho do TEXTO invalido !!![ TAM : %d]", strlen(texto));
         getchar();
       }


     }

}

void Compactador(char * texto,char *texto_compactado){


int tamanho = strlen(texto);
int i =0;

char caracter_passado = '\0';
int contador = 0;

int e = 0;

 while (i<tamanho) {

    char caracter_atual = texto[i];

  /*  printf("\n - C : %c", caracter_passado); */

    if (i==0 ) {

      caracter_passado = caracter_atual;
      contador =1;

    }

    if (i > 0 ){

      if (caracter_atual == caracter_passado) {

          contador+=1;

        } else{

          /*    printf("\n MUDOU "); */


              if (contador > 1) {
                texto_compactado[e] = contador + '0';

                e+=1;
              }


              texto_compactado[e] = caracter_passado;

              e+=1;

            caracter_passado=caracter_atual;
            contador =1 ;

        }

    }




    i+=1;

 }

 if (contador>0){

   if (contador > 1) {
     texto_compactado[e] = contador + '0';

     e+=1;
   }

   texto_compactado[e] = caracter_passado;

   e+=1;

 }



texto_compactado[e] = '\0';


}



 int main () {

   char texto[26];
   char compactado[26];

   strcpy(texto,"");
   strcpy(compactado,"");


   printf("\n############ PROGRAMA COMPACTADOR DE TEXTO #######################");

   Recebe_Texto(texto);

   Compactador(texto,compactado);


   printf("Texto Compactado : %s\n",compactado );



    return 0;

 }
