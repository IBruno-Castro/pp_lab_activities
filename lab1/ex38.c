#include <stdio.h>

/*
38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele 
recebeu um aumento de 25%.
*/

int main(){
    float salario;

    printf("Digita o valor do salario: ");
    scanf("%f", &salario);

    printf("Novo salario = %f", salario*1.25);

    return 0;
}