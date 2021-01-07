#include<stdio.h>
#include<stdlib.h>

/* Enviando numeros aleatórios a um vetor */

void mostra_vetor(float v[], int t){
    int i;
    for(i=0 ; i<t ; i++){
        printf("%.1f ",v[i]);
    }
}
main(){

    srand(time(NULL));
    int i;
    float vetor[50];
    for(i=0 ; i<10 ; i++){
        vetor[i]=(float)(rand()%1001)/10;
    }
    mostra_vetor(vetor,i);
}
