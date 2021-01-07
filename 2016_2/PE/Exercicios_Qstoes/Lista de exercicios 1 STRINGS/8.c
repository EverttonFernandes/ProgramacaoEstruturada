#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Escreva um programa que mostre quantos caracteres repetidos uma frase informada pelo usuário contém. */

main(){
    char frase[50];
    int rep=0;
    int i;
    int j;
    printf("Digite uma frase: \n");
    gets(frase);

    for(i=0; i<strlen(frase); i++){
        rep=0;
        for(j=0 ; j<strlen(frase) ; j++){
            if(frase[i]==frase[j]){
            if(rep>=2){
                rep++;
                printf("%i ",rep);
            }
        }
    }
}
