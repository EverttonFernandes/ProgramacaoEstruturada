#include<stdio.h>
#include<string.h>

struct pessoa{
    char nome[30];
    char idade;
    char genero;
};

main(){
    struct pessoa alunos[2];
    int i,j;

    for(i=0; i<2; i++){
        printf("Digite os dados do aluno %i \n",i+1);
        printf("Nome: \n");
        gets(alunos[i].nome);
        fflush(stdin);
        printf("Idade: \n");
        scanf("%i",&alunos[i].idade);
        fflush(stdin);
        printf("Genero: \n");
        alunos[i].genero=getche();
        printf("\n");
        fflush(stdin);
    }
    for(j=0; j<2; j++){
        printf("O aluno %i se chama %s \n",j+1,alunos[j].nome);
        printf("Sua idade eh: %i \n",alunos[j].idade);
        printf("E seu genero eh: %c \n",alunos[j].genero);
    }
}
