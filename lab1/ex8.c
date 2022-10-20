#include <stdio.h>

/*
08. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula 
de conversão é: C = K-273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.

*/

int main(){

    float kelvin1, celsius3;
    printf("Digita uma temperatura em K: ");
    scanf("%f", &kelvin1);

    celsius3= kelvin1-273.15;

    printf("Convertida para Celsius temos: %fC", celsius3);

    return 0;
}