#include<string.h>
#include<stdlib.h>
#include<stdio.h>

/* Escreva um programa que mostre na tela um menu com quatro opções: a - Consultar saldo, b - Realizar saque,
 c - Realizar depósito, d - Sair do programa. O programa somente deverá sair quando o usuário escolher a última opção do menu.
 Considere que o saldo inicia em 0 R$ e que caso as opções b ou c sejam escolhidas o programa deverá pedir um valor
  para reduzir ou adicionar ao saldo. Caso a opção a seja escolhida, mostre na tela o valor atual do saldo.
 A tarefa de limpar a tela e mostrar o menu deverá ser executada por uma função. */

 void opcoes(){
    system("cls");
    printf(" A)Consultar saldo: \n B) Realizar saque: \n C) Realizar deposito: \n D) Sair do programa: \n");
 }

 main(){

     char opcao;
     float saque;
     float saldo=0;
     float deposito;

    while(opcao!='D'){
    opcoes();
    scanf(" %c",&opcao);

    switch(opcao){
        case 'A':
            printf("Seu saldo e: %.2fR$ \n",saldo);
            break;
        case 'B':
            printf("Qual valor voce deseja sacar? \n");
            scanf("%f",&saque);
            saldo=deposito;
            if(saldo<saque){
                printf("Voce nao possui saldo: \n");
            }
            else{
                saldo-=saque;
            }
            break;
        case 'C':
            printf("Quanto voce deseja depositar? \n");
            scanf("%f",&deposito);
            saldo+=deposito;
            printf("Seu saldo e %.2fR$ \n",saldo);
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
