#include<stdio.h>

/* Escreva uma fun��o calcule recursivamente e retorne um elemento de uma PA. O dados
como primeiro elemento, raz�o e o n�mero do elemento desejado dever�o ser informados
pelo usu�rio. */

int pa(int ele, int raz, int ned){
    if(ned==1)
        return ele;
    return pa(ele+raz,raz,ned-1);
}
main(){
    int ele;
    int raz;
    int ned;

    scanf("%i",&ele);
    scanf("%i",&raz);
    scanf("%i",&ned);
    int result_elemento=pa(ele,raz,ned);
    printf("%i",result_elemento);

}
