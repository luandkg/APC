#include <stdio.h>
#include <math.h>
#include "../TESTE/TESTE.h"

int ATIVIDADE_02_06 (void);

static int TRIANGULO_ERRO_LADO_A = -1;
static int TRIANGULO_ERRO_LADO_B = -2;
static int TRIANGULO_ERRO_LADO_C = -3;

static int TRIANGULO_VALIDO_COMUM = 0;
static int TRIANGULO_VALIDO_RETANGULO = 1;

int triangulo_analisar(float a,float b,float c);

int ATIVIDADE_02_06_TESTE_TRIANGULO_TESTE_1(void);
int ATIVIDADE_02_06_TESTE_TRIANGULO_TESTE_2(void);
int ATIVIDADE_02_06_TESTE_TRIANGULO_TESTE_3(void);
int ATIVIDADE_02_06_TESTE_TRIANGULO_TESTE_4(void);
int ATIVIDADE_02_06_TESTE_TRIANGULO_TESTE_5(void);
