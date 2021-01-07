// 9. Escreva um trecho de código que divida o conteúdo de uma variável X por 2 sem utilizar o X na expressão;

#include<stdio.h>

int main(){
	float x, *pont, resp;

	printf("Informe um valor para x: ");
	scanf("%f", &x);

	pont = &x;
	resp = *pont/2;

	printf("O resultado da divisão do valor %.1f por 2 é = %.1f", x, resp);
}