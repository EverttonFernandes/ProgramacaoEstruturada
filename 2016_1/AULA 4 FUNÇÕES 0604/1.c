#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* Escreva uma fun��o que dado o valor de um n�mero presente em uma vari�vel global, mostre na tela se este n�mero � primo ou n�o.
 O n�mero deve ser informado pelo usu�rio na fun��o main. */

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
