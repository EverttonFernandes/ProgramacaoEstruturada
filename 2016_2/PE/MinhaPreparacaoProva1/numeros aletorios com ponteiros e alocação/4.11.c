#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define tam 20 ///DEFINI UM TAMANHO FIXO AO VETOR E AO PROGRAMA
/*  Escreva um programa que gere 20 n�meros aleat�rios de 1 at� 100,
 e armazene-os em um vetor. Ap�s, mostre na tela estes n�meros ordenados em ordem crescente.  */
 main(){
    int i,j;///Usados nos ciclos for
    ///int tam=20;///
    int vet[tam];
    int aux;

    srand(time(NULL));///srand usado para que os numeros n�o se repitam toda a vez que eu executar o programa!
    for(i=0; i < tam ; i++){
        vet[i]=rand()%99+1;///Sorteio numeros de 1 at� 100
        for(j=1 ; j<i ; j++){
            if(vet[i]==vet[j]){///VERIFICO SE OS NUMEROS EST�O SE REPETINDO, CASO SE REPITA, OS VALORES S�O SORTEADOS NOVAMENTE
                vet[i]=rand()%99+1;
            }
        }
    }
    for(i=0; i<tam ; i++){///Aqui os valores j� est�o guardados dentro do vetor ent�o eles est�o sendo ordenados em ordem crescente
        for(j=i; j<tam ; j++){
            if(vet[i]>vet[j]){
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
    printf("ORDENADOS\n");
    for(i=0; i<tam ; i++){///percorro novamente o vetor e mostro cada um dos seus elementos em ordem crescente
        printf("vet[%i]=%i\n",i,vet[i]);
    }
    system("pause");
    return 0;
}
