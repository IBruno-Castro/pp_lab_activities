/*
9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
“Empréstimo concedido”
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float salario, prestacao;

    printf("Digite o salario e prestacao do emprestimo: ");
    scanf("%f %f", &salario, &prestacao);

    if(prestacao > salario*0.2){
        printf("emprestimo nao concedido");
    } else {
        printf("emprestimo concedido");
    }
    return 0;
    
}