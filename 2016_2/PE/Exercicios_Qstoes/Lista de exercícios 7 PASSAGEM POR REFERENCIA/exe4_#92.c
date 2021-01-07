#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

///Escrever suas próprias versões das funções de manipulação de strings.
///Os parâmetros e retornos devem ser idênticos aos originais.

char meu_strlen(char string_recebida[]);/// PROTÓTIPO STRLEN
void meu_strcmp(char string1_strcmp[],char string2_strcmp[]); /// PROTÓTIPO_STRCMP
void meu_strcpy(char string1_strcpy[],char string2_strcpy[]); /// PROTÓTIPO_STRCPY
void meu_strcat(char string1_strcat[],char string2_strcat[]); /// PROTÓTIPO_STRCAT

main(){
    setlocale(LC_ALL, "Portuguese");
    char string_strlen[20];
    char string1_strcmp[20];
    char string2_strcmp[20];
    char strcpy_destino[20];
    char strcpy_origem[20];
    char string1_strcat[20];
    char string2_strcat[20];
    int i=0;
/*
    printf("\t\t\t\t\t\t\tPROGRAMA QUE FAZ AS FUNÇÕES DE STRINGS MANUALMENTE\n\n");
    printf("Digite uma palavra e vamos descobrir qual o seu tamanho: \n");
    scanf("%s",string_strlen);
    int tam_strlen = meu_strlen(string_strlen);///CHAMADA DA FUNÇÃO STRLEN
    printf("O tamanho da string é de: %i caracteres \n\n",tam_strlen);

    printf("Digite uma string : \n");
    scanf("%s",string1_strcmp);
    printf("Digite outra string e vamos comparar com a primeira: \n");
    scanf("%s",string2_strcmp);
    meu_strcmp(&string1_strcmp,&string2_strcmp);/// CHAMADA STRCMP
*/
    printf("Digite uma string : \n");
    scanf("%s",strcpy_destino);
    printf("Digite outra string no qual sera copiada para a string anterior(destino) : \n");
    scanf("%s",strcpy_origem);
    meu_strcpy(strcpy_destino,strcpy_origem);/// CHAMADA DA FUNÇÃO STRCPY E ENVIO POR PARAMETRO
/*
    printf("Digite uma string : \n");
    scanf("%s",string1_strcat);
    printf("Digite outra string no qual sera concatenada com a anterior) : \n");
    scanf("%s",string2_strcat);
    meu_strcat(&string1_strcat,&string2_strcat);/// CHAMADA DA FUNÇÃO STRCPY E ENVIO POR PARAMETRO

}
char meu_strlen(char string_recebida[]){///FUNÇÃO QUE MOSTRA O TAMANHO DA PALAVRA INFORMADA
    int i;
    int tam=0;
    for(i=0; string_recebida[i]!='\0'; i++){
        tam++;
    }
      tam++;///contando o caracter '\0' no fim da string
    return tam;

}
void meu_strcmp(char string1_recebida[],char string2_recebida[]){///COMPARA AS STRINGS
    int i=0;
    do{
        i++;
    }while(string1_recebida[i]==string2_recebida[i] && string1_recebida[i]!='\0' && string2_recebida[i]!='\0');

    if(string1_recebida[i]== '\0' && string2_recebida[i]=='\0'){
        printf("As strings são iguais!!!\n\n");
    }
    else{
        printf("As strings são diferentes!!!\n\n");
    }
}*/
void meu_strcpy(char string1_strcpy_destino[],char string2_strcpy_origem[]){///COPIA A 2°STRING PARA A 1°STRING
    //char vet_aux;/// USAR UM VETOR AUXILILIAR
    int i;
    do{
        string1_strcpy_destino[i]=string2_strcpy_origem[i];
        i++;
    }while(string1_strcpy_destino[i]!='\0' && string2_strcpy_origem[i]!='\0');
    printf("%s e %s\n",string1_strcpy_destino,string2_strcpy_origem);
}/*
void meu_strcat(char string1_strcat_recebida[],char string2_strcat_recebida[]){///CONCATENA AS STRINGS
    int i=0;
    ///inicio:
    char string3_strcat_concatenada[20];
    while(string1_strcat_recebida[i]!='\0'){
        i++;
        ///goto inicio;

    }
    if(string1_strcat_recebida=='\0'){
        string1_strcat_recebida[i]=string2_strcat_recebida;
    }

    printf("%s ",string1_strcat_recebida);
}
*/
