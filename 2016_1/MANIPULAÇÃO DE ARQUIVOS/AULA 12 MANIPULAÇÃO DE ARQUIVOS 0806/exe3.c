#include<stdio.h>
#include<stdlib.h>

/* Escreva um programa que permita que o usu�rio digite textos, ent�o quando o usu�rio digitar ENTER duas vezes consecutivas,
 pe�a para ele informar o nome do arquivo, ent�o grave o texto inserido no arquivo informado, com a extens�o .txt. */

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
