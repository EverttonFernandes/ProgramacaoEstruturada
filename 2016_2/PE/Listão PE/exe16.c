#include<stdio.h>
#include<stdlib.h>

/* Escreva uma função que recebe três números como parâmetro. Esta função deve retornar a
razão entre o somatório dos dois elementos que são numericamente mais próximos e o
outro elemento: Ex: Os números passados foram: 11,3,10. Cálculo: (11+10)/3=7. */

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
