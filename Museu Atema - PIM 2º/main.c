#include "alterar_obra.h"
#include "cadastro_cliente.h"
#include "avaliacao.h"
#include <stdio.h>
#include <string.h>


int verifica_login_senha(const char *login, const char *senha) {
    const char *user_admin = "admin";
    const char *senha_admin = "admin123";

    if (strcmp(login, user_admin) == 0 && strcmp(senha, senha_admin) == 0) {
        return 1;
    }

    return 0;
}

int login_admin() {
    char login[50], senha[50];

    while (1) {
        printf("Digite o login: ");
        scanf("%s", login);

        printf("Digite a senha: ");
        scanf("%s", senha);

        if (verifica_login_senha(login, senha)) {
            printf("Acesso concedido!");
            return 1;
        } else {
            printf("Acesso negado! Tente novamente.\n");
        }
    }
}

void menu_principal() {
    int opcao;

    do {
        login_admin();

        printf("O que voce quer fazer?\n");
        printf("  1 - Cadastrar tema/obras\n");
        printf("  2 - Consultar temas/obras\n");
        printf("  3 - Alterar temas/obras\n");
        printf("  4 - Excluir temas/obras\n");
        printf("  5 - Cadastrar visitantes\n");
        printf("  6 - Avaliar visita\n");
        printf("  7 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Aguardando funcao de cadastro de temas.\n");
                break;

            case 2:
                printf("Aguardando funcao de consulta de temas.\n");
                break;

            case 3:
                alterarobras_main();
                break;

            case 4:
                printf("Aguardando funcao de cadastro de visitantes.\n");
                break;

            case 5:
                Cadastro_cliente();
                break;

            case 6:
                Menu_Avaliacao();
                break;

            case 7:
                printf("Saindo do programa. Ate logo!\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao != 6 && opcao != 7);
}


int main() {
    menu_principal();
}
