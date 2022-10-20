#include <stdio.h>

/*
12. Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de 
conversão é: K = 1.61*M, sendo K a distância em quilômetros e M em milhas.
*/

void main(){
    float km, milhas;

    printf("Digita uma distância em milhas: ");
    scanf("%f", &milhas);
    km = 1.61*milhas;

    printf("%f milhas eh igual a %fkm", milhas, km);
    
}