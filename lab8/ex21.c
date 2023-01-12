/*
21. Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe 
o ponteiro ao array. Agora, some mais um (+1) a cada posição do array usando o ponteiro 
(use *)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5] = {0, 0, 0 , 0, 0};
    int *p = vet;

    for(int i = 0; i < 5; i++){
        *(p + i) = *(p + i) + 1;
        printf("%d", *(p + i));
    }

    return 0;
}