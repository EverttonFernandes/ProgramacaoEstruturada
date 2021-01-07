#include<stdio.h>
#include<stdlib.h>

/* Escreva uma função que receba um número, o tamanho de um conjunto de números e
 um ponteiro desse conjunto. A função deverá procurar esse número no conjunto,
  e caso ele não seja encontrado retornar 0. Caso seja encontrado, remover o número do
   conjunto e retornar 1. Para evitar desperdício de memória,
    o tamanho do espaço alocado para o conjunto deverá reduzir a cada remoção.
    DICA: utilize um ponteiro para ponteiro:
(int **vet) para modificar o tamanho alocado do ponteiro mandado para a função. */

int removendo(int n, int *t, int **v){
    /// procurar o numero no conjunto varrendo o vetor retornando 0 ou 1 caso encontrar o valor repetido
    int i;
    int j;
    //int *p=(int*)malloc(sizeof(int)*(*t+1));
    for(i=0 ; i<*t ; i++){
        if(*(*v+i)==n){
            for(j=i; j<*t-1 ; j++){
                *(*v+j)=*(*v+j+1);
            }
            (*t)--;
            *v=(int*)realloc(*v,sizeof(int)*(*t));
            return 1;
        }
    }
    return 0;
}

main(){
    int tam=6;
    int i;
    int j;
    int n;
    int *vetor=(int*)malloc(sizeof(int)*tam);

    printf("Prencha o vetor!!! \n");
    for(i=0 ; i<tam ; i++){
        scanf("%i",&vetor[i]);
    }
    printf("Digite um numero qualquer que está dentro do vetor: \n");
    scanf("%i",&n);

    removendo(n,&tam,&vetor);

    for(j=0 ; j<tam ; j++){
        printf("%i ",vetor[j]);
    }
}
