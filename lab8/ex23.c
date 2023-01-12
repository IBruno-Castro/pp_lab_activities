/*
23. Escreva uma função que retorna o maior valor de um array de tamanho N. Escreva um 
programa que leia N valores inteiros, imprima o array com ‘k’ elementos por linha, e o maior 
elemento. O valor de ‘k’ também deve ser fornecido pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

void bigger(int *vet, int n, int *maior){
    *maior = *vet;

    for(int i = 0; i < n; i++){
        if(*(vet + i) > *maior){
            *maior = *(vet + i);
        }
    }

}

int main()
{
    int vet[5], k, maior;

    printf("Digite os valores do vetor: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
    }

    printf("Digite quantos valores por linha: ");
    scanf("%d", &k);

    bigger(vet, 5, &maior);
    printf("\n");

    for(int i = 0; i < 5; i++){
        if((i % k) == 0){
            printf("\n");
        }
        printf("%d", vet[i]);
    }

    printf("%d", maior);

    return 0;
}