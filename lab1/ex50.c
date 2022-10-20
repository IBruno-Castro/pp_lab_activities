/*
50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua 
idade e do ano atual.
*/

#include <stdio.h>

int main(){
    int idade, anoAtual;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    printf("Voce nasceu em: %d", anoAtual - idade);

    return 0;
}