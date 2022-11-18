/*
11. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.
*/

#include <stdio.h>

int main(){
    int n;

    do
    {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &n);
    } while (n < 0);
    
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }
    

    return 0;
}