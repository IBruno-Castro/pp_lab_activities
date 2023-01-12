/*
1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável
usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 666;
    float y = 3;
    char z = 'd';

    int *a = &x;
    float *b = &y;
    char *c = &z;

    printf("%d %f %c", *a, *b, *c);

    *a = 333;
    *b = 2.5;
    *c = 'b';

    printf("\n%d %f %c", *a, *b, *c);

    return 0;
}