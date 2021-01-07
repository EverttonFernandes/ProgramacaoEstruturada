#include<stdio.h>
#include<stdlib.h>

/* Escreva uma função que receba um vetor inteiro e seu tamanho. A função deve mostrar na tela o maior elemento deste vetor. */
void vetor(int vet[5]){
    int maior;
    int i;
    maior=vet[0];
    for(i=0;i<5;i++){
        if(vet[i]>maior){
            maior=vet[i];
        }
    }
    printf("\nO maior valor e o numero %i\n",maior);
}
main(){
    int vet[5];
    int i;
    int maior;
    for(i=0 ; i<5 ; i++){
        printf("Informe um valor");
        scanf("%i",&vet[i]);
    }
    vetor(&vet);
}
