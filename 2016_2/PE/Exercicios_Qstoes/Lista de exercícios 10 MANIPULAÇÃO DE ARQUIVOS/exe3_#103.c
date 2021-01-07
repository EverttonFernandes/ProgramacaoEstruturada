#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/** Escreva um programa que peça para o usuário informar o nome de um arquivo.
Então caso o arquivo exista, peça para o usuário inserir duas palavras, e substitua todas ocorrências da primeira pela segunda. **/

main(){
    char nome_arq[50];
    char palavra1[50];
    char palavra2[50];
    char vet_arquivo[10000]="";
    char buffer[10];
    char *p,*q;
    char vet_aux[10000];
    FILE *ponteiro_arq;

    printf("Digite o nome do arquivo: \n");
    gets(nome_arq);

    ponteiro_arq=fopen(nome_arq,"r");

    if(ponteiro_arq==NULL){
        printf("Não existe! \n");
    }
    else{
        printf("O arquivo existe, por favor digite duas palavras: \n");
        gets(palavra1);
        gets(palavra2);
        printf("Texto do arquivo: ");
        while(feof(ponteiro_arq)==0){
            fgets(buffer,9,ponteiro_arq);
            strcat(vet_arquivo,buffer);
        }
        printf("%s ",vet_arquivo);
        ///ponteiro_arq=strstr(palavra1,palavra2);
    }
    fclose(ponteiro_arq);

    ponteiro_arq=fopen(nome_arq,"w");
    int tam_palavra1=strlen(palavra1);
    int tam_palavra2=strlen(palavra2);

    strcpy(vet_aux,vet_arquivo);
    p=strstr(vet_arquivo,palavra1);
    q=strstr(vet_aux,palavra1);

    if(ponteiro_arq==NULL){
        printf("Nao existe ocorrencias!!! \n");
    }
    else{
        while(p!=NULL){
            strcpy(q,palavra2);
            p+=tam_palavra1;
            q+=tam_palavra2;
            strcpy(q,p);
            p=strstr((p+1),palavra1);
            q=strstr((q+1),palavra1);
        }
        fputs(vet_aux,ponteiro_arq);
    }
    fclose(ponteiro_arq);
}
