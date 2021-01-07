#include<stdio.h>
#include<stdlib.h>

///15)	Explique detalhadamente o que o trecho de código abaixo faz:

main(){
    int vet[10];
    int *pv;
    int i=0;
    int j;
    pv = vet;///o ponteiro recebe o endereço de memória da primeira posição do vetor
    while (pv < &vet[10]){///Enquanto o ponteiro não chegar na última posição do vetor ele não saí do while
        i++;///o i inicia em zero, incrementa e vira 1, e assim sucessivamente
        *pv = i;///na primeira vez o i vale 0, mas ele foi incrementado assim que entrou no while no entanto na posição 0
        ///o conteúdo é 1, na posição 1 o conteúdo é 2 e assim até chegar
        /// na posição 9 e o conteúdo for 10.
        pv++;///o ponteiro avança para a próxima posição do vetor e volta para o inicio do while para adicionar um novo conteúdo
        /// a próxima posição!
    }
    for(j=0 ; j<10 ; j++){
        printf("%i ",vet[j]);///Teste somente para vizualizar o conteúdo de cada posição do vetor.
    }
}
