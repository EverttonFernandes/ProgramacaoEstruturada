#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
char f[500],*p;
    strcpy(f,"frase de teste testando"); // nesse primeiro instante com a fun��o strcpy estou copiando a string para o vetor f
    p=f+9;//ponteiro p aponta para a posi��o 9 do vetor f
    *(p+5)='\0';// acessa a posi��o 14 no qual recebe como conte�do o '\0'
    if (!strcmp("teste",p))// se o p for diferente da string teste que neste caso � diferente pois nele est� inserido o '\0'
        strcat(p," de ponteiros");// a string com a frase de ponteiro � concatenada ap�s o '\0'
    else
        strcat(p," de strings");// aqui p � diferente da string de ponteiros ent�o � concatenada a string "de strings"
        // na string j� existente
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
