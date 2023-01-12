/*
12. Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o
segundo menor valor na variável do meio, e o maior valor na última variável. A função deve
retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir
os valores ordenados na tela.
*/

#include <stdio.h>

int ordem(int *a, int *b, int *c){
    int temp;

    if (*a == *b && *b == *c){
        return 1;
    }

    while ((*a <= *b && *b <= *c) == 0){
        if (*b < *a){
            temp = *a;
            *a = *b;
            *b = temp;
        } else if (*c < *b){
            temp = *b;
            *b = *c;
            *c = temp;
        }
    }
    
    return 0;
}

int main(){
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    ordem(&x, &y, &z);

    printf("%d %d %d", x, y, z);

    return 0;
}