#include<stdio.h>
#include<stdlib.h>

/** Escreva uma função recursiva que ajude o usuário com sua dívida.
A função deve receber como parâmetro a quantia ele recebeu de empréstimo,
a taxa de juros mensais e quanto tempo ele irá levar para pagar,
e retornar a quantia que deverá ser paga ao fim do tempo transcorrido.
 A solução iterativa se encontra ao lado. (25%)  **/

 /** SOLUÇÃO ITERATIVA:
 int q=5000;
 int t=12; tempo 12 meses
 int j=0.03; //juros 3%
 int i;
 for (i=0 ; i<t ; i++)
    q += q*j;  **/
float emprestimo(float v,float j,int t){
    if(t==0)
        return v;
    return emprestimo(v+v*j,j,t-1);
    ///return quimica(v-v*(d-1),n-1);
}
main(){
    float valor;
    float juros;
    int tempo;
    printf("Digite a quantia que voce recebeu como emprestimo: \n");
    scanf("%f",&valor);
    printf("Digite os juros mensais: \n");
    scanf("%f",&juros);
    printf("Digite o tempo: \n");
    scanf("%i",&tempo);

    float resultado=emprestimo(valor,juros/100,tempo);
    printf("%.2f \n",resultado);

}
