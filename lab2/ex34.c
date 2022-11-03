/*
34. Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela
abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.
*/

#include <stdio.h>

int main(){
    float nota;
    int falta;

    printf("Digite sua nota: ");
    scanf("%f", &nota);
    printf("Digite o numero de faltas: ");
    scanf("%d", &falta);

    if (nota >= 0 && nota <= 10)
    {
        if (nota < 4){
            printf("Conceito E");
        } else if (nota < 5){
            falta < 21 ? printf("Conceito D") : printf("Conceito E");
        } else if(nota < 7.5){
            falta < 21 ? printf("Conceito C") : printf("Conceito D");
        } else if(nota < 9){
            falta < 21 ? printf("Conceito B") : printf("Conceito C");
        } else {
            falta < 21 ? printf("Conceito A") : printf("Conceito B");
        }
    } else {
        printf("Nota invalida");
    }

    return 0;
}