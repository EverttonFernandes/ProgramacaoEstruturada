#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* Escreva uma função que receba um conjunto de números, e o tamanho deste conjunto.
 A função deverá ordenar estes números, excluindo todas ocorrências de valores repetidos,
  e neste caso, modificar o tamanho deste conjunto.
 (utilize retorno de ponteiro) */

int *ordena_exclui_repetidos(int *v,int *t){
   int i;
   int j;
   int k;
   int aux;
   int ordenou=0;
   int exclui=0;
   int *p=(int*)malloc(sizeof(int)*(*t)); // crio uma alocação do mesmo tamanho o meu vetor do main
   for(k=0 ; k<*t ; k++){// varro o tamanho copiando todos os elementos do vetor para a alocação
       *(p+k)=*(v+k);
   }
   do{// Este do while eu ordeno o meu vetor
		ordenou=0;
		for (i=1 ; i<*t ; i++){
			if (*(p+i) < *(p+i-1)){
				aux = *(p+i);
				*(p+i) = *(p+i-1);
				*(p+i-1) = aux;
				ordenou++;
			}
        }
	}while(ordenou!=0);

	for (i=0; i<*t-1; i++) { // Este for remove os numeros repetidos que estão dentro do vetor
	    while (*(p+i)==*(p+i+1) && i<*t-1){ ///enquanto o conteudo da posição i for igual ao próxim
///e menor que o ultimo conteudo ele vai varrendo
            for (j=i ; j<*t-1 ; j++){///varre este vetor dinamico até o final
                *(p+j)=*(p+j+1);/// com o conteudo já removido ele puxa o conteudo do prox para o
                /// anterior
            }
            (*t)--; ///Assim diminuindo o meu tamanho
	    }

   }
   p=(int*)realloc(p,sizeof(int)*(*t));///Faço uma nova alocação com o tam atual e com os rep
   /// removidos do vetor dinâmico.
   return p;
}
main(){
    int vet[6];
    int tam=6;
    int i;
    int k;
    srand(time(NULL));
    printf("Sorteando numeros\n\n");
    for(i=0 ; i<tam ; i++){ // preencho o vetor com qualquer valor
        printf("Digite um numero: \n");
        scanf("%i",&vet[i]);
    }

    int *v = ordena_exclui_repetidos(vet,&tam);

    for(k=0 ; k<tam ; k++){
        printf("%i ",*(v+k));
    }
}
