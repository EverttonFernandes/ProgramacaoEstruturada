#include<stdio.h>

/* 17. Usando a fun��o sizeof(), como podemos saber qual o tamanho de um vetor qualquer,
 sabendo somente seu tipo e nome? Escreva a linha de
c�digo que retorna o tamanho deste vetor. */

int main(){
	int vet[5];
	int tamanho;

	tamanho = sizeof(vet);

	printf("O tamanho do vetor: %i bytes", tamanho);

	// Resposta 20, pois o vetor tem 5 posi��es e o tipo dele � int. Ent�o 5x4=20.
	// Caso tivesse 10 posi��es seria 10x4=40.
}
