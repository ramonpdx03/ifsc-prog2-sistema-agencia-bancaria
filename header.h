#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//# MENU
const char *nome_agencia();
//# CADASTRO
void cadastro();
typedef struct {
    int cod_conta;
    char *nome;
    char *telefone;
    char *cpf;
    int situacao;
    float saldo;
} Cliente;
Cliente *conta[100];
//# MOVIMENTACOES
void movimentacoes();
//# CONSULTA
void consulta();
//

#endif