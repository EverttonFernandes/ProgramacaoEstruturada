#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/**Escreva  um  programa  que  capture  como  uma  string  todo  conte�do  de  um  arquivo  de  nome
escolhido pelo usu�rio, ent�o converta todas as letras da string para letras min�sculas. Grave
o conte�do modificado de volta no mesmo arquivo. O programa dever� ser capaz de guardar
a string obtida, independente de seu tamanho (utilize aloca��o din�mica).**/
main(){
    char *p,nome[100];
    int c=0,i;
    FILE *arq,*arq2;
    printf("Digite o nome do arquivo que deseja abrir:");
    gets(nome);
    arq = fopen(nome,"r");
    if(arq==NULL){
        printf("Arquivo nao encontrado!!!");
    }else{
        p=malloc(sizeof(char));
        while(!feof(arq)){
            *(p+c)=fgetc(arq);
            if(*(p+c)>=65 && *(p+c)<=90){
                *(p+c)+=32;
            }
            c++;
            p=realloc(p,sizeof(char)*(c+1));
        }
        fclose(arq);
        arq2=fopen(nome,"w+");
        for(i=0;i<(c-1);i++){
            fputc(*(p+i),arq);
        }
        fclose(arq2);
    }
}
