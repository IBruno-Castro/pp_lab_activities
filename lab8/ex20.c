/*
20. Implemente uma função que receba como parâmetro um array de números reais de
tamanho N e retorne quantos números negativos há nesse array. Essa função deve obedecer 
ao protótipo:
int negativos(float *vet, int N);
*/

int negativos(float *vet, int n){
    int t = 0;
    
    for (int i = 0; i < n; i++){
        if (*(vet + i) < 0){
            t++;
        }
    }

    return t;
}