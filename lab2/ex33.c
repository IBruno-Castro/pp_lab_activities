/*
33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule
e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a
segunda tabela).
*/

#include <stdio.h>

int main(){
    float oldPrice, newPrice;

    printf("Digite o antigo preco: ");
    scanf("%f", &oldPrice);

    if (oldPrice <= 50){
        newPrice = oldPrice*1.05;
    } else if (oldPrice <=100){
        newPrice = oldPrice*1.1;
    } else {
        newPrice = oldPrice*1.15;
    }

    if (newPrice <= 80){
        printf("Barato");
    } else if (newPrice <=120){
        printf("Normal");
    } else if (newPrice <=200){
        printf("Caro");
    } else {
        printf("Muito caro");
    }

    return 0;
}