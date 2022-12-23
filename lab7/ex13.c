/*
13. Faça um programa que gerencie o estoque de um mercado e:
 Crie e leia um vetor de 5 produtos, com os dados: código (inteiro), nome (máximo 15
letras), preço e quantidade;
 Leia um pedido, composto por um código de produto e a quantidade. Localize este
código no vetor e, se houver quantidade suficiente para atender ao pedido
integralmente, atualize o estoque e informe o usuário. Repita este processo até ler um
código igual a zero.
Se por algum motivo não for possível atender ao pedido, mostre uma mensagem
informando qual erro ocorreu.
*/

#include <stdio.h>
#include <string.h>

struct produto
{
    int codigo;
    char nome[15];
    int price;
    int quant;
};

int main(){
    struct produto estoque[5];
    int cod, q;

    for (int i = 0; i < 5; i++)
    {
        setbuf(stdin, NULL);
        printf("Preencha as informacoes\nNome: ");
        fgets(estoque[i].nome, 15, stdin);

        printf("\nCodigo: ");
        scanf("%d", &estoque[i].codigo);

        printf("\nPreco: ");
        scanf("%d", &estoque[i].price);

        printf("\nQuantidade: ");
        scanf("%d", &estoque[i].quant);
    }

    printf("Qual o codigo do produto para busca? ");
    scanf("%d", &cod);

    printf("Quantos? ");
    scanf("%d", &q);

    while (cod >= 0){
        for (int i = 0; i < 5; i++){
            if (estoque[i].codigo == cod && estoque[i].quant <= q){
                estoque[i].quant = estoque[i].quant - q;
                printf("%d %s retiradas do estoque", q, estoque[i].nome);
            }   
        }
        
        cod--;
    }

    return 0;
}
