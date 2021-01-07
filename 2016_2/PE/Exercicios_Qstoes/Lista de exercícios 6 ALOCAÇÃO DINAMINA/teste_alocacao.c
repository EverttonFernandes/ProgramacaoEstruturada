#include<stdio.h>

main(){
    int tam=6;
    int i;
    int n;
    int *p=(int*)malloc(sizeof(int)*tam);
    printf("Digite 6 numeros!!!");
    for(i=0; i<tam; i++){
        scanf("%i",&n);
        *(p+i)=n;
    }
    for(i=0; i<tam; i++){
        printf("%i ",*(p+i));
    }
}
