#include <stdio.h>
#include <stdlib.h>
/* Esse programa calcula a média de 1, 2, 10, mil ou 1 milhão de números.
E o melhor, só aloca 1, 2, 10, mil ou exatos 1 milhão de bytes, nem um a mais.
Extramente econômico, não deixa seu computador 'lerdo' por consumir memória demais,
 o que é um grande problema ocasionado por péssimos programadores. */
int *aloca(int num){
    int count,
    *numbers;

    numbers = (int *)malloc(num*sizeof(int));

    for(count=0 ; count < num ; count++){
        printf("Numero [%d]: ", count+1);
        scanf("%d", &numbers[count]);
    }

    return numbers;
}

float media(int *numbers, int num){
    float media=0.0;
    int count;

    for(count=0 ; count<num ; count++)
    media += numbers[count];

    return media/num;
}

void exibe(int *numbers, int num){
    int count;
    for(count=0 ; count < num ; count++)
    printf("%3d", numbers[count]);
}

int main(void){
    int num=1,
    *numeros;
    while(num){
        printf("Media de quantos numeros [0 para sair]: ");
        scanf("%d", &num);

        if(num > 0){
            numeros = aloca(num);
            exibe(numeros,num);
            printf("\nA media destes numeros eh: %.2f\n", media(numeros, num) );
            free(numeros);
        }
    }
    return 0;
}
