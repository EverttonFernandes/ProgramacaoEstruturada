#include<stdio.h>
#include<stdlib.h>

///19)	Como � feita a declara��o de um ponteiro para ponteiro e para que eles servem? D� um exemplo de uso

main(){
    int *p; /// Declara��o de um ponteiro
    int **pp; /// Declara��o de um ponteiro de ponteiro.
    int x=5;
    p=&x;/// O ponteiro recebe o endere�o de mem�ria da vari�vel x, no entanto p tem o conte�do de x.
    pp=&p;/// O ponteiro de ponteiro recebe o endere�o de mem�ria do ponteiro, no entanto ele pode acessar o conte�do da vari�vel.
    **pp+=5;/// Acessando o conte�do com ** acumulei 5 na soma somente para testar o acesso a vari�vel atr�ves de um ponteiro
    /// ponteiro.
    printf("%i ",**pp);/// Mostro no tela o conte�do da vari�vel x atr�ves do ponteiro de ponteiro.
}
