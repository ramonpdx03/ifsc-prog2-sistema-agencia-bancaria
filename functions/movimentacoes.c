#include "../header.h"

void saque() {
    int p, saque;
    printf("Insira o numero da conta: ");
    scanf("%d", &p);
    if (conta[p]->situacao = 2) {
        printf("Conta inativa!");
    }

    printf("\nQual a quantidade que deseja sacar? ");
    scanf("%d", &saque);
    if (saque <= 0) {
        printf("Insira um valor valido!");
    }
    if (conta[p]->saldo < saque) {
        printf("Saldo insuficiente para realizar essa operacao!");
    }

    conta[p]->saldo = conta[p]->saldo - saque;

    printf("Operacao realizada com sucesso!\n");
    printf("Saldo atual: %.2f", conta[p]->saldo);

}

void deposito() {
    int p, deposito;
    printf("Insira o numero da conta: ");
    scanf("%d", &p);

    if (conta[p]->situacao = 2) {
        printf("Conta inativa!");
    }

    printf("\nQual a quantidade que deseja depositar? ");
    scanf("%d", &deposito);
    if (deposito <= 0) {
        printf("Insira um valor valido!");
    }

    conta[p]->saldo = conta[p]->saldo + deposito;

    printf("Operacao realizada com sucesso!\n");
    printf("Saldo atual: %.2f", conta[p]->saldo);
}

void pagamento() {
    int p, pagamento;
    printf("Insira o numero da conta");
    scanf("%d", &p);
    if (conta[p]->situacao = 2) {
        printf("Conta inativa!");
    }

    printf("\nQual a quantidade que deseja pagar? ");
    scanf("%d", &pagamento);
    if (pagamento <= 0) {
        printf("Insira um valor valido!");
    }

    if (conta[p]->saldo < pagamento) {
        printf("Saldo insuficiente para realizar essa operacao!");
    }

    conta[p]->saldo = conta[p]->saldo - pagamento;

    printf("Operacao realizada com sucesso!\n");
    printf("Saldo atual: %.2f", conta[p]->saldo);
}

void movimentacoes() {

    int operacao;

    do {
        printf("Que tipo de operacao deseja realizar?");
        printf("\n\n1 - Saque");
        printf("\n2 - Deposito");
        printf("\n3 - Pagamento");
        printf("\n\nSelecione uma opcao ");
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
            }
    } while (operacao != 4);
}