#include<stdlib.h>
#include<stdio.h>

/*  Escreva um programa que peça para o usuário informar três números, então gere 5000
 números aleatórios entre o maior e o menor informado pelo usuário.
 Ao fim, mostre na tela quantos números são maiores que o número intermediário informado. */

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
