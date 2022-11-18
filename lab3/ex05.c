/*
5. Faça um programa que peça ao usuário para digitar 10 valores e some-os.
*/

#include <stdio.h>

int main(){

    float x, y;

    x = 0;

    printf("Digite dez valotes: ");
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &y);

        x = x + y;
    }

    printf("%.2f", x);

    return 0;
}