#include<stdio.h>
#include<string.h>

/* Escreva um programa que pe�a para o usu�rio inserir 10 palavras. Ent�o mostre na tela quantas delas n�o foram repetidas. */

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
