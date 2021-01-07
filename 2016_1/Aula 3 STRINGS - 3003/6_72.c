#include<stdio.h>
#include<string.h>

/* Escreva um programa que peça para o usuário inserir 10 palavras. Então mostre na tela quantas delas não foram repetidas. */

main(){

    char palavras[10][30];
    int i;
    int j=0;
    int rep=0;
    int naorep=0;
    for(i=0 ; i<10 ; i++){
        printf("Informe a palavra %i: \n",i+1);
        gets(palavras[i]);
    }
    for(i=0 ; i<10 ; i++){
            rep=0;
        for(j=0 ; j<10 ; j++){
            if(strcmp(palavras[i],palavras[j])==0){
            rep++;
            }
        }
        if(rep==1){
            naorep++;
        }
    }
    printf("%i",naorep);
}
