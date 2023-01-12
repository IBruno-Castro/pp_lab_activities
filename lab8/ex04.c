/*
4. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 
variáveis e troque o seu conteúdo, i.e., esta função é chamada passando duas variáveis A e 
B, por exemplo, e após a execução da função, A conterá o valor de B e B terá o valor de A.
*/

#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    troca(&x, &y);

    printf("%d %d", x, y);

    return 0;
}