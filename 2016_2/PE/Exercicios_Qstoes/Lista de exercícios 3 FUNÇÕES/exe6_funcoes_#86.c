#include<string.h>
#include<stdio.h>
#include<ctype.h>

/* Fazer um programa que pe�a uma frase e formate e mostre esta frase usando as seguintes fun��es:
Recebe um caractere e retorna este caractere convertido em mai�sculo ou o pr�prio caractere se n�o for letra.
Outra fun��o que fa�a o mesmo para min�sculo.
Exemplo: Primeira Mai�scula Resto Min�scula. */

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
        strupr(frase[i]); //Converte o conte�do da vari�vel frase para mai�sculo
        //strlwr(frase[i+1]);       //Convertte o conte�do da vari�vel frase para min�sculo
        system("cls");

    //printf("minuscula: %s\n\n\n",frase[i+1]);
    }
printf("\nMAIUSCULA: %s\n\n",frase);

system("pause");
}
