/*
7. Faça um programa que receba 6 números inteiros e mostre:
 Os números pares digitados;
 A soma dos números pares digitados;
 Os números ímpares digitados;
 A quantidade de números ímpares digitados;
*/
#include <stdio.h>

int main(){
    int counter = 0, x = 0;
    int vetor[6];

    printf("Digite seis valores para um vetor: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &vetor[i]);
    }

    for (int j = 0; j < 6; j++){
        if (vetor[j]%2 == 0){
            printf("Par: %d\n", vetor[j]);
            x = x + vetor[j];
        } else {
            printf("impar: %d\n", vetor[j]);
            counter++;
        }
    }

    printf("\nSoma dos pares: %d\nQuantidade de impar: %d", x, counter);

    return 0;
}