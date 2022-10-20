#include <stdio.h>

/*
09. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula 
de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.

*/

int main(){

    float kelvin2, celsius4;
    printf("Digita uma temperatura em C: ");
    scanf(%f, &celsius4);

    kelvin2 = celsius4+273.15;

    printf("Convertida para kelvin temos: %fK", kelvin2);

    return 0;
}