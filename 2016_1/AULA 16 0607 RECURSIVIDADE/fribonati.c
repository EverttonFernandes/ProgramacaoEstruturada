#include<stdio.h>
#include<stdlib.h>


//0 1 1 2 3 5 8 13...

/* Escrever uma fun��o recursiva que calcule o en�simo termo da sequ�ncia de Fibonacci. */

int fibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
main(){
    int n;
    printf("Informe um numero: \n");
    scanf("%i",&n);
    int resultado=fibonacci(n);
    printf("%i",resultado);

}
