#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Escreva um programa que pe�a para o usu�rio informar uma frase.
ent�o grave um arquivo com a frase do usu�rio. Ent�o escreva outro programa, que pe�a o nome de um arquivo e mostre na tela o conte�do deste arquivo. */

main(){
    char frase[50];
    printf("Digite uma frase: \n");
    gets(frase);

    FILE *arq;

    arq=fopen("exe1.txt","w");

    if(arq==NULL){
        printf("Arquivo n�o existe!\n");
    }
    else{
        fputs(frase,arq);
    }
}
