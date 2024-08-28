#ifndef CADASTRO_CLIENTE_H_INCLUDED
#define CADASTRO_CLIENTE_H_INCLUDED
#include <time.h>
#include <ctype.h>

#define TAMANHO_CPF 11

typedef struct {
    char nome[30];
    char cpf[TAMANHO_CPF + 1]; // Não é necessário espaço para pontos e traços aqui
    time_t data;
} Registro_CadastroCliente;

void Cadastro_cliente();

#endif // CADASTRO_CLIENTE_H_INCLUDED
