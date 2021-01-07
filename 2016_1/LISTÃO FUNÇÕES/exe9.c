#include<stdio.h>
#include<stdlib.h>

int a,b,c,d;
void f(){
    d = pow(b,2)-4*a*c;
     return;
}
int main(){
    scanf("%i %i %i",&a,&b,&c);
    f();
    printf("%i",d);
    getch();
    return 0;
    }
