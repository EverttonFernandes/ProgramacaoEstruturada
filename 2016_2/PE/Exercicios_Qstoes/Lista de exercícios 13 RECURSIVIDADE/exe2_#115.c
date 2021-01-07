#include<stdio.h>

/// Escrever uma função recursiva que calcule o enésimo termo da sequência de Fibonacci.

int fibonacci(int n);
/// 1°   2°  3°  4°  5°  6°  7°  8°   9°   10°  11°  12°  13°  14°
/// 0    1   1   2   3   5   8   13   21   34   55   89   144  233
main(){
    int n;
    printf("Digite um numero: \n");
    scanf("%i",&n);

    int resultado = fibonacci(n);
    printf("%i ",resultado);
}
int fibonacci(int n){
    if(n==0 || n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
