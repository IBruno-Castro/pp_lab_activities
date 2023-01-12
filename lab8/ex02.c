/*
2. Escreva um programa que contenha duas variáveisinteiras. Compare seus endereços e exiba 
o maior endereço.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    if(&x > &y){
        printf("x: %d", &x);
    } else {
        printf("y: %d", &y);
    }

    return 0;
}
