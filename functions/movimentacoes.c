#include "../header.h"

void saque() {
    int saque, p;
    printf("\nInsira o numero da conta: ");
    scanf("%d", &p);

    switch (conta[p]->situacao) {
        case 1:
            printf("\nQual a quantidade que deseja sacar? R$");
            scanf("%d", &saque);
                if (saque <= 0) {
                    printf("\nInsira um valor valido!\n\n");
                    break;
                }
            else
                if (conta[p]->saldo < saque) {
                    printf("\nSaldo insuficiente para realizar essa operacao!\n");
                    break;
                }

            conta[p]->saldo = conta[p]->saldo - saque;

            printf("\nOperacao realizada com sucesso!");
            printf("\nSaldo atual: R$%.2f\n\n", conta[p]->saldo);
        break;

        case 2:
            printf("\nConta inativa!\n\n");
            break;
        }

}

void deposito() {
    int deposito, p;
    printf("\nInsira o numero da conta: ");
    scanf("%d", &p);

    switch (conta[p]->situacao) {
        case 1:
            printf("\nQual a quantidade que deseja depositar? R$");
            scanf("%d", &deposito);
                if (deposito <= 0) {
                    printf("\nInsira um valor valido!\n\n");
                    break;
                }

            conta[p]->saldo = conta[p]->saldo + deposito;

            printf("\nOperacao realizada com sucesso!");
            printf("\nSaldo atual: R$%.2f\n\n", conta[p]->saldo);
        break;

        case 2:
            printf("\nConta inativa!\n\n");
            break;
        }
}

void pagamento() {
    int pagamento, p;
    printf("\nInsira o numero da conta: ");
    scanf("%d", &p);

    switch (conta[p]->situacao) {
        case 1:
            printf("\nQual a quantidade que deseja pagar? R$");
            scanf("%d", &pagamento);
                if (pagamento <= 0) {
                    printf("\nInsira um valor valido!\n\n");
                    break;
                }
            else
                if (conta[p]->saldo < pagamento) {
                    printf("\nSaldo insuficiente para realizar essa operacao!\n");
                    break;
                }

            conta[p]->saldo = conta[p]->saldo - pagamento;

            printf("\nOperacao realizada com sucesso!");
            printf("\nSaldo atual: R$%.2f\n\n", conta[p]->saldo);
        break;

        case 2:
            printf("\nConta inativa!\n\n");
            break;
        }
}


void movimentacoes() {

    int operacao, p;

    do {
        printf("Que tipo de operacao deseja realizar? ");
        printf("\n\n1 - Saque");
        printf("\n2 - Deposito");
        printf("\n3 - Pagamento");
        printf("\n4 - Voltar");
        printf("\n\nSelecione uma opcao: ");
        scanf("%d", &operacao);

        switch (operacao) {
                case 1:
                    saque();
                    break;
                case 2:
                    deposito();
                    break;
                case 3:
                    pagamento();
                    break;
                default:
                    break;
            }
    } while (operacao != 4);
}
