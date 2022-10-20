#include <stdio.h>

/*
33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área
*/

int main(){
    int x;

    printf("Digita um número inteiro: ");
    scanf("%d", &x);

    printf("Area do quadrado = %d", x*x);

    return 0;
}