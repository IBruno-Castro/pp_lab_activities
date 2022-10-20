#include <stdio.h>

/*
32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu 
dobro.
*/

int main(){
    int x;

    printf("Digita um número inteiro: ");
    scanf("%d", &x);

    printf("%d", (3*x + 1) + (2*x - 1));

    return 0;
}