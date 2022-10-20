/*
53. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem 
como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela
*/

#include <stdio.h>

int main(){
    float c, l, p;

    printf("Digite comprimento e largura do terreno: ");
    scanf("%f %f", &c, &l);

    printf("Digite o preço do metro de tela: ");
    scanf("%f", &p);

    printf("O preço é %f", (c*2) + (l*2));

    return 0;
}