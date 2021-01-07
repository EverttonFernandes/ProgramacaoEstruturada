#include<stdio.h>
#include<stdlib.h>

/* Pede uma string e o nome do arquivo e grava a string no arquivo. */

main(){

    char carac;
    char arquivo[50];
    FILE *arq;

    printf("Informe o nome do arquivo: \n");
    gets(arquivo);

    arq=fopen(arquivo,"r");

    if (arq == NULL){
            printf("nao abriu");
    }
    else{
        char texto[10];
        printf("Texto do arquivo: ");
        while(feof(arq)==0){
            fgets(texto,10,arq);
            printf("%s",texto);
        }
    }

}
