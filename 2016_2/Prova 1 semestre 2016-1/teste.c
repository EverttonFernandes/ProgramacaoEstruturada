#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* Reescreva o trecho de c�digo, transformando a fun��o aleat�rio em um procedimento (fun��o sem retorno),
 e removendo a passagem de par�metros,
 fazendo com que a comunica��o entre as fun��es main e aleatorio se d� exclusivamente pelo uso de vari�veis globais. */
int a,b;
int inf,sup;
void aleatorio(){
    srand(time(NULL));
    rand()%(sup-inf+1)+inf;
}
main(){
    scanf("%i %i",&a,&b);
    printf("%i ",aleatorio());
}

