/*
52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido 
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que 
leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do 
prêmio com base no valor investido.
*/

#include <stdio.h>

int main(){
    float premio, aposta1, aposta2, aposta3, valor1, valor2, valor3, bilhete;

    printf("Digita o valor do prêmio: ");
    scanf("%f", &premio);

    printf("Digite o valor investido dos tres apostadores: ");
    scanf("%f %f %f", &aposta1, &aposta2, &aposta3);

    bilhete = aposta1+aposta2+aposta3;

    valor1 = premio*(aposta1/bilhete);
    valor2 = premio*(aposta2/bilhete);
    valor3 = premio*(aposta3/bilhete);

    printf("O apostador 1 recebe %f\n", valor1);
    printf("O apostador 2 recebe %f\n", valor2);
    printf("O apostador 3 recebe %f", valor3);

    return 0;
}