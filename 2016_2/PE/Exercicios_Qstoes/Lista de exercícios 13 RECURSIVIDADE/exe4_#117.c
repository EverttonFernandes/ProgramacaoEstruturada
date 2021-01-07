#include<stdio.h>

///Escreva uma fun��o recursiva que receba um n�mero decimal, e retorne seu equivalente em bin�rio.

int binario(int n);
main(){
    int n;
    printf("Digite um valor e vamos converter para bin�rio: \n");
    scanf("%i",&n);

    int resultado = binario(n);
    printf("\nResultado em binario: %i ",resultado);
}
int binario(int n){
    if(n==1)
        return n;
    return (10 * binario(n/2)) + n%2;
///Iniciando a multiplica��o pelo valor que n�o pode mais ser dividido por 2 e somando com a sobra da divis�o.
/// Divido at� chegar no caso base, a partir do caso base somo o resto das divis�es com o numero 10 e ao fim
/// o numero se torna bin�rio
}
