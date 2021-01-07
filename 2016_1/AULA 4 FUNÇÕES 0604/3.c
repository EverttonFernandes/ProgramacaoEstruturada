#include<stdio.h>
#include<stdlib.h>

/* Escreva um programa que mostre na tela um menu com quatro op��es:
a - Consultar saldo, b - Realizar saque, c - Realizar dep�sito, d - Sair do programa.
O programa somente dever� sair quando o usu�rio escolher a �ltima op��o do menu.
Considere que o saldo inicia em 0 R$ e que caso as op��es b ou c sejam escolhidas
o programa dever� pedir um valor para reduzir ou adicionar ao saldo. Caso a op��o a seja escolhida,
mostre na tela o valor atual do saldo. A tarefa de limpar a tela e mostrar o menu dever� ser executada por uma fun��o.
Crie uma fun��o para realizar cada uma das tr�s tarefas do menu por uma fun��o diferente.
A �nica vari�vel global permitida � a do saldo. */

float saldo=0;

void opcoes(){
    system("cls");
    printf(" A)Consultar saldo: \n B) Realizar saque: \n C) Realizar deposito: \n D) Sair do programa: \n");
}
void saque(){

    float saque;
    printf("Qual valor voce deseja sacar? \n");
    scanf("%f",&saque);
    if(saldo<saque){
        printf("Voce nao possui saldo: \n");
    }
    else{
        saldo-=saque;
    }
}
void deposito(){

    float deposito;
    printf("Quanto voce deseja depositar? \n");
    scanf("%f",&deposito);
    saldo+=deposito;
    printf("Seu saldo e %.2fR$ \n",saldo);
}

 main(){

     char opcao;

    while(opcao!='D'){
    opcoes();
    scanf(" %c",&opcao);

    switch(opcao){
        case 'A':
            printf("Seu saldo e: %.2fR$ \n",saldo);
            break;
        case 'B':
            saque();
            break;
        case 'C':
            deposito();
            break;
        case 'D':
            opcoes();
            break;
        default:
            printf("Opcao invalida \n");
    }
    getch();
    }

 }
