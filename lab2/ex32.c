/*

*/

#include <stdio.h>

int main(){
    int codigo;
    float quant, preco;

    printf("Qual o codigo do produto? Quantos dele? ");
    scanf("%d %f", &codigo, &quant);

    switch (codigo)
    {
    case 100:
        preco = quant*1.2;
        printf("Produto: cachorro quente\nPreco: RS%.2f", preco);
        break;
    case 101:
        preco = quant*1.3;
        printf("Produto: bauru simples\nPreco: RS%.2f", preco);
        break;
    case 102:
        preco = quant*1.5;
        printf("Produto: bauru com ovo\nPreco: RS%.2f", preco);
        break;
    case 103:
        preco = quant*1.2;
        printf("Produto: hamburguer\nPreco: RS%.2f", preco);
        break;
    case 104:
        preco = quant*1.7;
        printf("Produto: cheeseburguer\nPreco: RS%.2f", preco);
        break;
    case 105:
        preco = quant*2.2;
        printf("Produto: suco\nPreco: RS%.2f", preco);
        break;
    case 106:
        preco = quant;
        printf("Produto: refrigerante\nPreco: RS%.2f", preco);
        break;
    default:
    printf("Codigo invalido");
        break;
    }

    return 0;
}