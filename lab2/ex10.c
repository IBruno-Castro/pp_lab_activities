/*
10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
    Homens: (72,7 * h) – 58,0
    Mulheres: (62,1 * h) – 44,7
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float h, weight;
    char gender;

    printf("Digite sua altura: ");
    scanf("%f", &h);

    printf("Digite o primeiro caractere de seu genero: ");
    scanf(" %c", &gender);

    if(gender == 'h' || gender == 'H'){
        weight = (72.7*h) - 58;
        printf("Seu peso ideal eh %f", weight);
    }
    if(gender == 'm' || gender == 'M'){
        weight = (62.1*h) - 44.7;
        printf("Seu peso ideal eh %f", weight);
    }


    return 0;
}