#include<stdio.h>

/* 17. Usando a função sizeof(), como podemos saber qual o tamanho de um vetor qualquer,
 sabendo somente seu tipo e nome? Escreva a linha de
código que retorna o tamanho deste vetor. */

int main(){
	int vet[5];
	int tamanho;

	tamanho = sizeof(vet);

	printf("O tamanho do vetor: %i bytes", tamanho);

	// Resposta 20, pois o vetor tem 5 posições e o tipo dele é int. Então 5x4=20.
	// Caso tivesse 10 posições seria 10x4=40.
}
