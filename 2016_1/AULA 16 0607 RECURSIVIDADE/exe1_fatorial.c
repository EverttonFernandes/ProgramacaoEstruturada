#include<stdio.h>

/* Escrever uma função recursiva que calcule o fatorial. */

int fatorial(int n){
    if(n==1){
        return 1;
    }
    return n*fatorial(n-1);
}
main(){
    int n;
    printf("Digite um numero: \n");
    scanf("%i",&n);
    int resultado=fatorial(n);
    printf("%i",resultado);
}
