#include<stdio.h>
#include<stdlib.h>

main(){
    FILE *arq;
    arq= fopen ("meu_arquivo.txt","R");
    if(arq==NULL)
        printf("Erro ao abrir o arquivo");
    else{
        //lógica de programa
    }
}

