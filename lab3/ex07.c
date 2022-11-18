/*
7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média.
*/

#include <stdio.h>

int main(){

    int x, y;

    x = 0;

    printf("Digite dez valores: ");
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &y);
        
        if (y >= 0)
        {
            x = x + y;
        } else {
            i--;
        }
       
    }

    printf("%d", x/10);

    return 0;
}