#include<stdlib.h>
#include<stdio.h>

/*  Escreva um programa que pe�a para o usu�rio informar tr�s n�meros, ent�o gere 5000
 n�meros aleat�rios entre o maior e o menor informado pelo usu�rio.
 Ao fim, mostre na tela quantos n�meros s�o maiores que o n�mero intermedi�rio informado. */

 main(){



    int n1,n2,n3;
    int maior,intermediario,menor;
    printf("Informe o primeiro numero: \n");
    scanf("%i",&n1);
    printf("Informe o primeiro numero: \n");
    scanf("%i",&n2);
    printf("Informe o primeiro numero: \n");
    scanf("%i",&n3);

    if(n1>n2 || n1>n3){
        maior=n1;
    }
    if(n2>n1 || n2>n3){
        maior=n2;
    }
    if(n3>n1 || n3>n2){
        maior=n3;
    }
    if(n1<n2 || n1<n3){
        menor=n1;
    }
    if(n2<n1 || n2<n3){
        menor=n2;
    }
    if(n3<n1 || n3<n2){
        menor=n3;
    }
    if(n1<n2 && n1>n3){
        intermediario=n1;
    }
    if(n2<n1 && n2>n3){
        intermediario=n2;
    }
    if(n3<n2 && n3>n1){
        intermediario=n3;
    }
    printf("%i \n",maior);
    printf("%i \n",menor);
 }
