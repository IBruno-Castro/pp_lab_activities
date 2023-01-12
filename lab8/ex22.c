/*
22. Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar a 
soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente
então a função retornará ZERO (0). Caso a função seja concluída com sucesso a mesma deve 
retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do array.
*/

#include <stdio.h>
#include <stdlib.h>

int somarArray(int *vet, int *array, int *nova, int n, int m, int t){

    if(m != n){
        printf("returned 0");
        return 0;
    }

    for(int i = 0; i < t; i++){
        *(nova + i) = *(vet + i) + *(array + i);
        printf("%d", nova[i]);
    }
    
    return 1;
}

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    int array[6] = {1, 2, 3, 4, 5};
    int nova[5];

    somarArray(vet, array, nova, 5, 6, 5);

    return 0;
}