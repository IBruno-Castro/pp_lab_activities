/*
44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo 
a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.
*/

#include <stdio.h>

int main(){
    float hDegrau, hFinal;

    printf("Digita a altura desejada e a altura de cada degrau: ");
    scanf("%f %f", &hFinal, &hDegrau);

    printf("Voce deve subir %f degrais", (int) (hFinal/hDegrau));

    return 0;
}