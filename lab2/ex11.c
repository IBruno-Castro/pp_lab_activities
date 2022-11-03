/*
11. Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5
+ 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem:
“Número inválido”
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num;

    printf("Digite um numero inteiro > 0: ");
    scanf("%d", &num);

    if(num <= 0){
        printf("Numero invalido");
    } else {
        num = (num/100) + ((num/10)%10) + (num%10);
        printf("Soma dos algarismos: %d", num);
    }

    return 0;
}