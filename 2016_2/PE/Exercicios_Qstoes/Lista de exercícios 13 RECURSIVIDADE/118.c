#include<stdio.h>

float raiz_rec(int n, float inf, float sup){
    float media = (inf+sup)/2;
    float tolerancia = 0.00001;
    float erro = (media*media)-n;
    if (erro<0)
        erro*=-1;
    if (erro <= tolerancia)
        return media;
    if (media*media > n)
        return raiz_rec(n, inf, media);
    if (media*media < n)
        return raiz_rec(n, media, sup);
}

float raiz(int n){
    return raiz_rec(n,1,n);
}

main(){
    printf("%f",raiz(10));
}
