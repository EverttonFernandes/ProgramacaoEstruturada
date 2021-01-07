#include<stdio.h>
#include<stdlib.h>
/* FIBONACCI */
main(){
    int nums[20], *p;
    p=nums; // p aponta para a primeira posição do vetor nums
    while (p-nums < 20){ // p-nums é 0 e enquanto p menor que 20 ele vai ficando nesse loop
        if (p==nums)// na primeira vez o p é igual ao vetor nums ou seja posição 0 igual a pos 0 então ele entra neste if.
            *p=0;// recebe como conteudo na primeira posição o valor 0
        else if (p==nums+1) // agora é 1 e é igual a nums+1 (1=1), sendo assim recebe como conteudo na segunda pos o valor 1
            *p=1;
        else// De agora em diante meu p não é 0 e nem 1 então ele entra nesse else
            *p=*(p-1)+*(p-2);// resolvendo os parentenses 2-1=1 e no outro parentese 2-2=0 sendo assim ele soma o conteudo da
// posição 0 + o conteudo da posição 1, e o ponteiro que aponta para a posição 3 do vetor nums recebe está soma que no caso é 1
        p++;
    }// E assim sucessivamente até p ser igual a 19
    int i;// i declarado para uso do for
    for (i=0 ; i<20 ; i++)//for varre todo o vetor nums
    printf("%i ",nums[i]);// mostra na tela o conteúdo de cada posição desse vetor
}
/* TESTE DE MESA
pos     0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16      17      18      19      20
nums    0   1   1   2   3   5   8   13  21  34  55  89  144 233 377 610 987     1597    2584    4181

*p
++      0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16      17      18      19

*/
