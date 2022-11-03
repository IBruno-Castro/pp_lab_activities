/*
39. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor
salário terão um aumento proporcionalmente maior do que os funcionários com um salário
maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus
adicional de salário. Faça um programa que leia:
    o valor do salário atual do funcionário;
    o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float salarioAtual, tempo, novoSalario;

    printf("Digite o seu salario atual: ");
    scanf("%f", &salarioAtual);

    printf("Digite o seu tempo na empresa em anos: ");
    scanf("%f", &tempo);

    novoSalario = 0;

    if(salarioAtual <= 500){
        novoSalario = salarioAtual*1.25;
    }
    if(salarioAtual > 500 && salarioAtual <= 1000){
        novoSalario = salarioAtual*1.2;
    }
    if(salarioAtual > 1000 && salarioAtual <= 1500){
        novoSalario = salarioAtual*1.15;
    }
    if(salarioAtual > 1500 && salarioAtual <= 2000){
        novoSalario = salarioAtual*1.1;
    }

    if(tempo >= 1 && tempo<=3){
        novoSalario = novoSalario + 100;
    }
    if(tempo >= 4 && tempo<=6){
        novoSalario = novoSalario + 200;
    }
    if(tempo >= 7 && tempo<=10){
        novoSalario = novoSalario + 300;
    }
    if(tempo > 10){
        novoSalario = novoSalario + 500;
    }


    if(novoSalario == 0){
        printf("Nao houve reajuste");
    } else {
        printf("Seu salario agora eh %f", novoSalario);
    }


    return 0;
}