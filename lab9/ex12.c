/*
12. Considere um cadastro de produtos de um estoque, com as seguintes informações para cada
produto:
 Código de identificação do produto: representado por um valor inteiro
 Nome do produto: com até 50 caracteres
 Quantidade disponível no estoque: representado por um número inteiro
 Preço de venda: representado por um valor real
a) Defina uma estrutura, denominada produto, que tenha os campos apropriados para
guardar as informações de um produto;
b) Crie um conjunto de N produtos (N é um valor fornecido pelo usuário) e peca ao usuário
para entrar com as informações de cada produto;
c) Encontre o produto com o maior preço de venda;
d) Encontre o produto com a maior quantidade disponível no estoque
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto{
    int cod;
    int quant;
    float price;
    char nome[50];
};

int main(){
    int n, quantM, idPM, idQM;
    float priceM;
    struct produto *estoque;

    printf("Quantos produtos tem no conjunto? ");
    scanf("%d", &n);

    if((estoque = (struct produto *) malloc(n*sizeof(struct produto))) == NULL){
        return 1;
    }

    printf("\n\nDigite as informacoes do produto: ");
    for(int i = 0; i < n; i++){
        printf("\nCodigo: ");
        scanf("%d", estoque[i].cod);

        printf("\nQuantidade: ");
        scanf("%d", &estoque[i].quant);

        printf("Preco: ");
        scanf("%f", &estoque[i].price);

        setbuf(stdin, NULL);

        printf("Nome: ");
        fgets(estoque[i].nome, 50, stdin);
    }
    printf("\n\nCheguei\n\n");

    priceM = estoque[0].price;
    quantM = estoque[0].quant;
    idPM = idQM = 0;
    printf("\n\nCheguei\n\n");

    for (int i = 0; i < n; i++)
    {
        if (estoque[i].price > priceM)
        {
            priceM = estoque[i].price;
            idPM = i;
        }

        if (estoque[i].quant > quantM)
        {
            quantM = estoque[i].quant;
            idQM = i;
        }
        
    }
    printf("\n\nCheguei\n\n");

    printf("Maior preco: %s", estoque[idPM].nome);
    printf("\nMaior quantidade: %s", estoque[idQM].nome);

    free(estoque);

    return 0;
}