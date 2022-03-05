#include <stdio.h>
#include <string.h>

int nome_do_banco() {
    char nome_do_banco[255] = "";
    char a[255];
    FILE *pFile = fopen(".\\files\\nome_do_banco.txt", "r");

    //# adiciona espacos entre as palavras do arquivo;
    while (fscanf(pFile, "%s", a) != EOF) {
        strcat(a, " ");
        strcat(nome_do_banco, a);
    }
    nome_do_banco[strlen(nome_do_banco) - 1] = '\0'; //# remove o ultimo caractere (espaco);

    //# pega o length do arquivo e checa se está vazio;
    int len = ftell(pFile);
    if (len < 1) {
        printf("placeholder funcao alterar nome do banco");
        return 0;
    }

    fclose(pFile); //# colocar no final das funções file;

    return nome_do_banco;
}