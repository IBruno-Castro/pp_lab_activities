/*
15. Faça um programa que contenha um menu
*/

#include <stdio.h>
#include <string.h>

int main(){
    char S1[20], S2[20];
    int counter = 0;
    int length, lenght2, op, i, j;
    char l1, l2;

    do
    {
        do
        {
            printf("\n\nEscolha uma opcao do menu:\n1. Digitar uma string\n2 Imprimir o tamanho da string\n3. Comparar a string com uma nova\n4. Concatenar a string S1 com uma nova string S2\n5. Imprimir a string S1 de forma reversa\n6. Contar quantas vezes um dado caractere aparece na string S1\n7. Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2.\n8. Verificar se uma string S2 eh substring de S1\n9. Retornar uma substring da string S1\n10. Encerrar o programa\n\nOpcao: ");

            scanf("%d", &op);
            printf("\n");
            setbuf(stdin, NULL);
            
            if (op < 1 || op  > 10){
                printf("Opcao invalida\n\n");
            }
            
        } while (op < 1 || op  > 10);
        
        switch (op)
        {
        case 1:
            //Lê a string do usuario
            printf("Digite a string: ");
            fgets(S1, 20, stdin);
            setbuf(stdin, NULL);

            break;
        case 2:
            //imprime o tamanho da string utilizando a funcao strlen
            printf("Tamanho da string: %d", strlen(S1));
            
            break;
        case 3:
            //lê uma segunda funcao
            printf("Digite a segunda string: ");
            fgets(S2, 20, stdin);
            setbuf(stdin, NULL);

            //verifica se a comparacao das duas é igual a zero e mostra o resultado ao usuario
            if(strcmp(S1, S2) == 0){
                printf("\nAs strings sao iguais!");
            } else {
                printf("\nAs strings sao diferentes...");
            }

            break;
        case 4:
            printf("Digite a segunda string: ");
            fgets(S2, 20, stdin);
            setbuf(stdin, NULL);

            //concatena duas strings
            printf("\n%s", strcat(S1, S2));

            break;
        case 5:
            length = strlen(S1);

            //comecando pelo final da string, o laço vai imprimindo cada caracter ate o de indice 0
            for (i = length; i >= 0; i--){
                printf("%c", S1[i]);
            }

            break;
        case 6:
            length = strlen(S1) - 1;

            printf("Qual caracter deve ser procurado?: ");
            scanf("%c", &l1);

            // o laco verifica se cada caracter da string eh igual ao caracter procurado, se sim, ele adiciona um no contador
            for (i = 0; i < length; i++){
                if (S1[i] == l1){
                    counter++;
                }
            }

            printf("%d ocorrencias de %c", counter, l1);

            break;
        case 7:
            printf("Digite o caracter que deve ser trocado: ");
            scanf("%c", &l1);

            printf("Digite um caracter para substitui-lo: ");
            setbuf(stdin, NULL);
            scanf("%c", &l2);

            //verifica se cada caracter eh igual ao que dever ser trocado, se sim, ele substitui e sai do laco
            for (i = 0; i < length; i++){
                if (S1[i] == l1){
                    S1[i] = l2;
                    break;
                }
            }

            fputs(S1, stdout);

            break;
        case 8:
            printf("Digite a segunda string: ");
            fgets(S2, 20, stdin);
            setbuf(stdin, NULL);

            length = strlen(S1) - 1;
            lenght2 = strlen(S2) - 1;
            j = 0;

            for (i = 0; i < length; i++){
                
                if (S1[i] == S2[j]){
                    j++;
                } else {
                    j = 0;
                }

                if (j == lenght2){
                    printf("S2 eh substring de S1");
                    break;
                }
            }

            break;
        case 9:
            printf("Por qual indice da string a substring deve ser gerada? ");
            scanf("%d", &j);
            setbuf(stdin, NULL);

            printf("Qual deve ser o tamanho da string? ");
            scanf("%d", &length);

            for (i = 0; i < length; i++){
                S2[i] = S1[j];
                j++;
            }
            S2[i] = '\0';

            fputs(S2, stdout);
            break;
        }

    } while (op != 10);

    return 0;
}