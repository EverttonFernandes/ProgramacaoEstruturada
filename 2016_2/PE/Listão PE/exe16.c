#include<stdio.h>
#include<stdlib.h>

/* Escreva uma fun��o que recebe tr�s n�meros como par�metro. Esta fun��o deve retornar a
raz�o entre o somat�rio dos dois elementos que s�o numericamente mais pr�ximos e o
outro elemento: Ex: Os n�meros passados foram: 11,3,10. C�lculo: (11+10)/3=7. */

float operacao(float n1,float n2,float n3){
    float operacao;
    float calculo;
    float soma;
    soma=n1+n3;
    calculo=soma/n2;
    operacao=calculo;
    return operacao;
}
main(){

    float n1;
    float n2;
    float n3;
    float resultado;

    printf("Informe o primeiro numero: \n");
    scanf("%i",&n1);
    printf("Informe o segundo numero: \n");
    scanf("%i",&n2);
    printf("Informe o segundo numero: \n");
    scanf("%i",&n3);

    resultado=(operacao(n1,n2,n3));
    printf("%.2f",resultado);

}
