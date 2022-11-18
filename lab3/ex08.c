/*
8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
*/

#include <stdio.h>

int main(){

    int x, y, z;

    printf("Digite dez valores: ");
    scanf("%d", &y);

    x = y;
    z = y;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &y);
        
        if (y > x)
        {
            x = y;
        }

        if(y < z){
            z = y;
        }
       
    }

    printf("Maior numero: %d\n", x);
    printf("Menor numero: %d\n", z);

    return 0;
}