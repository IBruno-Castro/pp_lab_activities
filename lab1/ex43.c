#include <stdio.h>

/*43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
- o total a pagar com desconto de 10%;
- o valor de cada parcela, no parcelamento de 3% sem juros;
- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).*/


int main(){
    float price, desconto, parcela, comissaoV, comissaoP;

    printf("Digite um valor total: ");
    scanf("%f", &price);

    desconto = price*0.9;
    parcela = valor/3;
    comissaoV = desconto*0.05;
    comissaoP= price*0.05;

    printf("Total a pagar com 10 por cento de desconto: %f\n", desconto);
    printf("O valor de cada parcela, no parcelamento de 3 por cento sem juros: %f\n", parcela);
    printf("\n", comissaoV;
    printf("Comissao do vendedor, no caso da venda ser parcelada: %f\n", comissaoP);

    return 0;
}