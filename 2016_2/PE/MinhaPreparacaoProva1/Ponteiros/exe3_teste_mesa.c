#include <stdio.h>

///Exerc�cio 3: O programa 1 foi modificado levemente e virou 3. Complete os peda�os que faltam.

void Troca (int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
} /* Fim de Troca */
int main (void) {
    int x, y;
    int *px, *py;
/* Nao se usa isto normalmente. Isto � um exerc�cio para aprendermos ponteiros */
    px = &x;
    py = &y;
/* * Como seria o comando scanf com px e py ao inves x e y? * Dica: lembre -se que era scanf("%d %d", &x, &y);
 * Agora olhe os dois comandos acima e verifique quem e igual * a &x e &y. */
    scanf("%d %d",px ,py );
/* Como seria Troca com px e py? */
    Troca( &px,&py );
/* Como seria printf com px e py? */
    printf("Troquei ----> %d %d\n",*px ,*py );
    return 0;
}
