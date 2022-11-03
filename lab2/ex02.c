/*
2.Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada
do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;

    printf("Digite um numeros: ");
    scanf("%f", &x);

    if(x >= 0){
        x = sqrt(x);
        printf("raiz quadrada de x eh %f", x);
    } else {
        printf("Esse numero nao eh valido");
    }

    return 0;
}