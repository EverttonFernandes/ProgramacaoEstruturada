#include<stdio.h>
#include<stdlib.h>

/* 1 Elabore um programa que contenha uma struct global que possibilite o cadastro de animais
de uma pet shop. Os animais devem ter os atributos nome, tipo do animal, dia, mês e ano
de nascimento, e nome do dono. */

struct cadastro{
    char nome[20];
    char tipo[20];
    int dia;
    int mes;
    int ano_nascimento;
    char dono[20];
};

struct cadastro animais[1];

/*2 - Crie então uma função que possibilite o cadastro de um novo animal, pedindo para o
usuário informar todos os atributos.*/

void cadastrando(int *t){
    printf("Informe o nome do animal: \n");
    fflush(stdin);
    gets(animais[*t].nome);
    printf("Informe a raca do do animal: \n");
    fflush(stdin);
    gets(animais[*t].tipo);
    printf("Informe o dia que o animal nasceu: \n");
    fflush(stdin);
    scanf("%i",&animais[*t].dia);
    printf("Informe o mes do nascimento deste animal: \n");
    fflush(stdin);
    scanf("%i",&animais[*t].mes);
    printf("Informe o ano de nascimento do animal: \n");
    fflush(stdin);
    scanf("%i",&animais[*t].ano_nascimento);
    printf("Informe o nome do dono deste animal: \n ");
    fflush(stdin);
    gets(animais[*t].dono);
    (*t)++;
}

/*3- Crie também uma função que pergunte para o usuário uma string. Após, mostre na tela
todos os animais que tenham em seu nome ou no nome do seu dono a string informada
pelo usuário. */

void string(int t){
    int i, achou=0;
    char nome_string[20];
    printf("Informe um nome: \n");
    fflush(stdin);
    gets(nome_string);
    for(i=0; i<t; i++){
        if(strstr(animais[i].nome,nome_string)!=NULL || strstr(animais[i].dono,nome_string)!=NULL){
            printf("%s \n",animais[i].nome);
            printf("%s \n",animais[i].dono);
            printf("%s \n",animais[i].tipo);
            printf("%i \n",animais[i].dia);
            printf("%i \n",animais[i].mes);
            printf("%i \n",animais[i].ano_nascimento);
            achou++;
        }
    }
}
/* 4- Crie uma função que dado o nome de um animal, mostre na tela a idade deste animal. */

void idade_animal(int t){
    char nome_animal[20];
    int idade;
    int i;
    printf("Informe o nome do animal: \n");
    fflush(stdin);
    gets(nome_animal);
    for(i=0 ; i<t; i++){
        if(strcmp(animais[i].nome,nome_animal)==0){
            idade=2016-animais[i].ano_nascimento;
            printf("Seu cachorrinho tem %i anos de idade \n",idade);
        }
    }
}
main(){
    int t=0;
    int opcao;

    printf("\n#####  #####  ######  #####   ##   ##  ######  #####");
    printf("\n## ##  ##       ##   ##       ##   ##  ##  ##  ## ##  ");
    printf("\n#####  #####    ##    #####   #######  ##  ##  #####   ");
    printf("\n##     ##       ##        ##  ##   ##  ##  ##  ##     ");
    printf("\n##     #####    ##    #####   ##   ##  ######  ##\n");
    while(opcao!=0){


    printf("Qual das opcoes voce deseja?\n1) Cadastrar o seu cachorrinho \n2)Buscar o nome do cachorro no sistema \n3)Idade do cachorro cadastrado \n0) Caso queira sair \n");
    fflush(stdin);
    scanf("%i",&opcao);
        switch(opcao){
        case 1:
            cadastrando(&t);
            break;
        case 2:
            string(t);
            break;
        case 3:
            idade_animal(t);
            break;
        }
    }
}
