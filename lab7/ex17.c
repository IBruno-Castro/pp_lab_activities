/*
Definir a estrutura cuja representação gráfica é dada a seguir, definir os campos com ostipos
básicos necessários e implementar o que se pede.

a) Crie um vetor Cadastro com 5 elementos;
b) Permita ao usuário entrar com dados para preencher esses 5 cadastros;
c) Encontre a pessoa com maior idade entre os cadastrados;
d) Encontre as pessoas do sexo masculino;
e) Encontre as pessoas com salario maior que 1000;
f) Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo
usuário.
*/

#include <stdio.h>
#include <string.h>

struct endereco
{
    char rua[30];
    char bairro[30];
    char cidade[30];
    char estado[30];
    char cep[10];
};

struct cadastro
{
    int idade;
    float salario;
    char sexo;
    char telefone[12];
    char nome[20];
    char identidade[30];
    char cpf[30];
    char estadoCivil[20];
    struct endereco adress;
};

int main()
{
    struct cadastro cadastros[5];
    int maiorIdade, idadeMaior, i, achou = 0;
    char id[30];

    for (i = 0; i < 5; i++){
        setbuf(stdin, NULL);
        printf("Digite o nome do cadastro: ");
        fgets(cadastros[i].nome, 20, stdin);

        setbuf(stdin, NULL);
        printf("Digite a rua do cadastro: ");
        fgets(cadastros[i].adress.rua, 30, stdout);
        
        setbuf(stdin, NULL);
        printf("Digite o bairro do cadastro: ");
        fgets(cadastros[i].adress.bairro, 30, stdout);
        
        setbuf(stdin, NULL);
        printf("Digite a cidade do cadastro: ");
        fgets(cadastros[i].adress.cidade, 30, stdout);
        
        setbuf(stdin, NULL);
        printf("Digite o estado do cadastro: ");
        fgets(cadastros[i].adress.estado, 30, stdout);
        
        setbuf(stdin, NULL);
        printf("Digite o cep do cadastro: ");
        fgets(cadastros[i].adress.cep, 10, stdout);
        
        setbuf(stdin, NULL);
        printf("Digite o sexo do cadastro: ");
        scanf("%c", &cadastros[i].sexo);
       
        printf("Digite a idade do cadastro: ");
        scanf("%d", &cadastros[i].idade);
        
        setbuf(stdin, NULL);
        printf("Digite o telefone do cadastro: ");
        fgets(cadastros[i].telefone, 12, stdout);
        
        setbuf(stdin, NULL);
        printf("Digite a identidade do cadastro: ");
        fgets(cadastros[i].identidade, 30, stdout);
        
        setbuf(stdin, NULL);
        printf("Digite o cpf do cadastro: ");
        fgets(cadastros[i].cpf, 30, stdout);
        
        setbuf(stdin, NULL);
        printf("Digite o estado civil do cadastro: ");
        fgets(cadastros[i].estadoCivil, 20, stdout);

        printf("Digite o salario do cadastro: ");
        scanf("%f", &cadastros[i].salario);

        printf("\n");
    }

    idadeMaior = cadastros[0].idade;

    printf("lista de pessoas com salario superior a 1000: ");
    for (i = 0; i < 5; i++){
        if (cadastros[i].salario > 1000){
            fputs(cadastros[i].nome, stdout);
        }
        if (cadastros[i].idade > idadeMaior)
        {
            idadeMaior = cadastros[i].idade;
            maiorIdade = i;
        }
        
    }

    printf("\nlista de pessoas do sexo masculino: ");
    for (int i = 0; i < 5; i++){
        if (cadastros[i].sexo == 'h' || cadastros[i].sexo == 'H'){
            fputs(cadastros[i].nome, stdout);
        }
    }

    printf("\npessoa mais velha: ");
    fputs(cadastros[maiorIdade].nome, stdout);

    do
    {
        setbuf(stdin, NULL);
        printf("Buscar por pessoa com id: ");
        fgets(id, 30, stdin);

        for (int i = 0; i < 5; i++){
            if (strcmp(id, cadastros[i].nome) == 0){
                achou = 1;

                printf("Encontrado\n ");
                printf("Nome: %s", cadastros[i].nome);
                printf("Rua: %s", cadastros[i].adress.rua);
                printf("Bairro: %s", cadastros[i].adress.bairro);
                printf("Cidade: %s", cadastros[i].adress.cidade);
                printf("Estado: %s", cadastros[i].adress.estado);
                printf("Cep: %s", cadastros[i].adress.cep);
                printf("Idade: %d\n", cadastros[i].idade);
                printf("Sexo: %c", cadastros[i].sexo);
                printf("Telefone: %s", cadastros[i].telefone);
                printf("Cpf: %s", cadastros[i].cpf);
                printf("Estado civil: %s", cadastros[i].estadoCivil);
                printf("Salario: %f\n", cadastros[i].salario);
            }
        }
    } while (achou != 1);
    
    return 0;
}