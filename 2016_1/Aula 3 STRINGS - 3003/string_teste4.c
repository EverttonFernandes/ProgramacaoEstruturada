#include<string.h>
#include<stdlib.h>
#include<conio.h>

    /* Este trecho diz se as frases ou palavras digitadas são iguais ou diferentes e se encontrou alguma letra do str2 no str1 */
main(){
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
        if(strcmp(str1,str2)==0)
            printf("iguais");
        else
            printf("Diferentes");
            if(strstr(str1,str2)!=NULL)
                printf("\n\nEncontro");
            else
                printf("\n\nNao encontrou");
}
