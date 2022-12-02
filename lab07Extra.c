//Exercicio Bonus Lab07 02/12/2022

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[200];

    printf("Digite uma frase: ");
    fgets(frase, 200, stdin);

    printf("%s", frase);

    for(int i = 0; i < 200; i++){

        //Se o caracter for igual a R, troque por L
        if(frase[i] == 'R'){
            frase[i] = 'L';
        }

        //se tiverem dois r em sequecia, substitua por o primeiro por l e desloque o resto da string para tras
        if(frase[i] == 'r' && frase[i + 1] == 'r'){
            frase[i] = 'l';
            for(int j = i + 1; frase[j] != '\0'; j++){
                frase[j] = frase[j + 1];
            }
        }
        else if(frase[i] == 'r' && frase[i + 1] != ' '){
            if(frase[i + 1] != ',' && frase[i + 1] != '.' && frase[i + 1] != '!' && frase[i + 1] != '?'){
                frase[i] = 'l';//se o r nao estiver no final de uma palavra, troque por l
            }
        }

    }

    printf("%s", frase);

    return 0;
}
