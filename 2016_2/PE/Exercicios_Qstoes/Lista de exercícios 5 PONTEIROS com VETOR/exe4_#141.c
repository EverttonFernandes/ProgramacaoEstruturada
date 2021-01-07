#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
char f[500],*p;
    strcpy(f,"frase de teste testando"); // nesse primeiro instante com a função strcpy estou copiando a string para o vetor f
    p=f+9;//ponteiro p aponta para a posição 9 do vetor f
    *(p+5)='\0';// acessa a posição 14 no qual recebe como conteúdo o '\0'
    if (!strcmp("teste",p))// se o p for diferente da string teste que neste caso é diferente pois nele está inserido o '\0'
        strcat(p," de ponteiros");// a string com a frase de ponteiro é concatenada após o '\0'
    else
        strcat(p," de strings");// aqui p é diferente da string de ponteiros então é concatenada a string "de strings"
        // na string já existente
    /*char v[6],c[2];
    c[1]='\0';
    strcpy(v,"aeiou");
int i=0;
    while (f[i]!='\0'){
        c[0]=f[i];
        if (strstr(v,c))
            *(f+i)-=32;
        i++;
    }*/
printf("%s",f);
}
/* TESTE DE MESA
    0123456789..          22
f   frase de teste testando

*p  frase de teste de ponteiros de strings



*/
