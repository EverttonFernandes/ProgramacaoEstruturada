#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p = (int*)malloc(sizeof(int));
    int *p2;
    int num, tam=0, i;
    do{
        printf("Informe um numero: ");
        scanf("%i",&num);

        *(p+tam) = num;
        tam++;

        p2 = (int*)malloc(sizeof(int)*(tam+1));

        for (i=0 ; i<tam ; i++){
            *(p2+i) = *(p+i);
        }

        free(p);
        p = (int*)malloc(sizeof(int)*(tam+1));
        for (i=0 ; i<tam ; i++){
            *(p+i) = *(p2+i);
        }
        free(p2);


    }while (num!=0);
    
    for (i=0 ; i<tam ; i++){
        printf("%i ",*(p+i));
    }
    printf("\n");
    free(p);
}
