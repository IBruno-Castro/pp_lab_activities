/*
7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
forem iguais, imprima a mensagem: “Números iguais”
*/

#include <stdio.h>

int main(){
    float x, y;

    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);

    if(x > y){
        printf("%f maior que %f", x, y);
    }
    if(y > x){
        printf("%f maior que %f", y, x);
    } else {
        printf("Os dois sao iguais");
    }

    return 0;
}