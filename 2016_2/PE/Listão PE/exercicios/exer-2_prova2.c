#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*
2)
Escreva  um  programa  que  capture  como  uma  string  todo  conteúdo  de  um  arquivo  de  nome
escolhido pelo usuário, então converta todas as letras da string para letras minúsculas. Grave
o conteúdo modificado de volta no mesmo arquivo. O programa deverá ser capaz de guardar
a string obtida, independente de seu tamanho (utilize alocação dinâmica).
*/
main(){
    char *p,nome[100];
    int c=0,i;
    FILE *arq,*arq2;
    printf("Digite o nome do arquivo que deseja abrir:");
    gets(nome);
    arq = fopen(nome,"r");
    if(arq==NULL){
        printf("Arquivo nao encontrado!!!");
    }
    else{
    p=malloc(sizeof(char));
    while(!feof(arq)){
            fgets(p+c,2,arq);
            //*(p+c)=fgetc(arq);
            if(*(p+c)>=65 && *(p+c)<=90){
                *(p+c)+=32;
            }
            c++;
            p=realloc(p,sizeof(char)*(c+1));
        }
        fclose(arq);
        arq2=fopen(nome,"w+");
        fputs(p,arq);
        fclose(arq2);
    }
}
