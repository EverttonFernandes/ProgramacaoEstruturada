#include<stdio.h>
#include<stdlib.h>

/* Escreva uma função que insira um número em um vetor numérico ordenado (mantendo a ordenação).
Escreva outra função que remova um número de um vetor ordenado, retornando 0 quando não encontrou
o número ou 1 caso tenha removido com sucesso. */

void insere_vet(int **vet, int *t, int n){
    *vet=(int*)realloc(*vet,sizeof(int)*(*t+1));// *vet, pois é no tamanho que vou mexer
    int i;
    int j;
    for(i=0 ; i<*t ; i++){ // *t é o tamanho do vetor do main.
        if(n<*(*vet+i)){ // Se o numero
            for(j=*t ; j>i ; j--){
                *(*vet+j)=*(*vet+j-1);
            }
            *(*vet+i)=n;
            break;
        }
    }
    if (i==*t){
        *(*vet+i)=n;
    }
    (*t)++;
}
int remove_vet(int **v, int *t, int n){
    int i,j;
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
    int tam=4;
    int n;
    int *vetor=(int*)malloc(sizeof(int)*tam); // vetor alocado de tamanho 4
    int i;
    int n2;

    for(i=0; i<tam ; i++){ // preencho o vetor no qual vai ter os valores fixos
        printf("Digite um numero: \n");
        scanf("%i",&vetor[i]);
    }

    printf("Digite um numero para inserir no vetor: \n");
    scanf("%i",&n);

    printf("Digite outro numero já existente no vetor no qual será removido: \n");
    scanf("%i",&n2);

    insere_vet(&vetor,&tam,n); // mando por referencia o vetor dinamico, seu tamanho e o n° a ser
    // inserido.
    remove_vet(&vetor,&tam,n2);// mando por referencia o vetor dinamico, seu tamanho e o n° a ser
    // removido.

    for(i=0 ; i<tam ; i++){ // varro o vetor e mostro na tela ele ordenado com o novo valor
        printf("%i ",vetor[i]); // inserido e com um valor removido.
    }
}
