/*
7. Crie um programa que contenha uma função que permita passar por parâmetro dois
números inteiros A e B. A função deverá calcular a soma entre estes dois números e
armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá
modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.
*/

#include <stdio.h>
#include <stdlib.h>

void mod(int *a, int *b){
    *a = *a + *b;
}

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    mod(&x, &y);

    printf("\n%d %d", x, y);

    return 0;
}