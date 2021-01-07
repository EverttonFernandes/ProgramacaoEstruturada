#include<stdio.h>
#include<stdlib.h>

/* Escreva um programa que peça para o usuário preencher um vetor alocado dinamicamente até que o 0 seja digitado.
 Após peça um outro valor numérico. Então, remova do vetor os 5 elementos cujos valores são mais próximos deste valor informado,
 ajustando o tamanho alocado a cada remoção. */


main(){
    int tam=0;
    int *p=(int*)malloc(sizeof(int)*(tam+1));
    int x, n, i, j, excluidos=0, dif, dif_do_mais_perto, mais_perto;
    do{
        printf("Digite um numero: \n");
        scanf("%i",&x);
        if(x==0){break;}
        *(p+tam)=x;
        tam++;
        p=(int*)realloc(p,sizeof(int)*(tam+1));
    }while(*(p+tam-1)!=0);

    printf("Informe outro valor: \n");
    scanf("%i",&n);

    while(excluidos<5){
        for(i=0;i<tam;i++){
            dif = abs(*(p+i)- n);

            if(dif < dif_do_mais_perto || i==0){
                    dif_do_mais_perto=dif;
                    mais_perto=i; ///indice do mais perto
            }


        }
        for(i=mais_perto;i<tam;i++){
            *(p+i)=*(p+i+1);
        }
        excluidos++;
        tam--;
        p=realloc(p, sizeof(int)*tam);
    }

        for(i=0;i<tam;i++){
            printf(" %i ", *(p+i));
        }
}
/*main(){
    int tam=0;
    int *p=(int*)malloc(sizeof(int)*(tam+1));
    int n;
    do{
        printf("Digite um numero: \n");
        scanf("%i",p+tam);
        tam++;
        p=(int*)realloc(p,sizeof(int)*(tam+1));
    }while(*(p+tam-1)!=0);

    printf("Informe outro valor: \n");
    scanf("%i",&n);

    for(i=0; i<tam ; i++){
        diferenca=*(p+i)-n;
        if(diferenca<0){
            diferenca=diferenca*(-1);
        }
        if(diferenca%*(p+i)==0 || diferenca%*)
    }
}*/
