#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/* AULA 1: Escreva um programa que gere números entre 1 e 10 até que cada número tenha sido sorteado pelo menos 5 vezes. */

main(){

    srand(time(NULL));
    int n;
    int cont[10];
    int i=0;

    for(i=0 ; i<=9 ; i++){
        cont[i]=0;
    }

    while(){
        n=rand()%10+1;
        cont[n-1]++;
    }
}
