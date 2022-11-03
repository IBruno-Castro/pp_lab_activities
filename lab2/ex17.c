/*
17. Faça um programa que calcule e mostre a área de um trapézio.
*/

#include <stdio.h>

int main(){
    float baseMaior, baseMenor, altura, area;

    printf("Digite a base maior, menor, e a altura do trapezio: ");
    scanf("%f %f %f", &baseMaior, &baseMenor, &altura);

    if(baseMaior > 0 && baseMenor > 0){
        area = ((baseMaior + baseMenor)*altura)/2;
    } else {
        printf("Bases invalidas");
    }

    return 0;
}