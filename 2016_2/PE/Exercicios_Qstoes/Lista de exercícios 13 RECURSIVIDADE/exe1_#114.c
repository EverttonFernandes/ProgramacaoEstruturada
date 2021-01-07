#include<stdio.h>

#include<stdio.h>

/// Escrever uma função recursiva que calcule o fatorial.

int fatorial(int n);
main(){
    int n;
    printf("Digite um numero para descobrirmos o fatorial do mesmo: \n");
    scanf("%i",&n);

    int resultado = fatorial(n);
    printf("O resultado eh: %i\n",resultado);
}
int fatorial(int n){
    if(n==0){
        return 1;///Se o usuário digitar 0 retorna 1 ao main senão calcula o fatorial
    }
    else{
        return n*fatorial(n-1);
            /** 3 * 2 = 6
                2 * 1
                1 * 1
                0 *
             **/
    }
}
