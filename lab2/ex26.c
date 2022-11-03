/*
26. Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um
percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
*/

#include <stdio.h>

int main(){
    float km, gasL, consumo;

    printf("Digite quantos km e os litros de gasolina consumidos: ");
    scanf("%f %f", &km, &gasL);

    consumo = km/gasL;

    if(consumo < 8){
        printf("Venda o carro");
    } else {
    if (consumo<  14){
        printf("Economico");
    } else {
        printf("Super economico");
    }
    }

    return 0;
}