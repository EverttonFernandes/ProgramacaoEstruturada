#include<stdio.h>
#include<conio.h>
#include<string.h>
/*
3.8 Crie  um  programa  que  auxilie  na  tarefa  de  procurar  pares  para  cruza  de  cães  de  raça.  O
programa deverá possuir um menu. Caso a primeira opção seja escolhida, o usuário deverá
cadastrar  um  novo  cão  fornecendo  informações  como  nome,  raça,  sexo,  e  idade.  Caso  a
segunda  opção  seja  escolhida,  o  usuário  deverá  informar  o  nome  de  um  cão,  e  caso  este
esteja  cadastrado,  o  programa  deverá  mostrar  os  dados  de  todos  os  outros  cães  do  sexo
oposto  e  da  mesma  raça  do  cão  informado.  Caso  a  terceira  opção  seja  escolhida,  o
programa  deverá  ser  encerrado.  As  informações  cadastradas  deverão  ser  automaticamente
gravadas e carregadas de um arquivo externo. Utilize uma struct para armazenar o cadastro dos cães
*/
struct cao{
    char nome[100];
    char sexo;
    char raca[100];
    int idade;
};
int t=0;
struct cao dados[100];

void inicia(){
    FILE *arq;
    arq = fopen("caes.dat","rb");
    if (arq==NULL){
        arq = fopen("caes.dat","wb");
        fclose(arq);
        arq = fopen("caes.dat","rb");
    }
    else{
        while(!feof(arq)){
            fread(dados+t,sizeof(struct cao),1,arq);
            t++;
        }
        t--;
    }
}
void cadastra(){
    FILE *arq;
    arq=fopen("caes.dat","wb");

    printf("\nDigite o nome do cao:");
    gets(dados[t].nome);
    fflush(stdin);
    printf("\nDigite o sexo do cao:(M ou F)");
    dados[t].sexo=getche();
    fflush(stdin);
    printf("\nDigite a raca do cao:");
    gets(dados[t].raca);
    fflush(stdin);
    printf("\nDigite a idade do cao:");
    scanf("%i",&dados[t].idade);
    fflush(stdin);
    t++;
    fwrite(dados,sizeof(struct cao),t,arq);
    fclose(arq);
}
void carrega(char nome[100]){
    char raca[100],sexo;
    int i;
    for(i=0;i<t;i++){
        if(strcmp(dados[i].nome,nome)==0){
            strcpy(raca,dados[i].raca);
            sexo=dados[i].sexo;
       }
    }
    printf("\n\n Nome:%s",nome);
    printf("\n Raca:%s",raca);
    printf("\n Sexo:%c",sexo);
    printf("\n\n\n Pares para cruza:\n");
    for(i=0;i<t;i++){
        if(strcmp(dados[i].raca,raca)==0 && dados[i].sexo!=sexo){
            printf("\nNome: %s",dados[i].nome);
            printf("\nRaca: %s",dados[i].raca);
            printf("\nIdade: %i",dados[i].idade);
            printf("\nSexo: %c\n",dados[i].sexo);
        }
    }
    system("pause");
}
int main(){
char r,nome[100];
    inicia();
    do{
        system("cls");
        printf("Digite a acao que deseja executar:\n");
        printf("1-Cadastrar cachorro.\n");
        printf("2-Consultar pares para cruza.\n");
        printf("3-Sair.\n");
        r=getche();
    switch(r){
        case '1':
            system("cls");
            cadastra();
            break;
        case '2':
            system("cls");
            printf("\n\nDigite o Nome de cao que deseja consultar:");
            gets(nome);
            carrega(nome);
            break;
        case '3':
            printf("\nTenha um Bom dia :)");
            break;
        default:
            printf("\nAcao Invalida!!!");
            break;
    }
}while(r!='3');
}
