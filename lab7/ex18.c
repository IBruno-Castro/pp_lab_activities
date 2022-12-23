/*
18. Escreva um programa que receba dois structs do tipo “dma”, cada um representando uma
data válida, e calcule o número de dias que decorreram entre as duas datas.
struct dma {
int dia;
int mes;
int ano;
*/

#include <stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

int main(){
    struct dma passado;
    struct dma presente;
    int diasPresente, diasPassado;

    scanf("%d %d %d", &passado.dia, &passado.mes, &passado.ano);
    scanf("%d %d %d", &presente.dia, &presente.mes, &presente.ano);

    diasPresente = presente.dia + (presente.mes * 30) + (presente.ano * 365);
    diasPassado = passado.dia + (passado.mes * 30) + (passado.ano * 365);

    printf("%d", diasPresente - diasPassado);

    return 0;
}