/*
19. Escreva uma função que aceita como parâmetro um array de inteiros com N valores, e
determina o maior elemento do array e o número de vezes que este elemento ocorreu no 
array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a 
função deve retorna para o programa que a chamou o valor 15 e o número 3 (indicando que 
o número 15 ocorreu 3 vezes). A função deve ser do tipo void.
*/

void filtro(int vet[], int n, int *t, int *a){
    int contador;
    
    for (int i = 0; i < n; i++){
        contador = 0;

        if (vet[i] > *a)
        {
            *a = vet[i];

            for (int j = 0; j < n; j++){
                if (vet[j] == vet[i]){
                    contador++;
                }
            }

            *t = contador;
        }
        
    }
}