/*
15. Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices para 
percorrer o array, apenas aritmética de ponteiros.
*/

void imprimaArray(int p[], int n){

    for (int i = 0; i < n; i++)
    {
        printf("%d", *(p + i));
    }
    
}