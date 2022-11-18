/*
6. Faça um programa que leia 10 inteiros e imprima sua média.
*/

#include <stdio.h>

int main(){

    int x, y;

    x = 0;

    printf("Digite dez valotes: ");
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &y);

        x = x + y;
    }

    printf("%d", x/10);

    return 0;
}