#include "LISTA_01/ATIVIDADE_01.h"
#include "LISTA_02/ATIVIDADE_02.h"

#include "TESTE/TESTE.h"



int TESTES(void);

int main(){

    return MAIN();
}




int TESTES(void){

    printf("---------------------------------------------- TESTES UNITÁRIOS  -----------------------------------------\n");
    printf("\n");

    int resultado = 0;

    printf("LISTA 01\n");
    resultado+=ATIVIDADE_01_TESTES();

    printf("LISTA 02\n");
    resultado+=ATIVIDADE_02_TESTES();

    printf("\n");

    if (resultado == 0) {
        printf(">> TODOS OS TESTES PASSARAM\n");
    } else {
        if (resultado == 1){
            printf(">> PROBLEMA - %d TESTE FALHOU\n", resultado);
        }else{
            printf(">> PROBLEMA - %d TESTES FALHARAM\n", resultado);
        }
    }


    return resultado;
}