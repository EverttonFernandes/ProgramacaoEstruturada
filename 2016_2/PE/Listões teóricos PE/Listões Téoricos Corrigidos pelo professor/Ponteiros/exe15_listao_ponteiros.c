#include<stdio.h>
#include<stdlib.h>

///15)	Explique detalhadamente o que o trecho de c�digo abaixo faz:

main(){
    int vet[10];
    int *pv;
    int i=0;
    int j;
    pv = vet;///o ponteiro recebe o endere�o de mem�ria da primeira posi��o do vetor
    while (pv < &vet[10]){///Enquanto o ponteiro n�o chegar na �ltima posi��o do vetor ele n�o sa� do while
        i++;///o i inicia em zero, incrementa e vira 1, e assim sucessivamente
        *pv = i;///na primeira vez o i vale 0, mas ele foi incrementado assim que entrou no while no entanto na posi��o 0
        ///o conte�do � 1, na posi��o 1 o conte�do � 2 e assim at� chegar
        /// na posi��o 9 e o conte�do for 10.
        pv++;///o ponteiro avan�a para a pr�xima posi��o do vetor e volta para o inicio do while para adicionar um novo conte�do
        /// a pr�xima posi��o!
    }
    for(j=0 ; j<10 ; j++){
        printf("%i ",vet[j]);///Teste somente para vizualizar o conte�do de cada posi��o do vetor.
    }
}
