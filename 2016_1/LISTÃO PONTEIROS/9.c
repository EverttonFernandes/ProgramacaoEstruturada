#include<stdio.h>
#include<stdlib.h>


/* Escreva um trecho de c�digo que divida o conte�do de uma vari�vel X por 2 sem utilizar o X na express�o. */

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
