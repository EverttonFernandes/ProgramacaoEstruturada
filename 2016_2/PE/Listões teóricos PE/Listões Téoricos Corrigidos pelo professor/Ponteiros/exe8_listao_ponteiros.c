#include<stdio.h>
#include<stdlib.h>

/* int num, *pont;
*pont = 10;
printf("o número é %d", num);
 */
main(){

int num;
int *pont;
pont=&num;
*pont = 10;
printf("o numero e %i", num);
}
