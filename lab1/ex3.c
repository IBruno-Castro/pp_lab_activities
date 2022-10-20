#include <stdio.h>

//03. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

int main(){
    int int1, int2, in3, intSum;
           
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &int1 &int2 &int3);

    intSum = int1 + int2 + int3;

    printf("A soma dos numeros eh: %d", intSum);

    return 0;
}