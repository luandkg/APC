/*  ============================================================================
        Universidade de Brasilia
        Instituto de Ciencias Exatas
        Departamento de Ciencia da Computacao
        Algoritmos e Programação de Computadores – 1/2018
        Aluno(a): LUAN ALVES FREITAS
        Matricula: 17 003191
        Turma: H
        Versão do compilador: gcc version 5.4.0 20160609 (Ubuntu 5.4.0-6ubuntu1~16.04.9)
        Descricao: Programa Elimina Letras
 ============================================================================ */

#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>


void bem_vindo();
void menu_principal();
void limpar_tela();
void tela_sair();
void tela_configuracoes();
void Configuracoes_Ler();
void Configuracoes_Escrever();
int mensagem_validacao();

#ifdef  _WIN32
#define  CLEAR  “cls”
#else
#define  CLEAR  “clear”
#endif


char caracteres[11];    /* caracteres para preencher a matriz do jogo */
int linhas, colunas;    /* dimensoes da matriz */
float base_pontos;      /* base para a pontuacao no jogo */


void limpar_tela() {
    system("clear");
}

void menu_principal() {

    /* TELA DE MENU PRINCIPAL DO JOGO */

    /* OPCOES

            - Comando 1 para JOGAR
            - Comando 2 para listar o RANKING
            - Comando 3 para exibir menu de CONFIGURACOES
            - Comando 4 para sair do JOGO
            - Outros comandos mostram tela de erro e pergunta novamente o comando

    */


    limpar_tela();

    int jogando = 1;

    while (jogando ==1 ) {



        printf("\n#########################################################");
        printf("\n#####   MENU PRINCIPAL : ELIMINA - LETRAS           #####");
        printf("\n#########################################################");

        printf("\n");

        int resp = 0;

        printf("\n 1 - JOGAR ");
        printf("\n 2 - RANKING ");
        printf("\n 3 - CONFIGURACOES ");
        printf("\n 4 - SAIR ");

        printf("\n ---------------------------------------");

        printf("\nComando : ");
        scanf("%d" , &resp);

        switch (resp) {
        case 1:

            limpar_tela();
            printf("\n#########################################################");
            printf("\n#####          Trabalho Prático 2 – parte 1         #####");
            printf("\n#########################################################\n");
            printf("\n");
            break;

        case 2:

            limpar_tela();
            printf("\n#########################################################");
            printf("\n#####          Trabalho Prático 2 – parte 2         #####");
            printf("\n#########################################################\n");
            printf("\n");

            break;

        case 3:

            tela_configuracoes();
            limpar_tela();
            break;

        case 4:

            jogando = 0;
            tela_sair();
            break;

        default:

            limpar_tela();
            printf("\n#########################################################");
            printf("\n#####   COMANDO INVALIDO - Tente Novamente          #####");
            printf("\n#########################################################\n");
            printf("\n");

            break;
        }



    }
}

void tela_sair() {

  /* TELA SAIR DO PROGRAMA */
    limpar_tela();

    printf("\n#########################################################");
    printf("\n#####   OBRIGADO POR JOGARL : ELIMINA - LETRAS      #####");
    printf("\n#########################################################\n");

}


/* TELA DE CONFIGURACOES DO JOGO */

void tela_configuracoes() {


    /* OPCOES

            - Comando 1 para mudar caracteres do jogo
            - Comando 2 para mudar quantidade de linhas do jogo
            - Comando 3 para mudar quantidade de colunas do jogo
            - Comando 4 para mudar a pontuacao base do jogo
            - Comando 5 para retornar ao menu principal do jogo
            - Outros comandos mostram tela de erro e pergunta novamente o comando

    */

    limpar_tela();

    int configurando = 1;

    while (configurando ==1 ) {



        printf("\n#########################################################");
        printf("\n#####   CONFIGURACOES : ELIMINA - LETRAS            #####");
        printf("\n#########################################################\n");


        int resp = 0;




        printf("\n 1 - Mudar Caracteres :  \t\t%s", caracteres);
        printf("\n 2 - Mudar Linhas :   \t\t\t%d",linhas);
        printf("\n 3 - Mudar Colunas :  \t\t\t%d  ",colunas);
        printf("\n 4 - Mudar Pontuacao Base :    \t\t%0.3f", base_pontos);
        printf("\n 5 - Menu  Principal  ");

        printf("\n ---------------------------------------");

        printf("\nComando : ");
        scanf("%d" , &resp);

        char tc[11];
        int ilinhas = 0;
        int icolunas =0;
        float ipontuacao = 0;

        switch (resp) {
        case 1:

            /* ALTERA OS CARACTERES DO JOGO */
            printf("\nInsira novos caracteres [Min : 3 - Max: 10] : ");
            scanf("%s" , tc);

            if( strlen(tc) >=3 && strlen(tc)<=10) {


                if (mensagem_validacao() == 0) {

                    strcpy(caracteres,tc);
                    Configuracoes_Escrever();

                }


            } else {

                limpar_tela();
                printf("\n#########################################################");
                printf("\n#####   Tamanho dos Caracteres Invalido             #####");
                printf("\n#########################################################\n");
                printf("\n");


            }




            break;
        case 2:

            /* ALTERA A QUANTIDADE DE LINHAS DO JOGO */
            printf("\nQuantidade de Linhas : ");
            scanf("%d" , &ilinhas);

            if( ilinhas > 0) {

                if (mensagem_validacao() == 0) {

                    linhas = ilinhas;
                    Configuracoes_Escrever();

                }



            } else {

                limpar_tela();
                printf("\n#########################################################");
                printf("\n#####   o numero de linhas deve ser maior que 0     #####");
                printf("\n#########################################################\n");
                printf("\n");


            }


            break;
        case 3:

            /* ALTERA A QUANTIDADE DE COLUNAS DO JOGO */
            printf("\nQuantidade de Colunas : ");
            scanf("%d" , &icolunas);

            if( icolunas > 0) {

                if (mensagem_validacao() == 0) {

                    colunas = icolunas;
                    Configuracoes_Escrever();

                }

            } else {

                limpar_tela();
                printf("\n#########################################################");
                printf("\n#####   o numero de colunas deve ser maior que 0     #####");
                printf("\n#########################################################\n");
                printf("\n");


            }


            break;
        case 4:

            /* ALTERA O VALOR DA PONTUACAO DO JOGO */
            printf("\n Valor da Pontuacao : ");
            scanf("%f" , &ipontuacao);

            if( ipontuacao > 0) {



                if (mensagem_validacao() == 0) {

                    base_pontos = ipontuacao;
                    Configuracoes_Escrever();

                }


            } else {

                limpar_tela();
                printf("\n#########################################################");
                printf("\n#####   o valor da Pontuacao deve ser maior que 0   #####");
                printf("\n#########################################################\n");
                printf("\n");


            }


            break;
        case 5:
            configurando = 0;
            break;
        default:

            /* MENSAGEM DE ERRO - COMANDO INVALIDO */
            limpar_tela();

            printf("\n#########################################################");
            printf("\n#####     OPCAO INVALIDA - Tente Novamente !!!!    #####");
            printf("\n#########################################################\n");
            printf("\n");

            break;
        }



    }


}

void Configuracoes_Ler() {

    /* ARQUIVO DE CONFIGURACOES - FUNCAO DE LEITURA */

    FILE *configuracoes;
    configuracoes = fopen("jogo.txt", "r");

    int existe = 1;

    if (configuracoes == NULL) {
        existe = 0;
    } else {
        existe=1;

        char temp[11];


        fscanf(configuracoes,"%d",&linhas);
        fscanf(configuracoes,"%1c",temp);
        fscanf(configuracoes,"%d",&colunas);
        fscanf(configuracoes,"%1c",temp);
        fscanf(configuracoes,"%f",&base_pontos);
        fscanf(configuracoes,"%1c",temp);
        fscanf(configuracoes,"%s",caracteres);


        fclose(configuracoes);
    }



    if (existe==0) {

        existe=0;
        linhas =6;
        colunas = 9;
        base_pontos=1.5;

        strcpy(caracteres,"OZXM");

        Configuracoes_Escrever();

    }


}

void Configuracoes_Escrever() {

    /* ARQUIVO DE CONFIGURACOES - FUNCAO DE ESCRITA */
    FILE *configuracoes;
    configuracoes = fopen("jogo.txt", "w");

    if (configuracoes == NULL) {

    } else {

        fprintf(configuracoes, "%d", linhas);
        fprintf(configuracoes, "#");
        fprintf(configuracoes, "%d", colunas);
        fprintf(configuracoes, "#");
        fprintf(configuracoes, "%f", base_pontos);
        fprintf(configuracoes, "#");
        fprintf(configuracoes, "%s", caracteres);

    }

    fclose(configuracoes);

}

void bem_vindo() {

  /* TELA DE BEM VINDO */
    char c;

    printf("\n#########################################################");
    printf("\n#####   BEM-VINDO a ELIMINA - LETRAS                #####");
    printf("\n#########################################################");

    printf("\n");

    printf("\n#### - Aperte ENTER para continuar !!!! ");

    scanf("%c", &c);

}

int mensagem_validacao() {

  /* ROTINA DE CONFIRMAACAO PARA SALVAR ALTERACOES NAS CONFIGURACOES */
  /* s ou S - Para Confirmar  */
  /*  */

    int resposta = 1;


    printf("\n Deseja confirmar essa acao [S/N] ? ");
    char confirma[255];
    scanf("%s" , confirma);

    if ((strcmp(confirma,"s") == 0 ) || (strcmp(confirma,"S") == 0)  ) {

        resposta = 0;

        limpar_tela();
        printf("\n#########################################################");
        printf("\n#####          Dados Salvos Com SUCESSO             #####");
        printf("\n#########################################################\n");


    } else {

        resposta = 1;

        limpar_tela();
        printf("\n#########################################################");
        printf("\n#####               OPERACAO CANCELADA              #####");
        printf("\n#########################################################\n");


    }

    return resposta;


}



int main () {

    /* PROGRAMA ELIMINALETRAS */
    Configuracoes_Ler();

    limpar_tela();

    bem_vindo();

    menu_principal();

    return 0;

}
