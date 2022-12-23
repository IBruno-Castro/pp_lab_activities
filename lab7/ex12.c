/*
12. Faça um programa que controla o consumo de energia dos eletrodomésticos de sua casa e:
 Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em
kW) e tempo ativo por dia (real, em horas);
 Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo.
Apresente este último dado em porcentagem.
*/

#include <stdio.h>
#include <string.h>

struct eletro
{
    char nome[15];
    int pot;
    int tempo;
};

int main(){
    struct eletro casa[5];
    int t, consumoT = 0, consumo;

    for (int i = 0; i < 5; i++){
        setbuf(stdin, NULL);
        fgets(casa[i].nome, 15, stdin);
        scanf("%d %d", &casa[i].pot, &casa[i].tempo);
    }

    scanf("%d", &t);

    for (int i = 0; i < 5; i++)
    {
        consumoT += (casa[i].pot)*casa[i].tempo;
    }
    



    return 0;
}
