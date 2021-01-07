#include<stdio.h>

/* Escreva um programa que através da chamada de uma função recursiva retorne a
multiplicação dos dois números passados como parâmetro para a função. Esta função deve
fazer a multiplicação através de somas sucessivas. Ex: 5x3 = 5+5+5. */

///Ex: 5x3 = 5+5+5.

int soma_suc(int x, int z){
    if(z==1)
    return x;
    return x+soma_suc( x, z-1);
}
main(){
    printf("%i", soma_suc(5,3));
}



