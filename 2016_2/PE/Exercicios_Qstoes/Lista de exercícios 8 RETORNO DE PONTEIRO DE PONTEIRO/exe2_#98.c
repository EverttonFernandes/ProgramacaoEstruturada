#include<stdio.h>
#include<stdlib.h>

/* Escreva uma fun��o que receba um n�mero, o tamanho de um conjunto de n�meros e
 um ponteiro desse conjunto. A fun��o dever� procurar esse n�mero no conjunto,
  e caso ele n�o seja encontrado retornar 0. Caso seja encontrado, remover o n�mero do
   conjunto e retornar 1. Para evitar desperd�cio de mem�ria,
    o tamanho do espa�o alocado para o conjunto dever� reduzir a cada remo��o.
    DICA: utilize um ponteiro para ponteiro:
(int **vet) para modificar o tamanho alocado do ponteiro mandado para a fun��o. */

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
    printf("Digite um numero qualquer que est� dentro do vetor: \n");
    scanf("%i",&n);

    removendo(n,&tam,&vetor);

    for(j=0 ; j<tam ; j++){
        printf("%i ",vetor[j]);
    }
}
