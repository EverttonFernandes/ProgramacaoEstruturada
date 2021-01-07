#include<stdio.h>

/// Escreva uma função recursiva que retorne o maior elemento de um vetor de inteiros.

int procura_maior(int i,int vet[]);
main(){
    int vet[5];
    int i;
    printf("Preencha o vetor: \n");
    for(i=0; i<5; i++){
        scanf("%i",&vet[i]);
    }
    int resultado = procura_maior(i,vet);
    printf("\nO maior numero e %i ",resultado);
}
int procura_maior(int i,int vet[]){
    if(i==1)
        return vet[0];
    else{
        int num = procura_maior(i-1,vet);
        if(vet[i-1]>num){
            return vet[i-1];
        }
        else{
            return num;
        }
    }
}
///----------------
    /*int i;
    int maior=vet[0];
    for(i=0; i<5; i++){
        if(vet[i]>maior){
            maior=vet[i];
        }
    }
    return maior;
}
*/
