#include<stdio.h>
#include<stdlib.h>

/* Escrever uma função que receba dois números e retorne o maior deles.*/

int maior(int n1,int n2){
    int resultado;
    if(n1>n2){
        resultado=n1;
    }
    if(n2>n1){
        resultado=n2;
    }
    return resultado;
}
main(){

    int n1;
    int n2;
    int resultado;

    printf("Digite um numero: \n");
    scanf("%i",&n1);
    printf("Digite um numero: \n");
    scanf("%i",&n2);

    resultado=maior(n1,n2);

    printf("maior %i",resultado);

}
