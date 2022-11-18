/*
2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetição for, a segunda while, e a terceira do-while.
*/

#include <stdio.h>

int main(){
    for (int i = 1; i <= 100; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    int x = 1;

    while (x <=100)
    {
        printf("%d ", x);

        x++;
    }
    printf("\n");

    int y = 1;
    do
    {
        printf("%d ", y);
        y++;
    } while (y <= 100);
    
    

    return 0;
}