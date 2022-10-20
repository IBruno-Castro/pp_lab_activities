/*
28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três 
valores lidos.
*/

#include <stdio.h>

int main(){
    float a, b, c, sumSquare;

    printf("Digite três valores: ");
    scanf("%f %f %f", &a, &b, &c);

    sumSquare = (a*a)+(b*b)+(c*c);

    printf("A soma dos quadrados dos numeros eh %f", sumSquare);

    return 0;
}