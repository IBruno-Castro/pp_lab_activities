#include <stdio.h>

int main()
{
    int n;

    printf("Digite o tamanho da palavra: ");
    scanf("%d", &n);

    char A[n+1];

    setbuf(stdin, NULL);

    for(int i = 0; i < n; i++){
        scanf("%c", &A[i]);
    }

    A[n] = '\0';

    printf("%s", A);

    return 0;
}
