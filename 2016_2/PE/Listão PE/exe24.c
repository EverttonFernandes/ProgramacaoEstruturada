#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* Elabore um programa que ajude a realizar o controle de vers�o de arquivos. O programa
dever� pedir para o usu�rio informar o nome de dois arquivos do tipo texto. Ent�o mostre
na tela o n�mero da linha e o conte�do desta linha no segundo arquivo que apresenta
diferen�a com o conte�do da mesma linha no primeiro arquivo. O programa tamb�m
dever� criar um outro arquivo chamado "changelog.txt" que cont�m estas informa��es que
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
