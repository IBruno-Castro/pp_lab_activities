/*
18. Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do
ano anterior. Faça programa que determine o salário atual do funcionário.
*/

#include <stdio.h>

int main(){
   /*
        1 a cada loop acrescenta um ano
        2 ano vai até 2022
        3 a cada loop salario é multiplicado por um aumento e esse aumento é dobrado a cada ano
    */
   float aumento = 0.015;
   float salario;

   printf("Digite o salario do funcionario: ");
   scanf("%f", &salario);



    for (int i = 1996; i <= 2022; i++){
        salario = salario*(1+aumento);
        aumento = aumento*2;        
    }

    printf("Salario atual = %.2f\n", salario);

    return 0;
}