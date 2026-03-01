#include "ATIVIDADE_02.h"


int ATIVIDADE_02_TESTES(void){

    
    int resultado = 0;

    resultado+=VALIDAR("LISTA 02 :: ATIVIDADE 01 - IGUALDADE                    :: 01",ATIVIDADE_02_01_TESTE_IGUALDADE_TESTE_1());
    resultado+=VALIDAR("LISTA 02 :: ATIVIDADE 01 - IGUALDADE                    :: 02",ATIVIDADE_02_01_TESTE_IGUALDADE_TESTE_2());
    resultado+=VALIDAR("LISTA 02 :: ATIVIDADE 01 - IGUALDADE                    :: 03",ATIVIDADE_02_01_TESTE_IGUALDADE_TESTE_3());

    resultado+=VALIDAR("LISTA 02 :: ATIVIDADE 02 - MAIOR                        :: 01",ATIVIDADE_02_02_TESTE_MAIOR_TESTE_1());
    resultado+=VALIDAR("LISTA 02 :: ATIVIDADE 02 - MAIOR                        :: 02",ATIVIDADE_02_02_TESTE_MAIOR_TESTE_2());
    resultado+=VALIDAR("LISTA 02 :: ATIVIDADE 02 - MAIOR                        :: 03",ATIVIDADE_02_02_TESTE_MAIOR_TESTE_3());

    return resultado;
}