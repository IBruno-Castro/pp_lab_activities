/*
4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
 O número digitado ao quadrado
 A raiz quadrada do número digitado
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, xSquare;

    printf("Digite um numeros: ");
    scanf("%f", &x);

    if(x >= 0){
        xSquare = sqrt(x);
        x = x*x;
        printf("raiz quadrada de x eh %f\n", xSquare);
        printf("x ao quadrado eh %f", x);
    }

    return 0;
}