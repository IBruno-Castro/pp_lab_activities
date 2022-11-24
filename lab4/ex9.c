/*
9. Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do 
cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: 𝑉 =
 ∗ 𝑟𝑎𝑖𝑜2
∗ 𝑎𝑙𝑡𝑢𝑟𝑎, onde  = 3.141592.
*/

#include <stdio.h>

float cilindro(float h, float r){
    float pi = 3.141592;
    return pi*(r*r)*h;
}

int main(){
    float h, r;

    printf("Digite a altura e raio do cilindro: ");
    scanf("%f %f", &h, &r);

    printf("O volume do cilindro é %f", cilindro(h, r));

    return 0;
}