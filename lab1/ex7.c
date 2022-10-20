#include <stdio.h>

/*
7. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A 
fórmula de conversão é: C = 5.0*(F- 32.0)/9.0, sendo C a temperatura em Celsius e F a 
temperatura em Fahrenheit.

*/

int main(){
 
    float fahren2, celsius2;
    printf("Digita uma temperatura em F: ");
    scanf("%f", &fahren2);

    celsius2 = 5.0*(fahren2-32.0)/9.0;

    printf("Convertida para Celsius temos: %fC", celsius2);

    return 0;
}