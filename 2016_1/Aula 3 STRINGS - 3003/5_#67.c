#include<stdio.h>
#include<string.h>

/* Pedir para o usuário digitar uma lista de palavras, de tamanho qualquer (critério a sua escolha).
 Então mostrar todas palavras inseridas em ordem, da menor para a maior. */

main(){
    /* Ordenar valores inteiros do menor ao maior */
    char palavras[10][50];
    int vet[10];
    int i=0;
    int cont=0;
    int j=0;
    int aux;
    char saux[50];

    for(i=0 ; i<10 ; i++){
        printf("Informe a palavra %i: \n",i+1);
        gets(palavras[i]);
        vet[i] = strlen(palavras[i]);
    }

    do{
            cont=0;
            for(j=0 ; j<i ; j++){
                if(vet[j]>vet[j+1]){
                    aux=vet[j+1];
                    vet[j+1] = vet[j];
                    vet[j] = aux;

                    strcpy(saux,palavras[j+1]);
                    strcpy(palavras[j+1],palavras[j]);
                    strcpy(palavras[j],saux);

                    cont++;
                }
            }
    }while(cont!=0);
    for(i=0 ; i<10 ; i++){
        printf("%s\n",palavras[i]);
    }
}



/*
strcpy(s1,s2); //s1=s2;
if (strcmp(s1,s2)==0) //if(s1==s2)
strcat(s1,s2); //s1+=s2;
*/
