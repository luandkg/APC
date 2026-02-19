/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA      : 17.0003191
 Copyright      : FREITAS @ COPYRIGHTS
 CURSO          : COMPUTACAO
 TURNO          : NOTURNO
 DISCIPLINA     : APC - Algoritmos de Programacao de Computadores
 LISTA          : 09
 QUESTAO        : 08
 ============================================================================ */


#include <stdio.h>
#include <string.h>

int MAX = 25;


void Recebe_Frase(char * texto) {

    while ((strlen(texto) > MAX )   ||  (strlen(texto) < 1) )  {

        printf("\nInforme a frase [ MAX : %d ] : ", MAX);
        scanf("%[^\n]s", texto);

        getchar();

        if (strlen(texto) > MAX) {
            printf("\n\t\t ---- Tamanho da Frase invalido !!![ TAM : %d]", strlen(texto));
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


/* ARRUMAR FUNCAO DE ANEXAR PALAVRAS */

void texto_anexar(char frase[], char palavra[]) {
    int i = 0;
    int j = 0;

    char nova_frase[MAX+1];



    int tamanho_frase = strlen(frase) - 1;
    int tamanho_palavra = strlen(palavra) - 1;

    while(i<=tamanho_frase) {
        char caracter = frase[i];

        /*  printf("\n SOL : %c", caracter); */

        if (i<MAX && j<MAX) {

            if(caracter=='\0') {
                i=tamanho_frase;
                j+=1;
            } else {
                nova_frase[j] = caracter;
            }

        }



        i+=1;
        j+=1;
    }

    i=0;

    while(i<=tamanho_palavra) {
        char caracter = palavra[i];

        if (i<MAX && j<MAX) {

            if(caracter=='\0') {
                i=tamanho_frase;
            } else {
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

void comparar(char* texto_1) {


    char texto_funcao[MAX+2];

    strcpy(texto_funcao,texto_1);
    texto_funcao[strlen(texto_1)] = ' ';

    int i =0;
    int tamanho =  strlen(texto_funcao);


    char palavra[MAX+1];
    int p=0;

    char texto_2[MAX+1];
    strcpy(texto_2,"");

    while(i<tamanho) {
        char caracter = texto_funcao[i];

        if (caracter == ' ') {

            palavra[p] = '\0';

            char temp_palavra[MAX+1];
            inverter(palavra,temp_palavra);


            texto_anexar(texto_2, temp_palavra);
            texto_anexar(texto_2, " ");

            p=0;
            strcpy(palavra,"");
        } else {
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

    strcpy(texto_1,"");


    printf("\n############ PROGRAMA INVERTE PALAVRAS #########################");

    Recebe_Frase(texto_1);


    printf("\n##################### RESULTADO  #################################");

    comparar(texto_1);

    printf("  Frase Nova : %s", texto_1);


    printf("\n###################################################################\n");

    return 0;

}
