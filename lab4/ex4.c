/*
4. Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de
outro número inteiro. Ex.: 1, 4, 9...
*/

#include <stdio.h>
#include <math.h>

void quadradoCheck(float x){
    if (sqrt(x) > 0 && sqrt(x) - (int)(sqrt(x)) == 0){
        printf("Quadrado perfeito");
    } else {
        printf("Nao eh quadrado perfeito");
    }
}

int main(){
    float x;

    printf("Digite um numero para verificar sua raiz: ");
    scanf("%f", &x);

    quadradoCheck(x);

    return 0;
}