#include<stdio.h>
#include<string.h>

/* Pedir 5 palavras (strings), verificar o tamanho da menor, e mostrar na tela todas as outras palavras "cortadas",
 de maneira que fiquem com um tamanho máximo igual ao tamanho da menor palavra.
 Dica: insira o '\0' nas strings para cortá-las. */

 main(){

    char palavras[5][30];
    int i=0;
    int j=0;
    int menor;

    for(i=0 ; i<5 ; i++){
        printf("\n Digite 5 palavras: \n");
        gets(palavras[i]);
        if(strlen(palavras[i])<menor || i==0){
            menor=strlen(palavras[i]);
        }
    }
    for(j=0 ; j<5 ; j++){
        palavras[j][menor]='\0';
        puts(palavras[j]);
    }
 }
