cmake_minimum_required(VERSION 3.10)

project(APC LANGUAGES C)


add_executable(testes src/main.c)
target_compile_definitions(testes PRIVATE MAIN=TESTES)
target_link_libraries(testes m)

## LISTA 1
add_executable(atividade_01_01 src/main.c)
target_link_libraries(atividade_01_01 m)
target_compile_definitions(atividade_01_01 PRIVATE MAIN=ATIVIDADE_01_01)

add_executable(atividade_01_02 src/main.c)
target_link_libraries(atividade_01_02 m)
target_compile_definitions(atividade_01_02 PRIVATE MAIN=ATIVIDADE_01_02)

add_executable(atividade_01_03 src/main.c)
target_link_libraries(atividade_01_03 m)
target_compile_definitions(atividade_01_03 PRIVATE MAIN=ATIVIDADE_01_03)

add_executable(atividade_01_04 src/main.c)
target_link_libraries(atividade_01_04 m)
target_compile_definitions(atividade_01_04 PRIVATE MAIN=ATIVIDADE_01_04)

add_executable(atividade_01_05 src/main.c)
target_link_libraries(atividade_01_05 m)
target_compile_definitions(atividade_01_05 PRIVATE MAIN=ATIVIDADE_01_05)

add_executable(atividade_01_06 src/main.c)
target_link_libraries(atividade_01_06 m)
target_compile_definitions(atividade_01_06 PRIVATE MAIN=ATIVIDADE_01_06)