/*
51. Escreva um programa que leia as coordenadas x e y de pontos no R
2 e calcule sua distância da origem (0, 0).
*/

#include <stdio.h>

int main(){
    float x, y, modulo;

    printf("Digite a coordenada x e y de um ponto: ");
    scanf("%f, %f", &x, &y);

    modulo = sqrt((x*x)+(y*y));

    printf("A distancia ate a origem eh: %f", modulo);

    return 0;
}