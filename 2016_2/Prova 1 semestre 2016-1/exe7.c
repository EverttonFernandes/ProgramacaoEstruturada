#include<stdio.h>
#include<stdlib.h>

///Considerando que a função deva receber um conjunto numérico v de tamanho t, e verificar
///e atribuir por referência o maior e menor elemento deste conjunto, aponte os erros no código e corrija o mesmo.

void maimenn(int v[],int t, int *m, int *n){
    int i;
    for (i=0 ; i<t ; i++){
        if (v[i] > *m || i==0) *m = v[i];
        if (v[i] < *n || i==0) *n = v[i];
    }
}
