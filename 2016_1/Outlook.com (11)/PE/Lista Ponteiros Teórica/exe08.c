// 8. O trecho de código abaixo falta uma linha para funcionar. Insira essa linha no código e justifique o porquê dela ser necessária:


// int num, *pont;
// *pont = 10;
//printf("o número é %d", num);

#include<stdio.h>
#include<stdlib.h>

int main(){
	int num, *pont;

	pont = &num;
	*pont = 10;
	printf("o número é %i", num);
}
