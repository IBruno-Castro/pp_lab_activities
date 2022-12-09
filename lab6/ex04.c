/*
4. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa
palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra
dada por esse caractere.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    char constante;
    int counter = 0;

    printf("Digite uma frase: ");
    fgets(string, 100, stdin);

    printf("Digite um caracter para substituir as vogais: ");
    setbuf(stdin, NULL);
    scanf("%c", &constante);

    int n = strlen(string);

    for (int i = 0; i < n; i++){
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            string[i] = constante;
            counter++;
        }
        if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U'){
            string[i] = constante;
            counter++;
        }
    }
    
    printf("%s\n", string);
    printf("%d vogais", counter);
    

    return 0;
}