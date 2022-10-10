#include <stdio.h>

int main() {
    int n1, n2;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);


    printf("Escolha a operacao que deseja efetuar: [a] -> Adicao; [s] -> Subtracao; [m] -> Multiplicacao; [d] -> Divisao; ");
    scanf(" %s", operacao);

    switch (operacao)
    {
        case 'a':
            printf("%d + %d = %d", n1,n2,n1+n2);
            break;
        case 's':
            printf("%d - %d = %d", n1,n2,n1-n2);
            break;
        case 'm':
            printf("%d * %d = %d", n1,n2,n1*n2);
            break;
        case 'd':
            printf("%d / %d = %d", n1,n2,n1/n2);
            break;
        default:
            printf("Operacao invalida");
    }

    return 0;
}




