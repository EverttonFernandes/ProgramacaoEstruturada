#include<stdio.h>

int f2(int x, int y){
    int z,i;
    z = x;
    for (i=1 ; i<y ; i++){
		z+=x; 
	}
	return z; 
}
int f1(int x, int y){
    int z,i;
    if (y == 0){
       z = 1;
    }else{
    	z = x;
    }
    for (i=1 ; i<y ; i++){
        z = f2(z,x);
    }
	return z; 
}
int main(){
    int a,b,c;
    printf("A: ");
    scanf("%i",&a);
    printf("B: ");
    scanf("%i",&b);
    c = f1(a,b);
    printf("%i",c);
    return 0;
}