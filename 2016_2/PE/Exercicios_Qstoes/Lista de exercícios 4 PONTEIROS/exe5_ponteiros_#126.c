#include<stdio.h>
main(){
int v[3],*p,*q;
char c[4],*l;
p=&v[1]; // p recebe aponta para a 2° posição do vetor ou seja a posição 1
*(p-1)=10; //
*p=*(p-1)-1;
q=p+(*p-v[0]);
c[0]='a';
l=&c[0];
v[2]=*p+v[0]-6;
c[1]=*l+v[2];
*l+=(*q-*p)*4;
c[2]=*l-*q/v[0];
c[3]='\0';
printf("%s",&c[0]);
}
/* TESTE DE MESA
         0     1     2     3                     0     1     2     3     4
int  v |     |     |     |     |      char c  |     |     |     |     |     |

  *p  |   *q



*/
