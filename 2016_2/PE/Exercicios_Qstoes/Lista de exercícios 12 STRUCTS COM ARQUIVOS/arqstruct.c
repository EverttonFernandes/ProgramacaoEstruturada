#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct filme {
    char titulo[200];
    int ano;
    int idioma;
};
struct filme locadora[100];
int t=0;

void cadastrar(){
    printf("Informe o titulo do filme: ");
    gets(locadora[t].titulo);
    printf("Informe o ano do filme: ");
    scanf("%i",&locadora[t].ano);
    printf("Informe o idioma do filme:\n1 - Dublado\n2 - Legendado\n3 - Dublado/Legendado\n");
    scanf("%i",&locadora[t].idioma);
    t++;
    fflush(stdin);
    printf("Filme cadastrado!\n");
    system("pause");
}

void listar(){
    int i;
    for (i=0 ; i<t ; i++){
        printf("Titulo: %s\n",locadora[i].titulo);
        printf("Ano: %i\n",locadora[i].ano);
        if (locadora[i].idioma == 1)
            printf("Idioma: Dublado\n\n");
        if (locadora[i].idioma == 2)
            printf("Idioma: Legendado\n\n");
        if (locadora[i].idioma == 3)
            printf("Idioma: Dublado/Legendado\n\n");
    }
    system("pause");
}

void remover(){
    char nome[100];
    printf("Informe o titulo do filme que deseja remover: ");
    gets(nome);
    int i, j;
    for (i=0 ; i<t ; i++){
        if ( strstr(locadora[i].titulo, nome) != NULL ){
            for (j=i ; j<t-1 ; j++)
                locadora[j] = locadora[j+1];
            t--;
            i--;
        }
    }
    printf("Filme(s) removido(s)\n");
    system("pause");
}

void consultar(){
    char nome[100];
    printf("Informe o titulo do filme que deseja consultar: ");
    gets(nome);
    int i;
    for (i=0 ; i<t ; i++){
        if ( strstr(locadora[i].titulo, nome) != NULL ){
            printf("Titulo: %s\n",locadora[i].titulo);
            printf("Ano: %i\n",locadora[i].ano);
            if (locadora[i].idioma == 1)
                printf("Idioma: Dublado\n\n");
            if (locadora[i].idioma == 2)
                printf("Idioma: Legendado\n\n");
            if (locadora[i].idioma == 3)
                printf("Idioma: Dublado/Legendado\n\n");
        }
    }
    system("pause");
}

void salva_arquivo(){
    FILE *arq = fopen("locadora","wb");
    fwrite(locadora, sizeof(struct filme), t, arq);
    fclose(arq);
}

void carrega_arquivo(){
    FILE *arq = fopen("locadora","rb");
    if (arq != NULL){
        while(feof(arq)==0){
            fread(locadora+t, sizeof(struct filme), 1, arq);
            t++;
        }
        t--;
    }
}

main(){
    int op;
    carrega_arquivo();
    do{
        system("cls");
        printf("1 - Cadastrar filme\n2 - Consultar filme\n3 - Remover filme\n4 - Listar filmes cadastrados\n5 - Sair\n\nEscolha uma opcao: ");
        scanf("%i",&op);
        fflush(stdin);
        if (op == 1)
            cadastrar();
        if (op == 2)
            consultar();
        if (op == 3)
            remover();
        if (op == 4)
            listar();

    }while(op!=5);
    salva_arquivo();
}
