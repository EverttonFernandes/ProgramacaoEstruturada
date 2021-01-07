#include<stdio.h>
#include<string.h>

/* Escreva um programa que permita que o usuário digite textos, então quando o usuário digitar ENTER duas vezes consecutivas,
 peça para ele informar o nome do arquivo, então grave o texto inserido no arquivo informado, com a extensão .txt. */

main(){
    char textos[50][50];
    char letra;
    int cont_enter=0;
    int i=0;
    int j;
    char nome_arq[50];
    FILE *ponteiro_arq;
    printf("Digite um texto:\n");

    do{
        gets(textos[i]);
        i++;
    }while(strlen(textos[i-1])!=0);

    printf("Digite o nome do arquivo no qual voce deseja salvar esta string \n\n");
    gets(nome_arq);

    ponteiro_arq=fopen(nome_arq,"w");
    for(j=0; j<i; j++){
        fprintf(ponteiro_arq,"%s\n",textos[j]);
    }
    fclose(ponteiro_arq);
}
