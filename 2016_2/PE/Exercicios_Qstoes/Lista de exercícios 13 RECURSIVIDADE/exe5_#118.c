#include<stdio.h>
#include<math.h>
/** Escreva uma função que receba um número inteiro,
e calcule recursivamente a raiz quadrada deste valor (sem utilizar função sqrt e afins). **/

int raiz(int n);
main(){
    int n;
    printf("Digite um valor e vamos descobrir sua raiz quadrada: \n");
    scanf("%i",&n);

    int resultado = raiz(n);
    printf("\nResultado: %i ",resultado);
}

int raiz(int n){
    int r;
    return r = sqrt(n);
}
