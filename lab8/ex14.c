/*
14. Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do array.
A função deverá preencher os elementos de array com esse valor. Não utilize índices para
percorrer o array, apenas aritmética de ponteiros.
*/

void preencher(int *a, int n, int b){
    for (int i = 0; i < n; i++){
        *(a + i) = b;
    }
}