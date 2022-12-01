/*
3. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na 
ordem inversa.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[6];

    printf("Digite seis valores para um vetor: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &vetor[i]);
    }

    printf("\n");

    for(int j = 5; j >= 0; j--){
        printf("%d\n", vetor[j]);
    }

    return 0;
}