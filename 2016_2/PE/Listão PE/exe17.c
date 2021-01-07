#include<stdio.h>
#include<string.h>

/* Elabore 2 funções que tenham por finalidade inserir e remover números de um vetor. A
primeira função deverá inserir um número informado como parâmetro na primeira posição
vazia de um vetor. Considere que uma posição vazia do vetor contém o valor 0. A segunda
função deverá remover o último elemento de um vetor e retornar este elemento. Não
poderão ser usadas variáveis globais. */

void insere(int **vet,int *t,int n){
    int inicio;
    int i;
    (*t)++;
    inicio=*(*vet+*t);
    *vet=(int*)malloc(*vet,sizeof(int)*(*t));
}
int remover(int **vet_fim,int *t){
    int r;
    (*t)--;
    r=*(*vet+*t);
    *vet=(int*)realloc(*vet,sizeof(int)*(*t));
    return r;
}
main(){
    int n;
    int t=4; // tamanho do vetor
    int
    int primeiro_valor;
    int ultimo_valor;
    int *vet=(int*)malloc(sizeof(int)*t)
    for (i=0; i<t; i++){ // prenchendo o vetor de 0 a 3;
      *(vet+i)=i;
    }
    printf("Qual numero voce deseja alocar na primeira posicao do vetor?")
    int primeiro_valor=insere(&vet,&t,n);
    ultimo_valor=remove(&vet,&t);
    printf("O primeiro numero do vetor e %i",primeiro_valor);
    printf("O ultimo numero do vetor e %i",ultimo_valor);
}
