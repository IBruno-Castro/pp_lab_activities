/*
19. Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!.
*/

#include <stdio.h>

int fatorial(int n){
    int x = 1;

    for (int i = 1; i <= n; i++)
    {
        x = x*i;
    }
    
    return x;
}

int main(){
    int x, fat;

    do
    {
        printf("Digite um numero inteiro positivo para calcular seu fatorial: ");
        scanf("%d", &x);
    } while (x < 0);
    
    fat = fatorial(x);

    printf("O fatorial de %d eh %d", x, fat);

    return 0;
}