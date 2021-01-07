#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/** Escreva um programa que pergunte para o usuário se ele deseja cadastrar ou consultar.
Se ele escolher cadastrar peça para o usuário cadastrar pessoas e guarde em uma struct.
Caso escolha consultar o programa deve pedir um nome e mostrar os dados dessa pessoa caso ela exista.
 O programa deverá gravar e carregar os dados de pessoas cadastradas automaticamente de um arquivo. **/

void carrega_arquivo();
void cadastrar();
void consultar();
void salva_arquivo();

struct pessoa{
    char nome[50];
    char endereco[50];
    int dia;
    int mes;
    int ano;
};
struct pessoa cadastro[50];
int t=0;
main(){
    int opcao;
    carrega_arquivo();
    printf("1 - para cadastrar\n2 - para consultar\n3 - Encerrar programa\n");
    do{
        system("cls");
        printf("1 - para cadastrar\n2 - para consultar\n3 - Encerrar programa\n");
        fflush(stdin);
        scanf("%i",&opcao);

        switch(opcao){
        case 1:
            cadastrar();
            break;
        case 2:
            consultar();
            break;
        }
    }while(opcao!=3);
    salva_arquivo();
}

void cadastrar(){
    printf("Informe seus dados para se cadastrar: \n");
    printf("Seu nome: ");
    gets(cadastro[t].nome);
    fflush(stdin);
    printf("Seu endereco: \n");
    gets(cadastro[t].endereco);
    fflush(stdin);
    printf("Dia em que nasceu: \n");
    scanf("%i",cadastro[t].dia);
    fflush(stdin);
    printf("Mes em que nasceu: \n");
    scanf("%i",cadastro[t].mes);
    fflush(stdin);
    printf("Ano em que nasceu: \n");
    scanf("%i",cadastro[t].ano);

    t++;
    fflush(stdin);
    printf("Pessoa cadastrada com sucesso! \n");
    system("pause");
}
void carrega_arquivo(){
    FILE *ponteiro_arq;
    ponteiro_arq=fopen("exe3","wb");
    if(ponteiro_arq!=NULL){
        while(!feof(ponteiro_arq)==0){
            fread(cadastro+t,sizeof(struct pessoa),t,ponteiro_arq);
            t++;
        }
        t--;
    }
}
void consultar(){
    char busca_nome[50];
    int i;
    printf("Digite o nome da pessoa que voce deseja consultar os dados: \n");
    gets(busca_nome);
    for(i=0; i<t; i++){
        if(strstr(cadastro[i].nome,busca_nome)!=NULL){
            printf("%s mora no endereco %s e nasceu %i/%i/%i \n",cadastro[i].nome,cadastro[i].endereco,
            cadastro[i].dia,cadastro[i].mes,cadastro[i].ano);
        }
    }
    system("pause");
}
void salva_arquivo(){
    FILE *ponteiro_arq = fopen("exe3","wb");
    fwrite(cadastro, sizeof(struct pessoa), t, ponteiro_arq);
    fclose(ponteiro_arq);
}
