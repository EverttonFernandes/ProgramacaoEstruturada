#include<stdio.h>
#include<stdlib.h>

/* Elabore um programa que realize transa��es banc�rias entre clientes. Mostre na tela um
menu contendo 5 op��es. Caso a primeira op��o seja escolhida, dever� ser pedido para o
usu�rio informar o nome, conta banc�ria e saldo inicial de um cliente, e ent�o este cliente
deve ser cadastrado. Caso a segunda op��o seja escolhida, dever� ser pedido o n�mero de
duas contas banc�rias e um valor. Caso as duas contas existam, dever� ser realizado uma
transfer�ncia do valor informado da primeira conta para a segunda informada previamente.
Caso a terceira op��o seja escolhida, dever� ser feito um saque (valor removido) da conta
informada. Caso a quarta op��o seja escolhida, dever� ser feito um dep�sito. E caso a
quinta op��o seja escolhida, o programa dever� ser encerrado. O programa dever� carregar
e salvar automaticamente os dados banc�rios dos clientes em um arquivo externo. Cada
transa��o feita tamb�m dever� ser salva em um arquivo .txt contendo dados como conta de
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
