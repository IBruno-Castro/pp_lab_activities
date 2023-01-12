/*
5. Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2
valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda 
variável. Escreva o conteúdo das 2 variáveis na tela.
*/

#include <stdio.h>
#include <stdlib.h>

void comp(int *a, int *b){
    int temp = *a;
    
    if(a < b){
        *a = *b;
        *b = temp;
    }
    
}

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    comp(&x, &y);

    printf("%d %d", x, y);

    return 0;
}