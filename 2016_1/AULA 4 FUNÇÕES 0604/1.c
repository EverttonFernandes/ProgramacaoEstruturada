#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* Escreva uma função que dado o valor de um número presente em uma variável global, mostre na tela se este número é primo ou não.
 O número deve ser informado pelo usuário na função main. */

    int num;
void primo(){
int i=1;
int cont=0;
for(i=1 ; i<=num ; i++){
    if(num%i==0){
        cont++;
    }
}
    if(cont>2){
        printf("Nao e primo \n");
    }
    if(cont<2){
        printf("Nao e primo \n");
    }
    else{
        printf("E primo \n");
    }
}
main(){
    printf("Digite um numero: \n");
    scanf("%i",&num);
    primo();
}
