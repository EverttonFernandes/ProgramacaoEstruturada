#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

///Escrever suas próprias versões das funções de manipulação de strings.
 ///Os parâmetros e retornos devem ser idênticos aos originais.

void tamanho(char palavra[]){
    int tam;
    int i;

    for(i=0 ; palavra[i]!='\0'; i++){
        tam=tam1;
    }
    //tam=strlen(palavra);
    printf("O tamanho da string informada e %i \n\n",tam1);
}////FUNÇÃO QUE MOSTRA O TAMANHO DA STRING
/*void compara(char palavra[],char palavra2[]){
    int i;
    int j;
    int cont=0;
    int tam1;
    int tam2;
    tam1=strlen(palavra);
    tam2=strlen(palavra2);
    if(tam1==tam2){
        while(cont==0){

        }
    }
}*/
main(){
    char palavra[50];
    char palavra2[15];
    int i,j;
    char letra1,letra2;
    char tam1=0;
    printf("Digite uma palavra: \n");
    do{
        letra1=getche();
        palavra[tam1]=letra1;
        tam1++;
    }while(letra1!=13 || tam1<50);
    tamanho(&palavra);
    //printf("Digite outra palavra: \n");
    //gets(palavra2);
    //compara(&palavra,&palavra2);
}
