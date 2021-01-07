#include<stdio.h>
#include<stdlib.h>

/** Escreva um algoritmo que peça para o usuário informar quantos dias de chuva teve em cada mês de um ano.
 Faça a validação para somente permitir a inserção de números entre 0 e 30 dias.
 Então pergunte se o usuário deseja inserir estes dados para o próximo ano.
 O algoritmo deve parar de pedir estes valores quando o usuário responder que não.
Ao fim, mostre na tela qual foi o mês que em média obteve mais dias chuvosos em todos os anos analisados. **/

main(){

    int mat[30][12];
    int dias;
    int meses;
    char ano_seguinte;

    for(dias=0 ; dias<30 ; dias++){
        for(meses=0 ; meses<12 ; meses++){
            printf("Informe quantos dias de chuva teve no mes %i: ",meses+1);
            scanf("%i",&mat[dias][meses]);
            while((dias<0 || dias>30)){
                printf("Digite numeros somente entre 0 e 30: \n");
                scanf("%i",&dias);
            }
        }
    }
}
