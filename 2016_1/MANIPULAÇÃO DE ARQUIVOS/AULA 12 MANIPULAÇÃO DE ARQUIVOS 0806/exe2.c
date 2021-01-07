#include<stdio.h>
#include<stdlib.h>

/* Pedir o nome de um arquivo e mostrar o conteúdo dele na tela */

main(){

    FILE *arq;
    char carac;
    char arquivo[50];
    printf("Informe o nome do arquivo: \n");
    gets(arquivo);
    arq=fopen(arquivo,"r");


    while(!feof(arq)){
        carac=fgetc(arq);
        printf("%c",carac);
    }
    fclose(arq);


}
