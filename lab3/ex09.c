/*
9. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares.
*/

#include <stdio.h>

int main(){
    int n;

    printf("Digite quantos impares devem ser mostrados: ");
    scanf("%d", &n);

    for (int i = 1; i <= n*2; i++){
        if (i%2 != 0){
            printf("%d\n", i);
        }
    }
    

    return 0;
}