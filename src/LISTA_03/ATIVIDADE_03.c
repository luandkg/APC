#include "ATIVIDADE_03.h"


int ATIVIDADE_03_TESTES(void){

    int resultado = 0;

    resultado+=VALIDAR("LISTA 03 :: ATIVIDADE 01 - CONTAGEM                     :: 01",ATIVIDADE_03_01_TESTE_CONTAGEM_TESTE_1());
    resultado+=VALIDAR("LISTA 03 :: ATIVIDADE 01 - CONTAGEM                     :: 02",ATIVIDADE_03_01_TESTE_CONTAGEM_TESTE_2());
    resultado+=VALIDAR("LISTA 03 :: ATIVIDADE 01 - CONTAGEM                     :: 03",ATIVIDADE_03_01_TESTE_CONTAGEM_TESTE_3());


    resultado+=VALIDAR("LISTA 03 :: ATIVIDADE 02 - SOMATORIO                    :: 01",ATIVIDADE_03_02_TESTE_SOMATORIO_TESTE_1());
    resultado+=VALIDAR("LISTA 03 :: ATIVIDADE 02 - SOMATORIO                    :: 02",ATIVIDADE_03_02_TESTE_SOMATORIO_TESTE_2());
    resultado+=VALIDAR("LISTA 03 :: ATIVIDADE 02 - SOMATORIO                    :: 03",ATIVIDADE_03_02_TESTE_SOMATORIO_TESTE_3());

    return resultado;
}
