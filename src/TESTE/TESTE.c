#include "TESTE.h"

int atividade_sequencia = 0;

int VALIDAR(char*teste_nome,int resultado){

    atividade_sequencia+=1;

    if(resultado==TESTE_SUCESSO){
        printf("\t ++ TESTE - %d :: %s - OK\n",atividade_sequencia,teste_nome);
    }else{
        printf("\t ++ TESTE - %d :: %s - FALHOU\n",atividade_sequencia,teste_nome);
    }

    return resultado;
}