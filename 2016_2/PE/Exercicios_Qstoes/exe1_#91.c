#include<stdio.h>
#include<stdlib.h>

/* Escreva uma fun��o que receba por refer�ncia dois valores e troque o conte�do destes valores um pelo outro. */

void troca(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
main(){
    int n1;
    int n2;
    printf("Informe o valor de de n1: \n");
    scanf("%i",&n1);
    printf("Informe o valor de de n1: \n");
    scanf("%i",&n2);
    troca(&n1,&n2);

    printf("%i %i",n1,n2);
}
