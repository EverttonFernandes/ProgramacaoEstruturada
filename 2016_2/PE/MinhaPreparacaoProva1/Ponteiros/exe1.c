#include<stdio.h>
#include<stdlib.h>

/* Exerc�cio 1: Objetivo: Usar ponteiros para passar par�metros para fun��es.
Complete o programa 1. Este programa usa a fun��o void troca (int *a, int *b). Esta fun��o
fun��o troca os valores apontados por a e b. */

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
