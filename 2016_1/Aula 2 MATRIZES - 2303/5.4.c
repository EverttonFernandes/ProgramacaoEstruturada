#include<stdio.h>
#include<stdlib.h>

/** Escreva um algoritmo que pe�a para o usu�rio informar quantos dias de chuva teve em cada m�s de um ano.
 Fa�a a valida��o para somente permitir a inser��o de n�meros entre 0 e 30 dias.
 Ent�o pergunte se o usu�rio deseja inserir estes dados para o pr�ximo ano.
 O algoritmo deve parar de pedir estes valores quando o usu�rio responder que n�o.
Ao fim, mostre na tela qual foi o m�s que em m�dia obteve mais dias chuvosos em todos os anos analisados. **/

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
