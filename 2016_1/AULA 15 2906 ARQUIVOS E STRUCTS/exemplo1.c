#include<stdio.h>
#include<stdlib.h>

struct pessoa{
    char nome[50];
    int idade;
    char genero;
};

void carrega_vet(struct pessoa *vet,int t){
    FILE *arq=fopen("arquivo.dat","rb");
    if(arq!=NULL){
        fread(vet,sizeof(struct pessoa),t,arq);
    }
}
void salva_vet(struct pessoa *vet, int t){
    FILE *arq=fopen("arquivo.dat","wb");
    if(arq!=NULL){
        fwrite(vet,sizeof(struct pessoa),t,arq);
    }
}

main(){
    int i;
    struct pessoa alunos[100];
    carrega_vet(alunos,100) ;
    for(i=0 ; i<2 ; i++){
        printf("\nInforme o nome : \n");
        gets(alunos[i].nome);
        printf("Informe a idade : \n");
        scanf("%i",&alunos[i].idade);
        fflush(stdin);
        printf("Informe o genero : \n");
        alunos[i].genero=getche();
    }
    salva_vet(alunos,100);
}
