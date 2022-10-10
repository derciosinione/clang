#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int x;
    printf("Introduza um numero: ");
    scanf("%d", &x);

    if (x%2!=0)
        printf("O numero eh impar");
    else
        printf("O numero eh par");
    
    return 0;
}
