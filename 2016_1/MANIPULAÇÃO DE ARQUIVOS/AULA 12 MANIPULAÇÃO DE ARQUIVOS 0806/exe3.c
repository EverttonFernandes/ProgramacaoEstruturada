#include<stdio.h>
#include<stdlib.h>

/* Escreva um programa que permita que o usuário digite textos, então quando o usuário digitar ENTER duas vezes consecutivas,
 peça para ele informar o nome do arquivo, então grave o texto inserido no arquivo informado, com a extensão .txt. */

main(){

    FILE *arq;
    char arquivo[100];
    char letra;
    int i=0;
    int cont_enter=0;
    printf("Digite um texto: \n");
    do{
        gets(arquivo);
        if(letra!=13){
            cont_enter++;
        }
    }while(cont_enter==2);

}
