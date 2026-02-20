cmake_minimum_required(VERSION 3.10)
project(APC LANGUAGES C)

# Função auxiliar para criar executáveis de atividades
function(add_atividade nome macro)
    add_executable(${nome} src/main.c src/TESTE/TESTE.c)  # inclui teste.c em todos
    target_compile_definitions(${nome} PRIVATE MAIN=${macro})
    target_link_libraries(${nome} m) # sempre linka com math
endfunction()

# Lista de atividades
set(ATIVIDADES
    TESTES
    ATIVIDADE_01_01
    ATIVIDADE_01_02
    ATIVIDADE_01_03
    ATIVIDADE_01_04
    ATIVIDADE_01_05
    ATIVIDADE_01_06
)

# Cria todos os executáveis automaticamente
foreach(ATV ${ATIVIDADES})
    string(TOLOWER ${ATV} NOME_EXECUTAVEL) 
    add_atividade(${NOME_EXECUTAVEL} ${ATV})
endforeach()
