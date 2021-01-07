#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* Elabore um programa que ajude a realizar o controle de versão de arquivos. O programa
deverá pedir para o usuário informar o nome de dois arquivos do tipo texto. Então mostre
na tela o número da linha e o conteúdo desta linha no segundo arquivo que apresenta
diferença com o conteúdo da mesma linha no primeiro arquivo. O programa também
deverá criar um outro arquivo chamado "changelog.txt" que contém estas informações que
foram mostradas na tela. */

main(){

    FILE *arq;
    FILE *arq2;
    FILE *arq3;
    char arquivo1[50];
    char arquivo2[50];

    printf("Informe o nome do 1 arquivo: \n");
    gets(arquivo1);
    printf("Informe o nome do 2 arquivo: \n");
    gets(arquivo2);

    arq=fopen(arquivo1,"r");
    arq2=fopen(arquivo2,"r");
    arq3=fopen("changelog.txt","a");
    if(arq!=NULL && arq2!=NULL){
        while(feof(arq)==0 && feof(arq2)==0){
            fgets(arquivo1,50,arq);
            fgets(arquivo2,50,arq2);
            //printf("1: %s\n2: %s\n",arquivo1,arquivo2);
            if(strcmp(arquivo1,arquivo2)!=0){
                    fputs(arquivo2,arq3);
                printf("%s",arquivo2);
            }
        }
    }
    else{
        printf("Este arquivo nao existe \n");
    }
}
