/*4. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram
o maior e o menor valor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5];
    int maior;
    int menor;

    printf("Digite cinco valores para um vetor: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &A[i]);
    }

    for(int j = 1; j < 5; j++){
        if(A[j - 1] < A[j]){
            maior = A[j];
        } else if(A[j - 1] > A[j]){
            menor = A[j];
        }
    }

    printf("%d\n%d", maior, menor);

    return 0;
}