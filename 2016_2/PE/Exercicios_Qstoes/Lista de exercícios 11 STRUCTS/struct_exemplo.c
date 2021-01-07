#include<stdio.h>
#include<string.h>

struct pessoa{
    char nome[30];
    char idade;
    char genero;
};

main(){
    struct pessoa alunos[5];
    int i,j;
    for(i=0; i<2; i++){
        gets(alunos[i].nome);
        scanf("%i",&alunos[i].idade);
        fflush(stdin);
        alunos[i].genero=getche();
    }
    for(j=0; j<2; j++){
        printf("%s \n",alunos[j].nome);
        printf("%i \n",alunos[j].idade);
        printf("%c \n",alunos[j].genero);
    }
}
