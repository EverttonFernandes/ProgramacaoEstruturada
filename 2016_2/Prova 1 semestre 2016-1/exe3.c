#include<stdio.h>

/** Reescreva o trecho de c�digo, transformando a fun��o aleat�rio em um procedimento (fun��o sem retorno),
e removendo a passagem de par�metros,
fazendo com que a comunica��o entre as fun��es main e aleatorio se d� exclusivamente pelo uso de vari�veis globais. **/
int a,b,c;
void aleatorio(){
    srand(time(NULL));
    c=rand()%(b-a+1)+a;
}
main(){
    scanf("%i %i",&a,&b);
    aleatorio();
    printf("%i ",c);
}

