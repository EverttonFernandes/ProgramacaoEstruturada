#include<stdio.h >
#include<stdlib.h>

/* Escreva uma função que receba um número e mostre na tela se ele é primo ou não. */

void primo(int number){
    int i;
    int cont=0;
    int primos;
    for(i=1 ; i<=number ; i++){
        if(number%i==0){
            cont++;
        }
    }
    if(cont==2){
        printf("E primo \n");
    }
    else{
        printf("Nao e primo \n");
    }
}

main(){

    int n;
    printf("Informe um numero: \n");
    scanf("%i",&n);
    primo(n);

}
