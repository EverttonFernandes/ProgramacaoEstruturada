#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Escreva um programa que pe�a para o usu�rio uma frase e uma palavra.
 Ent�o mostre na tela quantas ocorr�ncias da palavra existe na frase. */

 main(){

    char frase[50];
    char *p;
    char palavra[50];
    int cont=0;

    printf("Digite uma frase: \n");
    gets(frase);
    printf("Digite uma palavra: \n");
    gets(palavra);

    p = strstr(frase,palavra);

    if(p==NULL){
        printf("Nao tem ocorrencias");
    }
    else{
        while(p!=NULL){
                p=strstr(p+1,palavra);
                cont++;
        }
        printf("Teve %i ocorrencias ",cont);
    }
 }
