#include<stdio.h>
#include<time.h>

/* Escreva uma fun��o que receba dois n�meros e retorne um n�mero aleat�rio entre os dois informados. */

void ale(int n1,int n2){
    srand(time(NULL));
    int i;
    int n;
    for(i=0 ; i<1 ; i++){
        n=rand()%n2,n1;
        printf("%i ",n);
    }
}
main(){
    int n1;
    int n2;
    printf("Informe um numero: \n");
    scanf("%i",&n1);
    printf("Informe um numero: \n");
    scanf("%i",&n2);
    ale(n1,n2);
}
