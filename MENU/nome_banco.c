#include "../header.h"

const char *nome_banco() {
    static char nome[40] = "";
    char format[40];
    FILE *pFile = fopen(".\\files\\nome_do_banco.txt", "r");

    //# adiciona espacos entre as palavras do arquivo;
    while (fscanf(pFile, "%s", format) != EOF) {
        strcat(format, " ");
        strcat(nome, format);
    }
    nome[strlen(nome) - 1] = '\0'; //# remove o ultimo caractere (espaco);

    //# pega o length do arquivo e checa se está vazio;
    int len = ftell(pFile);
    if (len < 1) {
        printf("placeholder funcao alterar nome do banco");
        return 0;
    }

    fclose(pFile); //# colocar no final das funções file;

    return nome;
}
