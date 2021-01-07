#include<stdio.h>
#include<stdlib.h>

/*  Escreva um programa que gere 25 números entre 10 e 100 e mostre-os na tela. */

main(){

      srand(time(NULL));
      int i;
      int n;
      for(i=0 ; i<25 ; i++){
        n=rand()%91+10;
        printf("%i \n",n);
      }
}
