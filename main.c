#include <stdio.h>
#include <string.h>

// --- FUNCTIONS --- //
#include "functions/nome_do_banco.h"
//

int main() {
    int option;

    do {
        printf("\nBem Vindo ao %s!\n\n1 - Cadastro\n2 - Movimentacoes da conta\n3 - Editar\n4 - Consulta\n5 - Encerrar sessao\n\nEscolha uma opcao: ", nome_do_banco());
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("placeholder cadastrar");
                break;
            case 2:
                printf("placeholder editar");
                break;
            case 3:
                printf("placeholder movimentacoes");
                break;
            case 4:
                printf("placeholder consulta");
                break;
            case 5:
                printf("\nVolte Sempre!");
                break;
        }
    } while (option != 5);

    return 0;
}