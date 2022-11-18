/*
23. Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas
do chamado Triangulo de Floyd. Para n = 6, temos:
*/

#include <stdio.h>

int main(){
    int n, j = 1, x = 1, num = 1;
    
    printf("Digite quantos ramos vc quer para o Triangulo: ");
    scanf("%d", &n);

    while (j <= n){
        while(j >= x){
            printf("%d ", num);
            x++;
            num++;
        }
        
        printf("\n");
        
        x = 1;
        j++;
    }

    return 0;
}