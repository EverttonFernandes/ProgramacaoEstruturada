#include<stdio.h>
#include<stdlib.h>

/*  Escreva um programa que ajude no controle das comiss�es dos 10 vendedores de uma loja.
 Para isso, pe�a para o usu�rio informar o valor de cada produto que os clientes compraram,
  seguido do n�mero do vendedor que realizou a venda. Caso o usu�rio insira um valor inv�lido de produto (zero ou menos),
   ou 250 produtos tenham sido inseridos encerre as inser��es.
Ao fim, mostre na tela o valor de todos os produtos que cada vendedor vendeu. */

main(){

    int mat[10][250];
    int vendedor;
    int valor=1;
    int cont[10]={0};
    int total=0;

    while(valor!=0 && total<=250){

    printf("Informe o numero do vendedor: \n");
    scanf("%i",&vendedor);
    printf("Informe o valor do produto: \n");
    scanf("%i",&valor);
        if(valor>0){
            mat[vendedor][cont[vendedor]]=valor;
            cont[vendedor]++;
            total++;
        }
    }
    for(vendedor=0 ; vendedor<10 ; vendedor++){
        if(cont[vendedor]>0){
            printf("\nVendedor %i: ",vendedor);
            for(valor=0 ; valor<cont[vendedor] ; valor++){
                printf("R$ %i ",mat[vendedor][valor]);
            }
        }
    }
}
