#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Escreva um programa que pe�a para o usu�rio uma frase e duas palavras.
Ent�o mostre na tela a frase com todas as ocorr�ncias da primeira palavra substitu�da pela segunda. */

main(){
    char frase[50];
    char palavra1[15];
    char palavra2[15];
    char vet_aux[50];
    char *p,*q;

    printf("Digite uma frase: \n");
    gets(frase);
    printf("Digite uma palavra: \n");
    gets(palavra1);
    printf("Digite outra palavra: \n");
    gets(palavra2);

    int tam_palavra1=strlen(palavra1);
    int tam_palavra2=strlen(palavra2);

    strcpy(vet_aux,frase);
    p=strstr(frase,palavra1);
    q=strstr(vet_aux,palavra1);

    if(p==NULL){
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
        printf("Frase modificada: %s ",vet_aux);
    }
    ///oi ola tudo bem oi
    ///teste ola tudo bem teste
}
