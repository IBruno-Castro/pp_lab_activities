/*
1. Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui.
*/

#include <stdio.h>

int main(){
    int mat[4][4];
    int counter = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite um numero para a posicao %dx%d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (mat[i][j] > 10){
                printf("\n%d", mat[i][j]);
                counter++;
            }
        }
    }
    
    printf("\n%d numeros maiores que zero", counter);

    return 0;
}