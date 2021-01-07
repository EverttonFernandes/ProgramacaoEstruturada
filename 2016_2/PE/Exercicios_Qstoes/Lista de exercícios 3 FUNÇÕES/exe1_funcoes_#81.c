#include<stdio.h>

/* Escrever uma função que receba dois números e retorne o maior deles. */
//int resultado;
int maior(int primeiro, int segundo){
    int maior_num;
    if(primeiro>segundo){
        maior_num=primeiro;
    }
    else{
        maior_num=segundo;
    }
    int resultado=maior_num;
    return resultado;
}
main(){
    int n1;
    int n2;
    printf("Informe um numero: ");
    scanf("%i",&n1);
    printf("Informe um numero: ");
    scanf("%i",&n2);
    int resultado=maior(n1,n2);
    printf("O maior numero informado e %i \n",resultado);
}
