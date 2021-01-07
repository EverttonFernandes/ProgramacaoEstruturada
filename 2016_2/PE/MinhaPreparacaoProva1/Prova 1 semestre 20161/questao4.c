#include<stdio.h>
#include<stdlib.h>
main(){
    int f[5]={1,2,3,4,5},*p,*q,i,j;
    p=f;///p aponta para a primeira posição do vetor, ou seja p=&f[0];
    q=f+4;/// q aponta para a ultima posição de memória do vetor, ou seja q=f[4];
    for (i=0 ; i<5 ; i++){///for para percorrer o vetor f assim atráves dos ponteiros inverte cada conteúdo do ultimo ao primeiro
        *(p+i)=*(q-i);/// ficando nessa ordem 5,4,3,2,1
    }
    *p = *(q-2); ///onde o conteúdo de p que era 5, ele recebe um novo valor que é 3, pq o q volta duas casas e o seu conteudo
    /// que está na posição 2 é fixado na posição 0 do vetor ou seja na posição 0 temos 3 como conteúdo
    *(q-*p)-=*p+*q;///posição 4 e pos 0, acesso os dois conteudos e subtraio assim resultado em 2, agora 2-=3+1 fica 4-2 que da 2.
    q--; p++;//p avança uma posição a frente, ficando p=&f[1];, e q volta uma posição ficando q=[3];
    *p+=*q;//na posição 1 temos (4) como conteudo e na posição 3 temos (2) então fica 6 na posição 1
    f[3] = 2+*q*(*p);//posição 3 recebe como conteúdo= 2+2*6
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
