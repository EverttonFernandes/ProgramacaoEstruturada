#include<stdio.h>
#include<stdlib.h>

/* O que � e para que serve o prot�tipo de uma fun��o?
Mostre um exemplo de sua utiliza��o em uma programa, bem como o mesmo exemplo sem a utiliza��o do prot�tipo. */

int f1(int v1, int v2);

main(){
    int t = f1(10,5);
    printf("%i",t);
}

int f1(int v1, int v2){
    return v1+v2;
}
