
/*
2. Declare uma matriz 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. 
Escreva ao final a matriz obtida.
*/
#include <stdio.h>

int main(){
    int mat[5][5];
    int diagonal = 0;
    int reversa = 4;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == diagonal || j == reversa){
                mat[i][j] = 0;
            }else{
                mat[i][j] = 1;
            }

            printf("%d ", mat[i][j]);
        }

        printf("\n");
        diagonal++;
        reversa--;
    }

    return 0;
}