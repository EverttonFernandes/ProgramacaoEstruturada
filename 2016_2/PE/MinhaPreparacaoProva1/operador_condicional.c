#include<stdio.h>
#include<locale.h>
main(){
    setlocale(LC_ALL, "Portuguese");///Fun��o que habilita programar em portugues
    int n1,n2;
    printf("\t\t\t\tDigite 2 numeros para saber qual deles � o maior\n\n");
    scanf("%i",&n1);
    scanf("%i",&n2);

    ///Agora vem o operador condicional, para saber qual dos dois numeros � maior, substituindo IF e ELSE.

    n1>n2 ?///Esse ponto de interroga��o "?" funciona como se fosse um IF(ent�o l�-se: se o n1 for maior que o n2)
    printf("O %i � maior que o %i",n1,n2)/// mostro o resultado deste IF na tela!
    :///Esse dois pontos ":" funciona como se fosse um ELSE
    printf("O %i � maior que o %i",n2,n1);/// Mostro o resultado desse ELSE na tela

    ///ISSO tamb�m � conhecido como "Operador Tern�rio"
}
