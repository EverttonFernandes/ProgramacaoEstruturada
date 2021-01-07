//18. O código abaixo contém um erro. Explique-o e faça a correção:
//int *p;
//int i;
//p = &i;
//scanf("%d",*p);

#include<stdio.h>
int main(){
	int *p, i;
	p = &i;
	printf("Informe um valor: \n");
	scanf("%i", &*p);

	printf("Valor de p: %i", *p);
}
