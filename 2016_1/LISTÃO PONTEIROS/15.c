#include<stdio.h>
#include<stdlib.h>

// Explique detalhadamente o que o trecho de código abaixo faz:

main(){
    int vet[10],*pv,i=0;
    pv = vet; // ponteiro recebe a posição 0 do vetor &vet[0];
    while (pv < &vet[10]){ // O pv vai de 0 a 9 e enquanto o ponteiro não chegar na ultima posição que é a 9 ele não saí do while.
        i++; // o i era 0, incrementa e vira um, e assim por diante.
        *pv = i; // O conteúdo da posição 0 recebe o valor 1 (e assim sucessivamente até chegar na posição 9 e o conteudo ser 10).
        pv++; // ponteiro avança para a próxima posição no caso pv=&vet[1]; E assim vai ser até chegar na posição 9
    }
    printf("%i %i %i %i %i %i %i %i %i %i  ",vet[0],vet[1],vet[2],vet[3],vet[4],vet[5],vet[6],vet[7],vet[8],vet[9]);
    // Ao final o vetor fica:
//posição   //  0 1 2 3 4 5 6 7 8 9
// conteúdo  // 1 2 3 4 5 6 7 8 9 10
}
