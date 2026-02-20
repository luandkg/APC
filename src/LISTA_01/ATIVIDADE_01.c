#include "ATIVIDADE_01_01.c"
#include "ATIVIDADE_01_02.c"
#include "ATIVIDADE_01_03.c"
#include "ATIVIDADE_01_04.c"
#include "ATIVIDADE_01_05.c"
#include "ATIVIDADE_01_06.c"
#include "../TESTE/TESTE.h"


int ATIVIDADE_01_TESTES(void){

    
    int resultado = 0;
    
    resultado+=VALIDAR("LISTA 01 :: ATIVIDADE 01 - TROCA DE VALORES :: 01",ATIVIDADE_01_01_TESTE_01_TROCAR_VALOR_TESTE_01());
    resultado+=VALIDAR("LISTA 01 :: ATIVIDADE 01 - TROCA DE VALORES :: 02",ATIVIDADE_01_01_TESTE_01_TROCAR_VALOR_TESTE_02());

    return resultado;
}