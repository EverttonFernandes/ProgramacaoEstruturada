#include<stdio.h>
#include<stdlib.h>

/* Escreva uma função que receba um vetor inteiro e seu tamanho.
 A função deve mostrar na tela o maior elemento deste vetor. */
int vet[20];
int n;
int i;
int tam;
int resultado;

void maior(int vet[], int tam){
	int maior_num=vet[0];
	int menor_num=vet[0];
 	for(i=0 ; i<tam ; i++){
 		if(vet[i] > maior_num){
 			maior_num = vet[i];
		 }
        if(menor_num > vet[i]){
 			menor_num = vet[i];
        }
	 }
	printf("O maior elemento desde vetor e o numero %i ",maior_num);
	printf("O menor elemento desde vetor e o numero %i ",menor_num);
}
main(){
	printf("Digite o tamanho do vetor que voce deseja: \n");
	scanf("%i",&tam);

	for(i=0 ; i<tam ; i++){
		printf("Informe um valor: \n");
		scanf("%i",&vet[i]);
		//vet[i]=n;
	}
	maior(vet,tam);
}
