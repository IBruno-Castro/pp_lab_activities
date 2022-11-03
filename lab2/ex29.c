/*
29. Faça uma prova de matemática para crianças que estão aprendendo a somar números
inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a
pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça
cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de
quantas vezes o aluno acertou.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int resposta, num1, num2, i, counter;
    
    counter = 0;
    i = 1;

    while(i <= 5){
        num1 = rand() % 100;
        num2 = rand() % 100;

        printf("%d + %d\nResposta = ", num1, num2);
        scanf("%d", &resposta);

        if(resposta == (num1 + num2)){
            printf("Resposta certa! :D\n");

            counter++;
        } else {
            printf("Resposta errada :(\n");
        }

        i++;
    }
    
    printf("Voce acertou %d", counter);

    return 0;
}