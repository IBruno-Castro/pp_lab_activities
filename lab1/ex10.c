#include <stdio.h>

/*
10. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s 
(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M
em m/s.

*/

void main(){
    float km, ms;

    printf("Digita uma velocidade em km/h: ");
    scanf("%f", &km);
    ms = km/3.6;

    printf("%fkm/h eh igual a %fm/s", km, ms);
}