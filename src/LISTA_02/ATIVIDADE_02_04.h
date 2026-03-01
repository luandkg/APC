#include <stdio.h>
#include <math.h>
#include "../TESTE/TESTE.h"

int ATIVIDADE_02_04 (void);

static int RESPOSTA_XY_DENTRO = 0;
static int RESPOSTA_Y_NA_LINHA = -1;
static int RESPOSTA_X_NA_LINHA = -2;
static int RESPOSTA_Y_FORA = -3;
static int RESPOSTA_X_FORA = -4;

int espaco_quadrado_ponto_dentro(float origem_x,float origem_y,float altura,float largura,float ponto_x,float ponto_y) ;

int ATIVIDADE_02_04_TESTE_DENTRO_TESTE_1(void);
int ATIVIDADE_02_04_TESTE_DENTRO_TESTE_2(void);
int ATIVIDADE_02_04_TESTE_DENTRO_TESTE_3(void);

int ATIVIDADE_02_04_TESTE_X_FORA_TESTE_1(void);
int ATIVIDADE_02_04_TESTE_X_FORA_TESTE_2(void);
int ATIVIDADE_02_04_TESTE_X_FORA_TESTE_3(void);

int ATIVIDADE_02_04_TESTE_Y_FORA_TESTE_1(void);
int ATIVIDADE_02_04_TESTE_Y_FORA_TESTE_2(void);
int ATIVIDADE_02_04_TESTE_Y_FORA_TESTE_3(void);

int ATIVIDADE_02_04_TESTE_X_LINHA_TESTE_1(void);
int ATIVIDADE_02_04_TESTE_X_LINHA_TESTE_2(void);
int ATIVIDADE_02_04_TESTE_X_LINHA_TESTE_3(void);

int ATIVIDADE_02_04_TESTE_Y_LINHA_TESTE_1(void);
int ATIVIDADE_02_04_TESTE_Y_LINHA_TESTE_2(void);
int ATIVIDADE_02_04_TESTE_Y_LINHA_TESTE_3(void);