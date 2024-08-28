#ifndef ALTERAR_OBRA_H_INCLUDED
#define ALTERAR_OBRA_H_INCLUDED

//Estrutura alterar_obra.c
typedef struct {
    int id;
    char tema[50], obra_1[255], obra_2[255], obra_3[255], descricao_1[255], descricao_2[255], descricao_3[255];
} Registro;

void mostrarInformacoes(Registro registro);
void alterarCampo(Registro *registro, int opcao);
void alterarRegistro(FILE *arquivo, int id_busca);
void alterarobras_main();

#endif // ALTERAR_OBRA_H_INCLUDED