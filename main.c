#include "./header.h"

void main() {
    int option_main;

    do {
        system("cls"); //# limpa o console

        printf("Bem Vindo ao %s!\n\n1 - Cadastro\n2 - Movimentacoes da conta\n3 - Editar\n4 - Consulta\n5 - Encerrar sessao\n\nQual operacao deseja fazer? ", nome_agencia());
        scanf("%d", &option_main);

        switch (option_main) {
            case 1:
                system("cls");
                cadastro();
                system("pause");
                break;
            case 2:
                system("cls");
                printf("placeholder movimentacoes");
                system("pause");
                break;
            case 3:
                system("cls");
                printf("placeholder editar");
                system("pause");
                break;
            case 4:
                system("cls");
                printf("placeholder consulta");
                system("pause");
                break;
            case 5:
                system("cls");
                printf("\nVolte Sempre!");
                system("pause");
                break;
        }
    } while (option_main != 5);
}