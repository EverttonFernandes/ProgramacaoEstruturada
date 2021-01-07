#include<stdio.h>
#include<stdlib.h>

///19)	Como é feita a declaração de um ponteiro para ponteiro e para que eles servem? Dê um exemplo de uso

main(){
    int *p; /// Declaração de um ponteiro
    int **pp; /// Declaração de um ponteiro de ponteiro.
    int x=5;
    p=&x;/// O ponteiro recebe o endereço de memória da variável x, no entanto p tem o conteúdo de x.
    pp=&p;/// O ponteiro de ponteiro recebe o endereço de memória do ponteiro, no entanto ele pode acessar o conteúdo da variável.
    **pp+=5;/// Acessando o conteúdo com ** acumulei 5 na soma somente para testar o acesso a variável atráves de um ponteiro
    /// ponteiro.
    printf("%i ",**pp);/// Mostro no tela o conteúdo da variável x atráves do ponteiro de ponteiro.
}
