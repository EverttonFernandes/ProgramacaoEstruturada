#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Escreva um programa que pe�a para o usu�rio informar uma frase.
ent�o grave um arquivo com a frase do usu�rio. Ent�o escreva outro programa, que pe�a o nome de um arquivo e mostre na tela o conte�do deste arquivo. */

main(){
    char arquivo[50];
    printf("Digite o nome do arquivo: \n");
    gets(arquivo);

    FILE *arq;

    arq=fopen(arquivo,"r");

    if(arq==NULL){
        printf("Arquivo n�o encontrado!\n");
    }
    else{
        char string[50];
        printf("Texto do arquivo: ");
        while(feof(arq)==0){
            fgets(string,50,arq);
                printf("%s ",string);
        }
    }
}
