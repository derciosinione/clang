#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portugurese");
    float n1, n2;
    printf("Introduza o primeiro e o segundo numero: ");
    scanf("%f %f", &n1, &n2);

    
    printf("%.1f * %.1f = %.2f \n", n1, n1, n1*n1);
    printf("%.1f * %.1f = %.2f \n", n2, n2, n2*n2);
    printf("%.1f + %.1f = %.2f \n", n1, n2, n1+n2);
    printf("(%.1f + %.1f)/2 = %.2f \n", n1, n2, (n1+n2)/2);

    return 0;
}
