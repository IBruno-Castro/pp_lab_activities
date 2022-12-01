/*
3. Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior 
valor.
*/

#include <stdio.h>

int main(){
    int mat[4][4];
    int x;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("Digite um numero para a posicao %dx%d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    x = mat[0][0];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", mat[i][j]);

            if (mat[i][j] > x){
                x = mat[i][j];
            }
            
        }

        printf("\n");
    }

    printf("\n\n%d", x);

    return 0;
}