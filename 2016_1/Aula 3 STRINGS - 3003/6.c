#include<stdio.h>
#include<string.h>

/* Escreva um programa que pe�a para o usu�rio informar uma frase e uma palavra.
caso a palavra conste na frase, mostre na tela quantas ocorr�ncias de cada letra da palavra existem na frase. */

main(){

    char frase[30];
    char palavra[30];
    int i;
    int rep=0;
    int j=0;

    printf("Digite uma frase: \n");
    gets(frase);
    printf("Digite uma palavra: \n");
    gets(palavra);

    if(strstr(frase,palavra)==NULL){
        printf("Nao encontrado: \n");
    }
    else{
        for(i=0 ; i<strlen(palavra) ; i++){
                rep=0;
            for(j=0 ; j<strlen(frase) ; j++){
                if(palavra[i]==frase[j]){
                    rep++;
                }
            }
            printf("%i ",rep);
        }
    }
}
