#include<stdio.h>

/* Escreva uma função que receba por parâmetro um vetor e o número de elementos deste vetor, e retorne a média destes números. */

float media_vet(int v[]){
    float media;
    float soma=0;
    int j;
    for(j=0 ; j<3 ; j++){
        soma+=v[j];
    }
    media=soma/3;
    return media;
}
main(){
    int vet[3];
    int i;
    for(i=0 ; i<3 ; i++){
        printf("Informe um numero: \n");
        scanf("%i",&vet[i]);
    }
    float media=media_vet(vet);
    //printf("Soma dos numeros informados %.2f",soma)
    printf("A media dos numeros informados e: %.2f \n",media);
}
