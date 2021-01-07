#include<stdio.h>
#include<stdlib.h>

/* Exercício 1: Objetivo: Usar ponteiros para passar parâmetros para funções.
Complete o programa 1. Este programa usa a função void troca (int *a, int *b). Esta função
função troca os valores apontados por a e b. */

void troca ( int *a , int * b ){
int temp ;
temp = * a ;
*a = * b ;
*b=temp;
/* ******* Falta um comando aqui */
} /* Fim de troca */
int main (void){
    int x , y ;
    scanf("%d %d",&x,&y);
    troca (&x,&y);
    printf ("Troquei ----> %d %d \n" ,x ,y );
    return 0;
}
