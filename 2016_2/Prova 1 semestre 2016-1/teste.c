#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* Reescreva o trecho de código, transformando a função aleatório em um procedimento (função sem retorno),
 e removendo a passagem de parâmetros,
 fazendo com que a comunicação entre as funções main e aleatorio se dê exclusivamente pelo uso de variáveis globais. */
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

