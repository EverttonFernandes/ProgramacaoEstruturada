#include<stdio.h>
#include<stdlib.h>

///18)	O código abaixo contém um erro. Explique-o e faça a correção:
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
	printf("Valor de p: %i", *p); // mostra na tela o conteúdo de p que é o valor da variável i.
}
