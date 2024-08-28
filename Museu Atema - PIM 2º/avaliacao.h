#ifndef AVALIACAO_H_INCLUDED
#define AVALIACAO_H_INCLUDED

// Estrutura
typedef struct
{
    char tema[50];
    int nota;
    char justificativa[255];
}Avaliacao;

int Avaliacao_main();
void SalvarEmArquivo();
void Relatorio_CSV();
void Menu_Avaliacao();


#endif // AVALIACAO_H_INCLUDED
