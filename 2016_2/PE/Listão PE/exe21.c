#include<stdio.h>
#include<stdlib.h>

/* Escreva um programa que contenha uma função que grave em um arquivo.doc um milhão
de caracteres de a até z aleatórios. Escreva outra função que busque dentro desse arquivo e
mostre quantas ocorrências de um caractere especificado pelo usuário existem. O usuário
deve especificar o nome do arquivo que será criado e consultado. Mostre uma mensagem
de erro caso o arquivo não possa ser aberto. */

void aleatorio(){

}
void ocorrencias(){
    FILE *arq;
    arq=fopen(aleatorio.doc,"r");

        while(!feof(arq)){
            strstr(arq,caracteres);
        }
    }
    else{
        printf("Arquivo nao existe");
    }
    fclose(arq);
}
main(){
    FILE *arq;
    char caracteres[1000];
    char arquivo[20];
    printf("Digite o nome do arquivo que voce deseja acessar: \n");
    gets(arquivo);
    arq=fopen(aleatorio.doc,"w");
    if(arq!=NULL){
    }
    else{
        printf("Arquivo nao existe: \n");
    }
}
