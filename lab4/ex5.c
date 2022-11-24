/*
5. Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo
que o raio é passado por parâmetro.
*/

#include <stdio.h>

float volume(float r){
    float pi = 3.14;
    
    return (4/3)*pi*(r*r*r);
}

int main(){
    float r;

    printf("Digite o tamanho da raio da esfera: ");
    scanf("%f", &r);

    r = volume(r);

    printf("Volume da esfera = %f", r);

    return 0;
}