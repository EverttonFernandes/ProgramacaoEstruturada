#include<stdio.h>
#include<string.h>

/* Escreva um programa que permita que o usu�rio digite textos, ent�o quando o usu�rio digitar ENTER duas vezes consecutivas,
 pe�a para ele informar o nome do arquivo, ent�o grave o texto inserido no arquivo informado, com a extens�o .txt. */

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
