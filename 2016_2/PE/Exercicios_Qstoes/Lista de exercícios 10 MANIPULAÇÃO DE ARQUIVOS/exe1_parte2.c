#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Escreva um programa que peça para o usuário informar uma frase.
então grave um arquivo com a frase do usuário. Então escreva outro programa, que peça o nome de um arquivo e mostre na tela o conteúdo deste arquivo. */

main(){
    char arquivo[50];
    printf("Digite o nome do arquivo: \n");
    gets(arquivo);

    FILE *arq;

    arq=fopen(arquivo,"r");

    if(arq==NULL){
        printf("Arquivo não encontrado!\n");
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
