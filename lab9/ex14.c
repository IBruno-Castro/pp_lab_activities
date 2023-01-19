/*
14. Construa um programa que leia o número de linhas e de colunas de uma matriz de números
reais, aloque espaço dinamicamente para esta e a inicialize com valores fornecidos pelo
usuário. Ao final, o programa deverá retornar a matriz na saída padrão com layout
apropriado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float **a;
    int m, n;

    scanf("%d %d", &m, &n);

    if(a = (float **) malloc(m * sizeof(float *)) == NULL){
        return 1;
    }

    for (int i = 0; i < m; i++){
        a[i] = (float *) malloc(n * sizeof(float));
        
        for (int j = 0; j < n; j++){
            scanf("%f", &a[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%f ", a[i][j]);
        }

        printf("\n");
    }
    
    for (int i = 0; i < m; i++){
        free(a[i]);
    }

    free(a);
    
    return 0;
}