/*
5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if(x%2 == 0){
        printf("x eh par");
    } else {
        printf("x eh impar");
    }

    return 0;
}