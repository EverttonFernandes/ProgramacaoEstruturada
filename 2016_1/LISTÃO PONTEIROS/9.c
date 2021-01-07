#include<stdio.h>
#include<stdlib.h>


/* Escreva um trecho de código que divida o conteúdo de uma variável X por 2 sem utilizar o X na expressão. */

main(){

    int x;
    int *p;
    int resultado;

    printf("Digite um numero: \n");
    scanf("%i",&x);

    p=&x;
    resultado=*p/2;

    printf("%i/2=%i ",*p,resultado);

}
