#include<stdio.h>
#include<stdlib.h>

int soma(int x, int y); ///PROTÓTIPO DE UMA FUNÇÃO

main(){
    int x;
    int y;
    printf("Digite o valor de x e o valor de y: \n");
    scanf("%i %i",&x,&y);
    int resultado=soma(x,y);

    printf("%i+%i=%i",x,y,resultado);
}
int soma(int x, int y){
    int r=x+y;
    return r;
}
