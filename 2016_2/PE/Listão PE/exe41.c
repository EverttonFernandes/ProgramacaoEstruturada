#include<stdio.h>

/* Escreva um programa que atrav�s da chamada de uma fun��o recursiva retorne a
multiplica��o dos dois n�meros passados como par�metro para a fun��o. Esta fun��o deve
fazer a multiplica��o atrav�s de somas sucessivas. Ex: 5x3 = 5+5+5. */

///Ex: 5x3 = 5+5+5.

int soma_suc(int x, int z){
    if(z==1)
    return x;
    return x+soma_suc( x, z-1);
}
main(){
    printf("%i", soma_suc(5,3));
}



