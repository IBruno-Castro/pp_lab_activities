/*
2. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá 
escrever a soma dos valores encontrados nas respectivas posições X e Y
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[8];
    int x, y;

    printf("Digite oito valores para um vetor: ");
    for(int i = 0; i < 8; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Digite duas posicoes do vetor: ");
    scanf("%d %d", &x, &y);

    printf("Soma das duas posicoes = %d", vetor[x] + vetor[y]);

    return 0;
}