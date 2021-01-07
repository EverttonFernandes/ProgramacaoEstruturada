#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[15], str2[15];
    int i, j, k, size_str1, size_str2;

    printf("Digite uma palavra de ate 10 letras: ");
    fgets(str1, 15, stdin);

    printf("Digite outra palavra de ate 10 letras: ");
    fgets(str2, 15, stdin);

    size_str1 = strlen(str1)-1;
    size_str2 = strlen(str2)-1;

    for(i=0; i<size_str1; i++){
        for(j=0; j<size_str2; j++){
            if(str1[i] == str2[j]){
                for(k=i; k<size_str1; k++){
                    str1[k]= str1[k+1];
                }
            }
        }
    }    puts(str1);
    return 0;
}
