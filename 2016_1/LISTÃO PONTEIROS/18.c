#include<stdio.h>

/*18. O código abaixo contém um erro. Explique-o e faça a correção:
int *p;
int i;
p = &i;
scanf("%d",*p);
*/

int main(){
	int *p;
	int i;
	i=10;
	p = &i;// p recebe a posição de memória de i.
    printf("Informe um valor: \n");
	scanf("%i", &i);

	printf("Valor de p: %i", *p); // mostra na tela o conteúdo de p que é o valor da variável i.
}
