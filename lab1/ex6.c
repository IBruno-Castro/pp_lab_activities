#include <stdio.h>

/*
6.Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A 
formula de conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a 
temperatura em Celsius.
*/

int main(){

    float celsius1, fahren1;

    printf("Digita uma temperatura em C: ");
    scanf("%f", &celsius1);

    fahren1 = celsius1*(9.0/5.0)+32.0;

    printf("Convertida para Fahrenheit temos: %fF", fahren1);

    return 0;
}
