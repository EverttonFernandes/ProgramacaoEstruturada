#include<stdio.h>
#include<stdlib.h>

///18)	O c�digo abaixo cont�m um erro. Explique-o e fa�a a corre��o:
/*  int *p;
    int i;
    p = &i;
    scanf("%d",*p);
*/
main(){
    int *p;
    int i;
    p = &i;
    printf("Informe um numero: \n");
    scanf("%i",&i);
	printf("Valor de p: %i", *p); // mostra na tela o conte�do de p que � o valor da vari�vel i.
}
