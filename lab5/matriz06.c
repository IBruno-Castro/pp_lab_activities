/*
6. Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a 
matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos 
acima da diagonal principal. Imprima a matriz original e a matriz transformada.
*/

#include <stdio.h>

int main(){
    int mat[4][4];
    int diagonal = 0;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            mat[i][j] = rand() % 20 + 1;

            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if(j > diagonal){
                mat[i][j] = 0;
            }
            else {
                mat[i][j] = rand() % 20 + 1;
            }

            printf("%d ", mat[i][j]);
        }
        printf("\n");
        diagonal++;
    }

    return 0;
}