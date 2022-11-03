/*
12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste número.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num;

    printf("Digite um numero inteiro > 0: ");
    scanf("%d", &num);

    if(num < 0){
        printf("Numero invalido");
    } else { 
        printf("Soma dos algarismos: %d", log(num));
    }

    return 0;
}