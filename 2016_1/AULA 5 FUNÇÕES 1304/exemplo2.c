#include<stdio.h>
#include<stdlib.h>

int soma(int a, int b){
    int resultado=a+b;
    return resultado;
}
main(){
    int n1=10 ; n2=5;
    int resp=(soma(n1,n2));
    printf("soma: %i",resp);
}
