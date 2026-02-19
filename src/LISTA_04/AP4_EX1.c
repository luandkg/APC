/*  ============================================================================
 ESTUDANTE      : Luan Alves Freitas
 MATRICULA     	: 17.0003191
 Copyright   	: FREITAS @ COPYRIGHTS
 CURSO		: COMPUTACAO
 TURNO		: NOTURNO
 DISCIPLINA	: APC - Algoritmos de Programacao de Computadores
 LISTA		: 04
 QUESTAO	: 01
 ============================================================================ */


#include <stdio.h>
int main () {

    int ano;
    char sexo;

    printf("Informe o sexo: ");
    scanf("%c",&sexo);

    while ((sexo != 'f') && (sexo != 'F') && (sexo != 'm') && (sexo != 'M')){
       printf("\nErro! "); 
       printf("\nInforme o sexo novamente: ");
       getchar();
       scanf("%c",&sexo);
    }

    printf("Informe o ano: ");
    scanf("%d",&ano);
    printf("Saida - Ano = %d e Sexo = %c\n", ano, sexo);
    


    return (0);

}

