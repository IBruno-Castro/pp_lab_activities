/*
15. Crie um programa que receba três valores (obrigatoriamente maiores que zero), 
representando as medidas dos três lados de um triângulo. Elabore funções para:
a) Determinar se eles lados formam um triângulo, sabendo que:
  O comprimento de cada lado de um triângulo é menor do que a soma dos outros
dois lados.
b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo 
que:
  Chama-se equilátero o triângulo que tem três lados iguais;
  Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
  Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
*/

#include <stdio.h>

void triCheck(float a, float b, float c){
    int check = 0;
    
    if (a + b > c && b + c > a && a + c > b){
        check = 1;
        printf("Eh triangulo\n");
    }

    if (check && a == b && b == c){
        printf("Eh equilatero");
    }

    if (check && a == b || b == c || a == c) {
        printf("Eh isosceles");
    }

    if (check && a != b && b != c && a != c)
    {
        printf("Eh escaleno");
    }
}

int main(){
    float a, b, c;

    printf("Digite tres lados de um triangulo ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0)
    {
        triCheck(a, b, c);
    }
    
    return 0;
}