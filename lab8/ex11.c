/*
11. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares.
*/

#include <stdio.h>

int main(){
    int vet[5];

    for(int i = 0; i < 5; i++){
        scanf("%d\n", &vet[i]);
    }

    for(int i = 0; i < 5; i++){
        if(i % 2 == 0){
            printf("%d\n", &vet[i]);
        }
    }

    return 0;
}