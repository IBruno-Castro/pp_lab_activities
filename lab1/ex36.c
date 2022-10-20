#include <stdio.h>

/*
36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um 
cilindro circular é calculado por meio da seguinte fórmula: V = pi * raio2 * altura, onde pi = 
3.141592.
*/

int main(){
    float h, r, v, pi = 3.141592;

    printf("Digita uma altura e um raio pro cilindro: ");
    scanf("%f %f", &h, &r);
    v = pi*(r*r)*h;

    printf("Volume do cilindro = %f", v);

    return 0;
}