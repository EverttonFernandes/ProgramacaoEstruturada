#include<stdio.h>
#include<stdlib.h>

/* Escreva um programa que contenha uma fun��o que grave em um arquivo.doc um milh�o
de caracteres de a at� z aleat�rios. Escreva outra fun��o que busque dentro desse arquivo e
mostre quantas ocorr�ncias de um caractere especificado pelo usu�rio existem. O usu�rio
deve especificar o nome do arquivo que ser� criado e consultado. Mostre uma mensagem
de erro caso o arquivo n�o possa ser aberto. */

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
