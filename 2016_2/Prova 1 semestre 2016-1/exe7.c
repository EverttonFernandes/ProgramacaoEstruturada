#include<stdio.h>
#include<stdlib.h>

///Considerando que a fun��o deva receber um conjunto num�rico v de tamanho t, e verificar
///e atribuir por refer�ncia o maior e menor elemento deste conjunto, aponte os erros no c�digo e corrija o mesmo.

void maimenn(int v[],int t, int *m, int *n){
    int i;
    for (i=0 ; i<t ; i++){
        if (v[i] > *m || i==0) *m = v[i];
        if (v[i] < *n || i==0) *n = v[i];
    }
}
