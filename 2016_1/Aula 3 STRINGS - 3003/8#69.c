#include<stdio.h>
#include<string.h>

/* Escreva um programa que mostre quantos caracteres repetidos uma frase informada pelo usuário contém. */

main(){

    char frase[50];
    char rep1[50];
    int i;
    int j;
    int rep=0;
    int contem=0;

    printf("Digite uma frase: \n");
    gets(frase);

    for(i=0 ; i<strlen(frase) ; i++){
            rep=0;
        for(j=0 ; j<strlen(frase) ; j++){
            if(frase[i]==frase[j]){
                rep++;
            }
            if(rep>=2){
        contem=rep;
        printf("%i ",&contem);
        }
        }


    }


}
