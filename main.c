#include <stdio.h>
#include <locale.h>

int main() {
    int n1=0;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("O numero digitado eh %d", n1);
    return 0;
}
