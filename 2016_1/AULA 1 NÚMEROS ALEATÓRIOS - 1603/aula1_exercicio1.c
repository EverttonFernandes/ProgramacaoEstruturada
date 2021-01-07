#include<stdlib.h>
#include<stdio.h>

/** Pedir um numero N. Rolar N dados e mostrar a soma de todos os valores que cairam nestes dados. **/

main(){

    srand(time(NULL));
    int i,d;
    int n;
    int soma=0;
    printf("Quantos vezes voce quer rolar: \n");
    scanf("%i",&n);
    for(i=0 ; i<n ; i++){
        d=rand()%6 + 1;
        soma=soma+d;
        printf("%i ",d);
    }
    printf("soma: %i",soma);
}
