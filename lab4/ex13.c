/*
13. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo
representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá 
ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’ 
será efetuada uma divisão
*/

#include <stdio.h>

void calculadora(float x, float y, char op){
    switch (op)
    {
    case '+':
        printf("Resultado = %.2f", x + y);
        break;
    case '-':
        printf("Resultado = %.2f", x - y);
        break;
    case '*':
        printf("Resultado = %.2f", x * y);
        break;
    case '/':
        printf("Resultado = %.2f", x / y);
        break;  
    default:
        printf("Operacao invalida");
        break;
    }
}

int main(){
    float a, b;
    char op;

    printf("Digite qual operacao vc deseja atraves de seus simbolos: ");
    scanf("%c", &op);

    printf("Digite os dois numeros pra operacao: ");
    scanf("%f %f", &a, &b);

    calculadora(a, b, op);

    return 0;
}