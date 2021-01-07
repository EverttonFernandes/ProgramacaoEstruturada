#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define tam 20 ///DEFINI UM TAMANHO FIXO AO VETOR E AO PROGRAMA
/*  Escreva um programa que gere 20 números aleatórios de 1 até 100,
 e armazene-os em um vetor. Após, mostre na tela estes números ordenados em ordem crescente.  */
 main(){
    int i,j;///Usados nos ciclos for
    ///int tam=20;///
    int vet[tam];
    int aux;

    srand(time(NULL));///srand usado para que os numeros não se repitam toda a vez que eu executar o programa!
    for(i=0; i < tam ; i++){
        vet[i]=rand()%99+1;///Sorteio numeros de 1 até 100
        for(j=1 ; j<i ; j++){
            if(vet[i]==vet[j]){///VERIFICO SE OS NUMEROS ESTÃO SE REPETINDO, CASO SE REPITA, OS VALORES SÃO SORTEADOS NOVAMENTE
                vet[i]=rand()%99+1;
            }
        }
    }
    for(i=0; i<tam ; i++){///Aqui os valores já estão guardados dentro do vetor então eles estão sendo ordenados em ordem crescente
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
