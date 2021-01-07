#include<stdio.h>
#include<ctype.h>

/* Escrever uma função que recebe um caractere e retorna este caractere convertido em maiúsculo ou o próprio caractere
 se não for letra.
 Então fazer outra função que faça o mesmo para minúsculo. */

char convert(char letra){ // converte para maiusculo

    if (letra>='A' && letra<='Z')
        return letra+32;
    else
        return letra;
    if (letra>='a' && letra<='z')
        return letra-32;
    else
        return letra;
}

main(){
    char caracter;
    char letra_mai;
    char letra_min;

    printf("Digite um caracter: \n");
    caracter=getche();

    char letra=convert(caracter);
    printf("%c ",letra);

//char l;
    /*if(!isalpha(caracter)){
        return letra;
    }*/
//char convert_mai(char letra){ // converte para minusculo

    /*char letra_min=tolower(letra);
    return letra_min;*/
//}
    /*if(caracter>=65 && caracter <=90){
        letra_min=convert_mai(caracter);
        printf("\nVoce digitou '%c' maiusculo e sua conversao ficou: %c minusculo\n",caracter,letra_min);
    }
    if(caracter>=97 && caracter <=122){
        letra_mai=convert_min(caracter);
        printf("\nVoce digitou '%c' minusculo e sua conversao ficou: %c maiusculo\n",caracter,letra_mai);
    }
    if(!isalpha(caracter)){ // isalpha é uma função que serva para testar se o caracter informado consta no alfabeto
        printf("\nO caracter informado '%c' nao e uma letra",caracter);
    }*/
}
