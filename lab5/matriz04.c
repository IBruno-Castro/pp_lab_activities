/*
4. Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse 
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”.
*/

#include <stdio.h>

int main(){
    int mat[5][5];
    int x, i, j, achou = 0;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Digite um numero para a posicao %dx%d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Digite um valor x");
    scanf("%d", x);

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (mat[i][j] == x){
                achou = 1;
            }
        }
        if (achou){
            break;
        }
    }

    if (achou){
        printf("Valor x localizado;\nCoordenadas [%d],[%d] da matriz", i, j);
    } else {
        printf("Nao encontrado");
    }
    
    return 0;
}