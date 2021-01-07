#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
/**  Escreva um programa que contenha uma função que grave em um arquivo .doc um milhão de caracteres de a até z aleatórios.
 Escreva outra função que busque dentro desse arquivo e mostre quantas ocorrências de um caractere especificado pelo usuário existem.
  O usuário deve especificar o nome do arquivo que será criado e consultado.
  Mostre uma mensagem de erro caso o arquivo não possa ser aberto. **/

char vet[10000];
char nome_arquivo[20];
void grava_arquivo(){ /// GRAVA UM MILHÃO DE CARACTERES DENTRO DO ARQUIVO
///Escreva um programa que contenha uma função que grave em um arquivo .doc um milhão de caracteres de a até z aleatórios.

    int i;
    FILE *ponteiro_arq;
    ponteiro_arq=fopen(nome_arquivo,"w");
    if(nome_arquivo==NULL){
        printf("Arquivo nao pode ser aberto! \n");
        system("pause");
    }
    else{
        srand(time(NULL));
        for(i=0; i<10000; i++){
            vet[i]=97+(rand() % (122-97+1));
            fputc(vet[i],ponteiro_arq);
        }
    }
    fclose(ponteiro_arq);
}

void busca_ocorrencias(){
///Escreva outra função que busque dentro desse arquivo e mostre quantas ocorrências de um caractere especificado pelo usuário existem.
    FILE *arq;
    char letra,vet_arquivo[10000];
    char c;
    int cont=0,*p;
    printf("Digite um caracter, letras de 'a' ate 'z'\n");
    letra=getche();
    fflush(stdin);
    printf("\n");
    system("pause");
    arq=fopen(nome_arquivo,"r");

    if(arq==NULL){
        printf("Arquivo nao existe");
    }
    else{
            ///p=&vet_arquivo;
        while(!feof(arq)){
                c=fgetc(arq); /// joga os caracteres do arquivo dentro da variavel
                if(letra==c){
                    cont++;
                }
            }
            printf("Ocorrencias: %i \n",cont);
        }
    fclose(arq);
}
main(){
    FILE *ponteiro_arq;
    printf("Digite o nome do arquivo que deseja abrir: \n");
    gets(nome_arquivo);

    grava_arquivo();
    busca_ocorrencias();
}
