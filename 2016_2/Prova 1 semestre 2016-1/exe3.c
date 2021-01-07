#include<stdio.h>

/** Reescreva o trecho de código, transformando a função aleatório em um procedimento (função sem retorno),
e removendo a passagem de parâmetros,
fazendo com que a comunicação entre as funções main e aleatorio se dê exclusivamente pelo uso de variáveis globais. **/
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

