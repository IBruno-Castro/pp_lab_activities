/*
12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 +
6 + 11 + 22 + 33 = 78
*/

#include <stdio.h>

int main(){
    int num, x = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++){
        if (num%i == 0){
            x = x + i;
        }
    }

    printf("Soma dos divisores: %d", x);
    
    return 0;
}