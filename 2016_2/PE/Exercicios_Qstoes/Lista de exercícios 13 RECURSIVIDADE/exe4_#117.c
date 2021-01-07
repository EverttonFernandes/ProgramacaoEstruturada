#include<stdio.h>

///Escreva uma função recursiva que receba um número decimal, e retorne seu equivalente em binário.

int binario(int n);
main(){
    int n;
    printf("Digite um valor e vamos converter para binário: \n");
    scanf("%i",&n);

    int resultado = binario(n);
    printf("\nResultado em binario: %i ",resultado);
}
int binario(int n){
    if(n==1)
        return n;
    return (10 * binario(n/2)) + n%2;
///Iniciando a multiplicação pelo valor que não pode mais ser dividido por 2 e somando com a sobra da divisão.
/// Divido até chegar no caso base, a partir do caso base somo o resto das divisões com o numero 10 e ao fim
/// o numero se torna binário
}
