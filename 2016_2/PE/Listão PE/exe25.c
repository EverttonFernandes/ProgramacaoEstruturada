#include<stdio.h>
#include<stdlib.h>

/* Elabore um programa que realize transações bancárias entre clientes. Mostre na tela um
menu contendo 5 opções. Caso a primeira opção seja escolhida, deverá ser pedido para o
usuário informar o nome, conta bancária e saldo inicial de um cliente, e então este cliente
deve ser cadastrado. Caso a segunda opção seja escolhida, deverá ser pedido o número de
duas contas bancárias e um valor. Caso as duas contas existam, deverá ser realizado uma
transferência do valor informado da primeira conta para a segunda informada previamente.
Caso a terceira opção seja escolhida, deverá ser feito um saque (valor removido) da conta
informada. Caso a quarta opção seja escolhida, deverá ser feito um depósito. E caso a
quinta opção seja escolhida, o programa deverá ser encerrado. O programa deverá carregar
e salvar automaticamente os dados bancários dos clientes em um arquivo externo. Cada
transação feita também deverá ser salva em um arquivo .txt contendo dados como conta de
origem, destino (caso haja) e valor. */

main(){

    FILE *arq;
    int opcoes;
    char nome[20];
    int conta;
    int saldo;

    printf("Escolha uma das opcoes: \n1)\n2)\n3)\n4)\n5)");
    scanf("%i",&opcoes);

    switch(opcoes){
    case 1:
        sistem(cls);

    break;
    }

}
