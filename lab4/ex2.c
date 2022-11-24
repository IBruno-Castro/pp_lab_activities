/*
2. Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no
formato textual por extenso. Ex.: Data: 18/11/2022, Imprimir: 18 de novembro de 2022.
*/

#include <stdio.h>

void data(int dia, int mes, int ano){

    switch (mes)
    {
    case 1:
        printf("%d de Janeiro de %d", dia, ano);
        break;
    case 2:
        printf("%d de Fevereiro de %d", dia, ano);
        break;
    case 3:
        printf("%d de Março de %d", dia, ano);
        break;
    case 4:
        printf("%d de Abril de %d", dia, ano);
        break;
    case 5:
        printf("%d de Maio de %d", dia, ano);
        break;
    case 6:
        printf("%d de Junho de %d", dia, ano);
        break;
    case 7:
        printf("%d de Julho de %d", dia, ano);
        break;
    case 8:
        printf("%d de Agosto de %d", dia, ano);
        break;
    case 9:
        printf("%d de Setembro de %d", dia, ano);
        break;
    case 10:
        printf("%d de Outubro de %d", dia, ano);
        break;
    case 11:
        printf("%d de Novembro de %d", dia, ano);
        break;
    case 12:
        printf("%d de Dezembro de %d", dia, ano);
        break;
    default:
        printf("Mes invalido");
        break;
    }

}

int main(){
    int dia, mes, ano;

    printf("Digite a data atual: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    data(dia, mes, ano);

    return 0;
}