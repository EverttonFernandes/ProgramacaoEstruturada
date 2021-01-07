#include<stdio.h>
#include<stdlib.h>
main(){
    int f[5]={1,2,3,4,5},*p,*q,i,j;
    p=f;///p aponta para a primeira posi��o do vetor, ou seja p=&f[0];
    q=f+4;/// q aponta para a ultima posi��o de mem�ria do vetor, ou seja q=f[4];
    for (i=0 ; i<5 ; i++){///for para percorrer o vetor f assim atr�ves dos ponteiros inverte cada conte�do do ultimo ao primeiro
        *(p+i)=*(q-i);/// ficando nessa ordem 5,4,3,2,1
    }
    *p = *(q-2); ///onde o conte�do de p que era 5, ele recebe um novo valor que � 3, pq o q volta duas casas e o seu conteudo
    /// que est� na posi��o 2 � fixado na posi��o 0 do vetor ou seja na posi��o 0 temos 3 como conte�do
    *(q-*p)-=*p+*q;///posi��o 4 e pos 0, acesso os dois conteudos e subtraio assim resultado em 2, agora 2-=3+1 fica 4-2 que da 2.
    q--; p++;//p avan�a uma posi��o a frente, ficando p=&f[1];, e q volta uma posi��o ficando q=[3];
    *p+=*q;//na posi��o 1 temos (4) como conteudo e na posi��o 3 temos (2) ent�o fica 6 na posi��o 1
    f[3] = 2+*q*(*p);//posi��o 3 recebe como conte�do= 2+2*6
    for (p=f ; p<=q; p++){
        printf("%i ",*p);
    }
}
/* TESTE DE MESA
    pos     pos     pos     pos     pos |
    0       1       2       3       4   |
    cont    cont    cont    cont    cont
f   1       2       3       4       5   |
    5       4       3       2       1
    3
                                    2
            6

                                            |*p     |*q     |i      |j
                                            |&f[0]  |       |       |
                                            |       |&f[4]  |       |
                                            |&f[1]  |
                                            |       |f[3]
*/
