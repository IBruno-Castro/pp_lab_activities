/*
7. Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em
graus Fahrenheit. A fórmula de conversão é: 𝐹 = 𝐶 ∗ (9,0/5,0) + 32,0, sendo F a temperatura
em Fahrenheit e C a temperatura em Celsius.
*/

#include <stdio.h>

float celsiusConversor(float celsius){
    return celsius*(9.0/5.0) + 32;
}

int main(){
    float celsius, fahrenheit;

    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsiusConversor(celsius);

    printf("%f celsius eh igual a %f fahrenheit", celsius, fahrenheit);

    return 0;
}