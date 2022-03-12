#include "../header.h"

const char *nome_agencia() {
    static char nome[40];
    FILE *pFile = fopen(".\\files\\nome_do_banco.txt", "r");

    //# pega os primeiros 40 caracteres do arquivo e coloca na variavel "nome"
    fscanf(pFile, "%40c", nome);

    //# pega o length do arquivo e checa se está vazio
    int len = ftell(pFile);
    if (len < 1) {
        printf("Insira o nome da agencia no arquivo nome_da_agencia.txt");
        return 0;
    }

    fclose(pFile); //# colocar no final das funções file

    return nome;
}
