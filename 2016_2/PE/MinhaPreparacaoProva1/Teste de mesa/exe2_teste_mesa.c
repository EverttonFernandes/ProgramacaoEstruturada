#include<stdio.h>
#include<stdlib.h>

/*  Escreva os valores das variáveis para cada instrução do programa abaixo. Qual a saída do programa?  */

int main(int argc, char *argv[]){
    int a,b,*p1,*p2;
    a = 4;///variavel a recebe como conteudo o valor 4
    b = 3;/// b recebe 3
    p1 = &a;/// p1 recebe o endereço de memória da variavel a.
    p2 = p1;/// p2 também recebe o endereço de memória de a.
    *p2 = *p1 + 3;/// a recebe como conteudo 4+3=7
    b = b * (*p1);/// b recebe como conteudo 3*7=21
    (*p2)++;///como p2 está apontando para a variavel a ele incrementa e vira 8.
    p1 = &b;///p1 passa a apontar para a variavel b
    printf("%d %d\n", *p1, *p2);
    printf("%d %d\n", a, b);
}
/*
a   |   b     | p1      |   p2
4
        3
                &a
                            &a
7
        21
8
                &b
*/
