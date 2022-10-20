/*
45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela 
ASCII para resolver o problema.
*/

#include <stdio.h>

int main(){
    char letraMaior, letraMenor;

    printf("Digite um caractere letra maiuscula: ");
    scanf("%c", &letraMaior);

    letraMenor = letraMaior + 32;

    printf("%c", letraMenor);

    return 0;
}