/*
23. Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo, 
a saída para n = 4 seria
*/

#include <stdio.h>

void trilateral(int largura){
    int h = 2*largura - 1;
    int k = 1;

    for (int i = 1; i <= h; i++)
    {
        if (i <= largura){
            for (int j = 0; j < i; j++){
                printf("*");
            }
            printf("\n");
        } else {
            for (int j = largura; j > k; j--)
            {
                printf("*");
            }
            printf("\n");
            if(k <= largura){
                k++;
            }
        }
        
    }
}

int main(){
    int largura;

    printf("Digite qual a largura do triangulo lateral: ");
    scanf("%d", &largura);

    trilateral(largura);

    
    return 0;
}