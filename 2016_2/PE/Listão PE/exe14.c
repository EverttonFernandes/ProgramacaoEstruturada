#include<stdio.h>
#include<stdlib.h>

/* Escreva um programa que tenha duas vari�veis globais. Ent�o crie uma fun��o que pe�a
para o usu�rio digitar nomes, idade, e sal�rios de funcion�rios de uma empresa. Esta
fun��o deve atribuir � primeira vari�vel global o nome do funcion�rio mais antigo, e para a
segunda o nome do funcion�rio com maior sal�rio. Mostre na fun��o main estes dois
nomes, ap�s a chamada da fun��o. */

char funcionario_antigo[50];
float maior_salario;

void dados(){
    int i;
    char nome1[50];
    char nome2[50];
    char nome3[50];
    int idade1;
    int idade2;
    int idade3;
    float salario1;
    float salario2;
    float salario3;

    for(i=0 ; i<3 ; i++){
        printf("Informe o nome do funcionario 1: \n");
        gets(nome1);
        fflush(stdin);
        printf("Informe a idade do funcionario 1: \n");
        scanf("%i",&idade1);
        fflush(stdin);
        printf("Informe o salario do funcionario 1: \n");
        scanf("f",&salario1);
        fflush(stdin);

        printf("Informe o nome do funcionario 2: \n");
        gets(nome2);
        fflush(stdin);
        printf("Informe a idade do funcionario 2: \n");
        scanf("%i",&idade2);
        fflush(stdin);
        printf("Informe o salario do funcionario 2: \n");
        scanf("f",&salario2);
        fflush(stdin);


        if(idade1>idade2 && idade1>idade3){
            strcpy(funcionario_antigo,nome1);
        }
        if(idade2>idade1 && idade2>idade3){
            strcpy(funcionario_antigo,nome2);
        }
        if(idade3>idade2 && idade3>idade1){
            strcpy(funcionario_antigo,nome3);
        }

        if(salario1>salario2 && salario1>salario3){
            maior_salario=salario1;
        }
        if(salario2>salario1 && salario2>salario3){
            maior_salario=salario2;
        }
        if(salario3>salario2 && salario3>salario1){
            maior_salario=salario3;
        }
       break;
    }
}

main(){
    dados();
    printf("O funcionario mais antigo da empresa e o %s \n",funcionario_antigo);
    printf("O maior salario da empresa e de %.2f \n",maior_salario);
}

