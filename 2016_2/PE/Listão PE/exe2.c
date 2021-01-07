#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Escreva uma função que passe por referência um vetor de caracteres. Esta função deve
inverter o conteúdo do vetor. Ex: Se o usuário passar um vetor contendo a string
"programação", ao fim da função o vetor deve conter "oacamargorp". */

/*
char inverter(&palavra[10],&invertida[10]){
    char letra;
    int tam=0;
    char palavra[10], invertida[10];

    printf("Informe a palavra: ");
    do{
        gets(palavra);
    }while(letra!=13);
    if (letra==13)
        tam=strlen(palavra);
        tam--;
    int i;
    int j=tam-1;
    printf("\n\n");
    for(i=0 ; i<tam ; i++){
        invertida[i]=palavra[j];
        j--;
    }
    for(i=0 ; i<tam ; i++)
        printf("%c ",palavra[i]);
    for(i=0 ; i<tam ; i++)
        printf("%c ",invertida[i]);
}*/
main(){
    char letra;
    int tam=0;
    char palavra[4], invertida[4];

    printf("Informe a palavra: ");
    gets(palavra);
    if (letra==13)
        tam=strlen(palavra);
        tam--;
    int i;
    int j=tam-1;
    printf("\n\n");
    for(i=0 ; i<tam ; i++){
        for (j=0 ; j< tam ; j++){
            strstr(invertida[i],palavra[j]);
            j--;
        }
    }
    for(i=0 ; i<strlen(palavra) ; i++)
        printf("%s ",palavra[i]);
    for(i=0 ; i<strlen(invertida) ; i++)
        printf("%s ",invertida[i]);
}
