#include<stdio.h>

/*18. O c�digo abaixo cont�m um erro. Explique-o e fa�a a corre��o:
int *p;
int i;
p = &i;
scanf("%d",*p);
*/

int main(){
	int *p;
	int i;
	i=10;
	p = &i;// p recebe a posi��o de mem�ria de i.
    printf("Informe um valor: \n");
	scanf("%i", &i);

	printf("Valor de p: %i", *p); // mostra na tela o conte�do de p que � o valor da vari�vel i.
}
