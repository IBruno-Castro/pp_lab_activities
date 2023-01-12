/*
24. Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis
inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do array. Escreva 
também uma função main que use essa função.
*/

#include <stdio.h>

void funcao(int *v, int n, int *min, int *max){
    *min = v[0];
    *max = v[0];

    for (int i = 0; i < n; i++)
    {
        if (v[i] < *min)
        {
            *min = v[i];
        }
        if (v[i] > *max)
        {
            *max = v[i];
        }
        
    }

}

int main(){
    int v[5] = {22, 43, 87, 45, 12};
    int min, max;

    funcao(v, 5, &min, &max);

    printf("%d %d", min, max);

    return 0;
}