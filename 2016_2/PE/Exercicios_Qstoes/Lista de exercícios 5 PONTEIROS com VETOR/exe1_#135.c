#include<stdio.h>
#include<stdlib.h>

main(){
int vet[10],i; // vetor com 10 posi��es � declarado
    for (i=0 ; i<10 ; i++){// varre o vetor
        *(vet+i)=i;// acessa
    }
    int *p=vet, *q=vet+9, t; // ponteiro p acessa a primeira posi��o do vetor, o *q acessa a ultima posi��o do vetor
    while (p < q){ // enquanto p for menor que q ele vai trocando de posi��o os conte�dos do vetor
        t = *p; // t recebe o conteudo primeira posi��o do vetor
        *p=*q; // p passa a acessar a ultima posi��o do vetor
        *q=t; // q recebe a primeira posi��o do vetor
        p++; // p avan�a
        q--;// q diminui
    }//enquanto eles n�o se cruzarem n�o vai cair fora do while
    for (i=0 ; i<10 ; i++){
        printf("%i ",*(vet+i));
    }
}
/* TESTE DE MESA
pos 0   1   2   3   4   5   6   7   8   9

vet 0   1   2   3   4   5   6   7   8   9

i   0   1   2   3   4   5   6   7   8   9

*p  9   8   7   6   5   4   3   2   1   0
*q  0   1   2   3   4   5   6   7   8   9
t   0   1   2   3   4   5   6   7   8   9






*/
