#include<stdio.h>
#include<stdlib.h>

/* O que é e para que serve o protótipo de uma função?
Mostre um exemplo de sua utilização em uma programa, bem como o mesmo exemplo sem a utilização do protótipo. */

int f1(int v1, int v2);

main(){
    int t = f1(10,5);
    printf("%i",t);
}

int f1(int v1, int v2){
    return v1+v2;
}
