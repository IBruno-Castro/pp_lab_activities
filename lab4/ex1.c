/*
1. Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro
*/

#include <stdio.h>

int dobro(float x){
    return 2*x;
}

int main(){
    float x;

    printf("Digite um numero e receba seu dobro: ");
    scanf("%f", &x);

    x = dobro(x);
    printf("Dobro do numero = %f", x);

    return 0;
}