#include <stdio.h>

/*
11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h 
(quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e 
M em m/s.

*/

void main(){
    float km, ms;

    printf("Digita uma velocidade em m/s: ");
    scanf("%f", &ms);
    km = ms*3.6;

    printf("%fm/s eh igual a %fkm/h", ms, km);

}