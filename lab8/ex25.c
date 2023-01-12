/*
25. Faça um programa que possua uma função para:
 ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler 2 notas
válidas e que devolver os 2 números lidos);
 calcular a média simples e a média ponderada e retorná-las por parâmetro, onde a
segunda nota tem peso 2: media_ponderada = (n1 + n2*2)/3
*/

#include <stdio.h>

void lerNotas(float *nota1, float *nota2){
    scanf("%f", nota1);
    scanf("%f", nota2);
}

void media(float *nota1, float *nota2, float *mediaS, float *mediaP){
    lerNotas(nota1, nota2);
    
    *mediaS = (*nota1 + *nota2)/2;
    *mediaP = (*nota1 + (*nota2)*2)/3;
}

int main(){
    float mediaS, mediaP, nota1, nota2;

    media(&nota1, &nota2, &mediaS, &mediaP);

    printf("%.2f %.2f", mediaS, mediaP);

    return 0;
}