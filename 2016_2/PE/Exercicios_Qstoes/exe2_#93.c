#include<stdio.h>
#include<stdlib.h>

/* Escreva uma fun��o que receba um vetor num�rico como par�metro e ordene este vetor por refer�ncia. */

void ord(int *v, int t){
    int i;
    int aux;
    int trocou=0;
    do{
		trocou=0; //logo antes de come�ar a varredura, zera as trocas
		for (i=1 ; i<t ; i++){ //come�a o i=1 porque ele analisa o vet[i] com vet[i-1],
            //entao incialmente compara posi��o 1 com a 0
			if (*(v+i) < *(v+i-1)){ //compara conteudo apontado pelos ponteiros. *(v+i) � o conteudo de vet[i],
//pois v aponta para o vet do main. caso numero que tem dentro da posi��o i seja menor que o numero da
// posi��o anterior entra no if, pois tem que trocar
				aux = *(v+i); //troca os dois numeros do vetor com ajuda do temp
				*(v+i) = *(v+i-1);
				*(v+i-1) = aux;
				trocou++; //e incrementa o contador, indicando que gouve uma troca
			}
		}
	}while(trocou!=0);
}
main(){
    int vet[4];
    int n;
    int tam=4;
    int i;
    for(i=0; i<tam ; i++){
        printf("Digite um numero: \n");
        scanf("%i",&vet[i]);
    }
    ord(vet,tam);
    printf("Ordenados:");
    for(i=0 ; i<tam ; i++){
        printf("%i ",vet[i]);
    }
}
