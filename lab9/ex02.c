/*
2.Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória.
Em seguida, leia do usuário seus valores e imprima o vetor lido
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *p;

    printf("Qual o tamanho do vetor a ser lido? ");
    scanf("%d", &n);

    if((p = (int *) malloc(n*sizeof(int)) == NULL)){
        return 1;
    }

    printf("Digite o vetor: ");
    for(int i = 0; i < n; i++){
        scanf("%d", (p + i));
    }
    for(int i = 0; i < n; i++){
        printf("\n%d", *(p + i));
    }

    free(p);

    return 0;
}