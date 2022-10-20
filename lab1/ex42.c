#include <stdio.h>

/*
42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se 
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% 
de imposto sobre o salário-base
*/

int main(){
    float salary;

    printf("Digite o salário-base: ");
    scanf("%f", &salary);

    salary = salary - (salary*0.02);

    printf("Salario = %f", salary);

    return 0;
}