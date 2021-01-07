#include<stdlib.h>
#include<stdio.h>

/* AULA 1 2.11 SITE - Escreva um programa que sorteie um número entre -100 e 100.
 Então peça para o usuário adivinhar o números sorteado.
  Em cada tentativa, mostre na tela se o número escolhido é maior ou menor que o sorteado.
   Caso ele não acerte em até 10 tentativas mostre uma mensagem e encerre o programa.
   Caso acerte em alguma das 10 tentativas,
 mostre uma mensagem parabenizando-o e mostrando quantas tentativas ele utilizou e encerre o programa. . */

main(){

    srand(time(NULL));
    int sorteado;
    int cont=0;
    int n;
    n=rand()%201-100;
    printf("%i \n",n);
    do{
        printf("Adivinhe o numero sorteado: \n");
        scanf("%i",&sorteado);
        if(sorteado<n){
            printf("O valor e maior: \n");
        }
        else{
            if(sorteado>n){
                printf("O valor e menor: \n");
            }
            if(sorteado==n){
                printf("Ta tranquilo ta favoravel voce acertou miseravi: \n");
            }
        }
        cont++;
        if(cont==10){
            printf(" \nVoce teve 10 tentativas e não acertou, recomece o jogo novamente \n");
        }
    }while(sorteado!=n && cont<10);
}
