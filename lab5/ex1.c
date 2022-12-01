/*1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[6] = {1, 0, 5, -2, -5, 7};

    int soma = A[0] + A[1] + A[5];

    printf("A soma de %d, %d e %d eh %d\n", A[0], A[1], A[5], soma);

    A[4] = 100;

    for(int i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }

    return 0;
}