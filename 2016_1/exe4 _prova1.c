#include <stdio.h >
#include <stdlib.h>


int valores[5],maior;
    ret_maior(){
    int i;
    for (i=0 ; i<5 ; i++){
        if (valores[i] > maior || i==0)
            maior = valores[i];
    }
}
main(){
int i;
    for (i=0 ; i<5 ; i++)
        scanf("%i",valores+i);
    ret_maior();
    printf("Maior: %i",maior);
}
