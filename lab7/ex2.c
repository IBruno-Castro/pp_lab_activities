/*
2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
os dados em uma estrutura.
*/

#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[20];
    int idade;
    char endereco[100];
};

int main(){
    struct pessoa humano;

    printf("Digite seu nome: ");
    fgets(humano.nome, 20, stdin);
    setbuf(stdin, NULL);

    printf("Digite sua idade: ");
    scanf("%d", &humano.idade);
    setbuf(stdin, NULL);

    printf("Digite seu endereco: ");
    fgets(humano.endereco, 100, stdin);

    printf("Nome: %sRua: %d\nEndereco: %s", humano.nome, humano.idade, humano.endereco);

    return 0;
}