#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void ordena(int *v, int tam){
	int i, temp, trocou=0;
	//variavel trocou é incrementada cada vez que detectar que há um número fora de ordem
	//o programa repete o ato de varrer o vetor enquanto houver alguma troca. quando tiver varrido o vetor todo e nao houver trocas, quer dizer q ele ta ordenado
	do{
		trocou=0; //logo antes de começar a varredura, zera as trocas
		for (i=1 ; i<tam ; i++){ //começa o i=1 porque ele analisa o vet[i] com vet[i-1], entao incialmente compara posição 1 com a 0
			if (*(v+i) < *(v+i-1)){ //compara conteudo apontado pelos ponteiros. *(v+i) é o conteudo de vet[i],
//pois v aponta para o vet do main. caso numero que tem dentro da posição i seja menor que o numero da
// posição anterior entra no if, pois tem que trocar
				temp = *(v+i); //troca os dois numeros do vetor com ajuda do temp
				*(v+i) = *(v+i-1);
				*(v+i-1) = temp;
				trocou++; //e incrementa o contador, indicando que gouve uma troca
			}
		}
	}while(trocou!=0);
}

main(){
	int i, vet[6];
	//srand(time(NULL));
	//preenche o vetor com numeros aleatorios. só pra testar e nao precisar pedir cada numero pro usuário
	//printf("Aleatorios:\n");
	for (i=0 ; i<6 ; i++){
		printf("Digite um numero: \n");
		scanf("%i",&vet[i]);
	}

	//chama a função que ordena, passando o vetor por referencia e o tamanho dele.
	ordena(vet, 6);

	//mostra o vetor ordenado
	printf("\n\nOrdenados:\n");
	for (i=0 ; i<6 ; i++){
		printf("%i ",vet[i]);
	}
}
