#include<stdio.h >
#include<stdlib.h>

/* Escreva uma fun��o que receba um n�mero e mostre na tela se ele � primo ou n�o. */

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
