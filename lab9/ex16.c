/*
16. Faça um programa que leia dois números N e M:
a) Crie e leia uma matriz N x M de inteiros;
b) Crie e construa uma matriz transposta M x N de inteiros;
c) Mostre as duas matrizes.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int **a, **b;
    int m, n;

    scanf("%d %d", &n, &m);

    if(a = (int **) malloc(n * sizeof(int *)) == NULL){
        return 1;
    }

    for (int i = 0; i < n; i++){
        if(a[i] = (int *) malloc(m * sizeof(int)) == NULL){
            return 1;
        }
        
        for (int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    if(b = (int **) malloc(m * sizeof(int *)) == NULL){
        return 1;
    }

    for (int i = 0; i < m; i++){
        if(b[i] = (int *) malloc(n * sizeof(int)) == NULL){
            return 1;
        }
        
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];

            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < n; i++){
        free(a[i]);
    }

    for (int i = 0; i < m; i++){
        free(b[i]);
    }

    free(a);
    free(b);
    
    return 0;
}