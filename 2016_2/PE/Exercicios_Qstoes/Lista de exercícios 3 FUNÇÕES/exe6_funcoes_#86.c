#include<string.h>
#include<stdio.h>
#include<ctype.h>

/* Fazer um programa que peça uma frase e formate e mostre esta frase usando as seguintes funções:
Recebe um caractere e retorna este caractere convertido em maiúsculo ou o próprio caractere se não for letra.
Outra função que faça o mesmo para minúsculo.
Exemplo: Primeira Maiúscula Resto Minúscula. */

/*char formatada(char f){
    int i;
    for(i=0 ; i<strlen(f); i++){
        if(!isupper(f[i]==0)){
            char frase_formatada=tolower(f);
        }
    }
    return frase_formatada;
}
main(){
    char frase[50];
    printf("Digite uma frase: \n");
    gets(frase);
    char frase_formatada=formatada(frase);
    printf("%s ",frase_formatada);
}*/
main()
{
    char frase[40];
    int i;
    printf("Este programa converte frase para maiuscula e minuscula\n");
    printf("Digite uma frase: ");
    gets(frase);
    for(i=0 ; i<strlen(frase); i++){
        strupr(frase[i]); //Converte o conteúdo da variável frase para maiúsculo
        //strlwr(frase[i+1]);       //Convertte o conteúdo da variável frase para minúsculo
        system("cls");

    //printf("minuscula: %s\n\n\n",frase[i+1]);
    }
printf("\nMAIUSCULA: %s\n\n",frase);

system("pause");
}
