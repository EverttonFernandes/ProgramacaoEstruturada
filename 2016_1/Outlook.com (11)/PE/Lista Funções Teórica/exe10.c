#include<stdio.h>
#include<math.h>

void raizes(int a, int b, int c, int *delta, int *x, int *y){
	int d = pow(b,2)-4*a*c;
	*delta = d;

	if(d>0){
		*x = (-b+sqrt(d))/2*a;
		*y = (-b-sqrt(d))/2*a;
	}
}

int main(){
	int a, b, c, x=0, y=0, d=0;

	printf("Informe valor para A: ");
	scanf("%i", &a);
	printf("Informe valor para B: ");
	scanf("%i", &b);
	printf("Informe valor para C: ");
	scanf("%i", &c);

	raizes(a, b, c, &d, &x, &y);

	if(d<0){
		printf("Não há raizes\n");
	}else{
		printf("Raiz 1: %i\n", x);
		printf("Raiz 2: %i\n", y);
	}
}