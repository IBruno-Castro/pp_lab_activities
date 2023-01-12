/*
6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função
que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro
de A na própria variável A e o dobro de B na própria variável B.
*/

#include <stdio.h>
#include <stdlib.h>

int comp(int *a, int *b){

    *a = 2*(*a);
    *b = 2*(*b);

    return *a + *b;

}

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d", comp(&x, &y));

    printf("\n%d %d", x, y);

    return 0;
}