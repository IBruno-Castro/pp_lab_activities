#include <stdio.h>

/*
31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/

int main(){
    int x;

    printf("Digita um número inteiro: ");
    scanf("%d", &x);

    printf("antecessor de x = %d, sucessor de x = %d", x - 1, x + 1);

    return 0;
}