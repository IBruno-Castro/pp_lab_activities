#include <stdio.h>

//4. Leia um número real e imprima o resultado do quadrado desse número.

int main(){

    float x, xSquare;

    printf("Digite um numero: ");
    scanf("%f", &x);

    xSquare = x*x;

    printf("O quadrado de x eh: %f", xSquare);    

    return 0;
}