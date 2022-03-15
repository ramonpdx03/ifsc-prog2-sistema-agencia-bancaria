#include "../header.h"

void clientes_agencia() {
    printf("%s", &conta[1]->cod_conta);
    system("pause");
}

void movimentacoes_cliente() {
    int n;
    printf("De que cliente deseja consultar? ");
    scanf("%d", &n);
}

void dados_cliente() {
    int n;
    printf("De que cliente deseja consultar? ");
    scanf("%d", &n);

    printf("%s\n", conta[n]->cod_conta);
    printf("%s\n", conta[n]->nome);
    printf("%s\n", conta[n]->telefone);
    printf("%s\n", conta[n]->cpf);
    printf("%s\n", conta[n]->situacao);
    printf("%s\n", conta[n]->saldo);
}

void sem_saldo() {
     //isso funciona?
    
}

void maior_saldo() {
    printf("O maior saldo e mais de 8 mil");
}

void media_saldo() {
    printf("Media dos saldos");
}

void consulta() {
    int opcao_consulta;

    do {
        printf("O que deseja consultar?\n\n");
        printf("1 - Clientes da agencia\n");
        printf("2 - Movimentacoes de clientes\n");
        printf("3 - Dados de clientes\n");
        printf("4 - Clientes sem saldo\n");
        printf("5 - Cliente com maior saldo\n");
        printf("6 - Media de saldo\n");
        printf("7 - Retornar\n");
        printf("\nSelecione uma opcao: ");
        scanf("%d", &opcao_consulta);

        switch (opcao_consulta) {
            case 1:
                clientes_agencia();
                break;
            case 2:
                movimentacoes_cliente();
                break;
            case 3:
                dados_cliente();
                break;
            case 4:
                sem_saldo();
                break;
            case 5:
                maior_saldo();
                break;
            case 6:
                media_saldo();
                break;
            default:
                break;
        }
    } while (opcao_consulta != 7);
}