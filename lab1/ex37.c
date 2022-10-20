#include <stdio.h>

/*
37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo 
em vista que o desconto foi de 12%.
*/

int main(){
    float price;

    printf("Digita o preco do produto: ");
    scanf("%f", &price);

    printf("Valor com desconto = %f", price - (price*0.12));

    return 0;
}