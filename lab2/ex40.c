/*
40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica,
de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float custoFab, custo;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custoFab);

    if(custoFab <= 12000){
        custo = custoFab*1.05;
        printf("Custo de consumidor eh %f", custo);
    }
    if(custoFab > 12000 && custoFab <=25000){
        custo = custoFab*1.25;
        printf("Custo de consumidor eh %f", custo);
    } else {
        custo = custoFab*1.35;
        printf("Custo de consumidor eh %f", custo);
    }

    return 0;
}