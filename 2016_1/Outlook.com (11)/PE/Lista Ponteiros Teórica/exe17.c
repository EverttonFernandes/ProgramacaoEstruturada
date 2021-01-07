// 17. Usando a função sizeof(), como podemos saber qual o tamanho de um vetorqualquer, sabendo somente seu tipoe nome? Escreva alinha de 
//código que retorna o tamanho deste vetor.

#include<stdio.h>

int main(){
	int vet[10], tam;

	tam = sizeof(vet);

	printf("Tamanho do vetor: %i", tam);
}