#include<stdio.h>

/* Escreva uma função que receba dois números como parâmetros e retorna o MMC (mínimo
múltiplo comum) destes dois números. */

int mmc(n1,n2){
    int mmc;
    int aux;
    int i;
/*
  3-2|2
  3-1|3
  1-1|6  */
    for (i=2; i<=n2; i++) {
        aux=n1*i;
        if((aux%n2)==0){
            mmc=aux;
            i=n2+1;
        }
    }
    return mmc;
}

main(){
    int n1;
    int n2;
    printf("Digite o primeiro numero para realizarmos o MMC: \n");
    scanf("%i",&n1);
    printf("Digite o segundo numero para realizarmos o MMC: \n");
    scanf("%i",&n2);
    int resposta=(mmc(n1,n2));
    printf("O MMC de %i e %i resulta no valor de %i",n1,n2,resposta);
}
