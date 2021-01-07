#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
/** Elabore um programa que gere 350 sequencias de letras aleatórias de tamanho entre 10 e 25 cada.
Armazene estas sequencias uma em cada linha de um arquivo de nome escolhido pelo usuário e extensão .txt.
Então crie um outro programa que pergunte para o usuário o nome de um arquivo e
mostre na tela todas sequencias de caracteres contidas no arquivo que possuem tamanho maior que 20. **/

void print_arquivo(char nome_arquivo[]);
main(){
    FILE *ponteiro_arq;
    int tam_sequencia,i,j;
    char vet[350],nome_arquivo[20];
    srand(time(NULL));
    gets(nome_arquivo);
    ponteiro_arq=fopen(nome_arquivo,"w");
    if(nome_arquivo==NULL){
        printf("Arquivo nao pode ser aberto! \n");
        system("pause");
    }
    else{
        for(i=0; i<350; i++){
            tam_sequencia=10+(rand()%(25-10+1));
            for(j=0; j<tam_sequencia; j++){
                vet[j]=97+(rand() % (122-97+1));
                fputc(vet[j],ponteiro_arq);
            }
            fputc('\n',ponteiro_arq);
        }
    }
    print_arquivo(nome_arquivo); /// chamada da função
}
void print_arquivo(char nome_arquivo[]){
/// crie uma função que pergunte para o usuário o nome de um arquivo
///mostre na tela todas sequencias de caracteres contidas no arquivo que possuem tamanho maior que 20.
    FILE *arq;
    int i,j;
    char nome[20];
    char vetor[28];
    printf("Digite o nome do arquivo: \n");
    gets(nome);

    if(strcmp(nome,nome_arquivo)==0){
        arq=fopen(nome_arquivo,"r");
        for(j=0; j<350; j++){
            fgets(vetor, 27 ,arq);
            if(strlen(vetor)>20){
                printf("%s ",vetor);
            }
        }
    }
    else{
        printf("Nome do arquivo está errado! \n");
    }
}
