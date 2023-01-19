/*
8. Faça um programa para armazenar em memória um vetor de dados contendo 1500 valores
do tipo int, usando a função de alocação dinâmica de memória CALLOC:
a) Faça um loop e verifique se o vetor contém realmente os 1500 valores inicializados com 
zero (conte os 1500 zeros do vetor);
b) Atribua para cada elemento do vetor o valor do seu índice junto a este vetor;
c) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, counter = 0;

    if((p = (int *) calloc(1500, sizeof(int))) == NULL){
        return 1;
    }

    for(int i = 0; i < 1500; i++){
        if(p[i] == 0){
            counter++;
        }

        p[i] = i;

        if(i < 10 || i > 1489){
            printf("%d\n", p[i]);
        }
    }
    printf("\n%d", counter);

    free(p);

    return 0;
}