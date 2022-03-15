#include "./header.h"

void main() {
    int option_main;

    do {
        system("cls"); //# limpa o console

        printf("Bem Vindo ao %s!\n\n", nome_agencia());
        printf("1 - Cadastro\n");
        printf("2 - Movimentacoes da conta\n");
        printf("3 - Editar\n");
        printf("4 - Consulta\n");
        printf("5 - Encerrar sessao\n\n");
        printf("Qual operacao deseja fazer? ");
        scanf("%d", &option_main);

        switch (option_main) {
            case 1:
                system("cls");
                cadastro();
                break;
            case 2:
                system("cls");
                movimentacoes();
                system("pause");
                break;
            case 3:
                system("cls");
                printf("placeholder editar");
                system("pause");
                break;
            case 4:
                system("cls");
                consulta();
                system("pause");
                break;
            case 5:
                system("cls");
                printf("\nVolte Sempre!");
                break;
        }
    } while (option_main != 5);
}