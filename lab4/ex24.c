/*
24. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a 
saída para n = 6 seria:
*/

#include <stdio.h>

void piramide(int n){
    int base = 2*n - 1;

    for (int i = 1; i <= base; i += 2)
    {
        for (int k = 0; k < (base - i)/2; k++){
            printf(" ");
        }
        for (int j = 0; j < i; j++){
            printf("*");
        }
        for (int k = 0; k < (base - i)/2; k++){
            printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int altura;

    printf("Digite qual a altura do triangulo: ");
    scanf("%d", &altura);

    piramide(altura);
    
    return 0;
}