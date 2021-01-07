#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Escreva um programa que peça para o usuário informar uma frase.
então grave um arquivo com a frase do usuário. Então escreva outro programa, que peça o nome de um arquivo e mostre na tela o conteúdo deste arquivo. */

main(){
    char frase[50];
    printf("Digite uma frase: \n");
    gets(frase);

    FILE *arq;

    arq=fopen("exe1.txt","w");

    if(arq==NULL){
        printf("Arquivo não existe!\n");
    }
    else{
        fputs(frase,arq);
    }
}
