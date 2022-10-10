#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int x;
    printf("Introduza um numero: ");
    scanf("%d", &x);

    if (x>=0)
        printf("O numero é positivo");
    else
        printf("O numero é negativo");
    
    return 0;
}
