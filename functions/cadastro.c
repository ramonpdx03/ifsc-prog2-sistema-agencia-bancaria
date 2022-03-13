#include "../header.h"

int nova_conta(Cliente *CONTA, int COD_CONTA, char *NOME, char *TELEFONE, char *CPF, int SITUACAO, float SALDO) {
    if (!CONTA) return 0;

    CONTA->cod_conta = COD_CONTA;
    CONTA->nome = NOME;
    CONTA->telefone = TELEFONE;
    CONTA->cpf = CPF;
    CONTA->situacao = SITUACAO;
    CONTA->saldo = SALDO;

    return 1;
}

void cadastro() {
    Cliente *conta[100];
    int val_cod_conta;
    char val_nome[70];
    char val_telefone[20];
    char val_cpf[20];
    int val_situacao;
    float val_saldo;

    int i = 0;
    int sair;

    int max = 100;

    for (i = 0; i < max; i++) {
        system("cls");

        if (i > 9) {
            printf("Deseja registrar mais uma conta? (1 - Sim / 2- Nao) ");
            scanf("%d", &sair);
            system("cls");
        } else if (i == max) {
            printf("Limite de contas atingido!");
            system("pause");
        }

        if (sair == 2) break;

        printf("Cadastro da conta n.%d\n\n", i + 1);

        val_cod_conta = i + 1;

        printf("Nome do cliente: ");
        fflush(stdin);
        fgets(val_nome, 70, stdin);

        printf("Telefone (max 20c): ");
        fflush(stdin);
        fgets(val_telefone, 20, stdin);

        printf("CPF: ");
        fflush(stdin);
        fgets(val_cpf, 20, stdin);

        printf("Situacao (1 - ativo / 2 - inativo): ");
        scanf("%d", &val_situacao);
        
        printf("Deposito inicial: R$");
        scanf("%f", &val_saldo);

        conta[i] = malloc(sizeof(Cliente));
        if (nova_conta(conta[i], val_cod_conta, val_nome, val_telefone, val_cpf, val_situacao, val_saldo) == 0) {
            printf("Erro ao registrar conta");
            break;
        }
    }

    printf("\n");
}