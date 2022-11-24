/*
8. Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação:
hipotenusa = √𝑎2 + 𝑏2. Faça uma função que receba os valores de a e b e calcule o valor
da hipotenusa através da equação
*/

#include <stdio.h>

float pitagoras(int a, int b){
    return sqrt(a*a + b*b);
}

int main(){
    int a, b;
    float h;

    printf("Digite o valor dos catetos: ");
    scanf("%d %d", &a, &b);

    h = pitagoras(a, b);

    printf("Hipotenusa = %f", h);

    return 0;
}