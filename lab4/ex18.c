/*
18. Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o resultado de xz para o programa principal. 
Atenção não utilize nenhuma função pronta de exponenciação.
*/

#include <stdio.h>

int expoente(int x, int z){
    int y = 1;
    
    if (z == 0)
    {
        return 1;
    } else if(x == 0){
        return 0;
    }

    for (int i = 1; i <= z; i++)
    {
        y = y*x;
    }

    return y;
}

int main(){
    int x, z, y;

    do
    {
        printf("Digite dois numeros inteiros positivos: ");
        scanf("%d %d", &x, &z);

        if (x < 0 || z < 0)
        {
            printf("Valor negativo eh invalido");
        }
        
    } while (x < 0 || z < 0);
    
    y = expoente(x, z);

    printf("%d elevado a %d eh igual a %d", x, z, y);
    
    return 0;
}
