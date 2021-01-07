#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Escreva uma função que conta e mostra na tela quantas palavras uma frase enviada por parâmetro possui. */
void cont_palavra(char frase[]){
    int palavras=0;
    int i;

    for(i=0 ; i<strlen(frase); i++){
        if(frase[i]==32){
            palavras++;
        }
    }
    printf("A frase contem %i palavras ",palavras+1);
}
main(){
    char frase[50];
    int tam;

    printf("Informe uma frase: \n");
    gets(frase);
    cont_palavra(frase);
    //p=frase;
}
