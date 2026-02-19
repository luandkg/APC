/*  ============================================================================
    ESTUDANTE      : Luan Alves Freitas
    MATRICULA      : 17.0003191
    Copyright      : FREITAS @ COPYRIGHTS
    CURSO          : COMPUTACAO
    TURNO          : NOTURNO
    DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
    LISTA          : 09
    QUESTAO        : 09
    ============================================================================ */

#include <stdio.h>
#include <string.h>

int MAX = 25;

void Recebe_Frase(char * texto) {

    while ((strlen(texto) > MAX )   ||  (strlen(texto) < 1) )  {

        printf("\n  -- Informe a frase [ MAX : %d ] : ", MAX);
        scanf("%[^\n]s",texto);

        getchar();

        if (strlen(texto) > MAX) {
            printf("\n\t\t ---- Tamanho da Frase invalido !!![TAM : %d]", strlen(texto));
            getchar();
        }

    }

}

void inverter(char* texto_1, char* texto_2) {

    int i =  strlen(texto_1) - 1;
    int j = 0;

    while(i>=0) {
        char caracter = texto_1[i];
        texto_2[j] = caracter;

        i-=1;
        j+=1;
    }

    texto_2[j] = '\0';

}

void retirar_zeros(char* texto_1, char* texto_2){

  int i = 0;
  int mudou = 1 ;
  int j =0;

  while(i<strlen(texto_1)) {

      char caracter = texto_1[i];

      if(mudou == 1) {

          if(caracter=='0') {

          } else {

              mudou = 0;
              texto_2[j] = caracter;
              j+=1;
          }

      } else {
          texto_2[j] = caracter;
          j+=1;
      }

      i+=1;

  }

  texto_2[j] = '\0';

}

int texto_para_numero(char *texto_1){


  int i = 0;
  int numero = 0;
  int d = 1;

  while(i<strlen(texto_1)) {
      char caracter = texto_1[i];

      switch (caracter) {
      case '0' :
          numero += ( 0 * d );
          d = d*10;
          break;
      case '1' :
          numero +=(1 * d );
          d = d*10;
          break;
      case '2' :
          numero +=( 2 * d );
          d = d*10;
          break;
      case '3' :
          numero +=(3 * d );
          d = d*10;
          break;
      case '4' :
          numero +=( 4 * d );
          d = d*10;
          break;
      case '5' :
          numero +=(5 * d );
          d = d*10;
          break;
      case '6' :
          numero +=( 6 * d );
          d = d*10;
          break;
      case '7' :
          numero +=(7 * d );
          d = d*10;
          break;
      case '8' :
          numero +=( 8 * d );
          d = d*10;
          break;
      case '9' :
          numero +=(9 * d );
          d = d*10;
          break;
      }

      i+=1;


  }

  return numero;
}

int main () {

    char texto_1[MAX + 1];
    char texto_2[MAX + 1];

    strcpy(texto_1,"");
    strcpy(texto_2,"");

    printf("\n######### PROGRAMA NUMERO INTEIRO - PALAVRAS ######################");

    Recebe_Frase(texto_1);

    printf("##################### RESULTADO  #################################");


    retirar_zeros(texto_1,texto_2);


    strcpy(texto_1,texto_2);
    inverter(texto_1,texto_2);
    strcpy(texto_1,texto_2);

    int numero = texto_para_numero(texto_1);

    printf("\n  Numero : %d", numero);


    printf("\n###################################################################\n");

    return 0;

}
