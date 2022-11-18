/*
1. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
números maiores que 0.
*/

#include <stdio.h>

int main(){
    int x;

    for (int i = 1; i < 4; i++)
    {
        x = 3 * i;
        printf("%d\n", x);
    }
    

    return 0;
}