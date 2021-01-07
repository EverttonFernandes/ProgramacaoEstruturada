#include<stdio.h>
#include<stdlib.h>

void maior_menor(int *vet, int tam, int *maior, int *menor){

    *maior=*vet;
    *menor=*vet;
    int i;

    for(i=1; i<tam ; i++){
        if(*(vet+i)> *maior){
            *maior=*(vet+i);
        }
        if(*(vet+i)<*menor){
            *menor=*(vet+1);
        }
    }
}

main(){

    srand(time(NULL));
    int i, num[100];

    for(i=0 ; i<100 ; i++){
        num[i]=rand()%91+10;
    }
    int m,n;
    maior_menor(num,100,&m,&n);
    printf("maior %i \n menor : %i",m,n);
}
