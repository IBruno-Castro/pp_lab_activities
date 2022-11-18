/*
14. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, d1, d2;

    srand(time(NULL));

    printf("Quantos vezes os dados vao rolar? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        d1 = rand() % 6;
        d2 = rand() % 6;

        if (d1 < d2){
            printf("Valor %d do dado 1 eh menor do que valor %d do dado 2\n\n", d1, d2);
        } else if (d1 > d2){
            printf("Valor %d do dado 1 eh maior do que valor %d do dado 2\n\n", d1, d2);
        } else {
            printf("Valores dos dados sao iguais: %d\n\n", d1);
        }
    }

    return 0;
}