/*6. Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de
Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30
caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura
e exibidos na tela.*/

#include <stdio.h>
#include <string.h>

struct data{
    int dia;
    int mes;
    int ano;
};

struct funcionario {
    char nome[20];
    int idade;
    char sexo;
    int cpf;
    struct data birth;
    int setor;
    char cargo[30];
    float salario;

};

int main(){
    struct funcionario A;

    printf("Digite seu nome: ");
    fgets(A.nome, 20, stdin);
    
    printf("Digite sua idade : ");
    scanf("%d", &A.idade);
    setbuf(stdin, NULL);
    
    printf("Digite seu sexo: ");
    scanf("%c", &A.sexo);
    
    printf("Digite seu cpf: ");
    scanf("%d", &A.cpf);
    
    printf("Digite sua data de nascimento: ");
    scanf("%d %d %d", &A.birth.dia, &A.birth.mes, &A.birth.ano);
    
    printf("Digite seu setor: ");
    scanf("%d", &A.setor);
    setbuf(stdin, NULL);
    
    printf("Digite seu cargo: ");
    fgets(A.cargo, 30, stdin);
    
    printf("Digite seu salario: ");
    scanf("%f", &A.salario);

    fputs(A.nome, stdout);
    
    printf("%d\n", A.idade);
    
    printf("%c\n", A.sexo);
    
    printf("%d\n", A.cpf);
    
    printf("%d %d %d\n", A.birth.dia, A.birth.mes, A.birth.ano);
    
    printf("%d\n", A.setor);

    fputs(A.cargo, stdout);

    printf("%.2f\n", A.salario);


    return 0;
}