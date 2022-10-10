#include <stdio.h>
#include <locale.h>

#define PI 3.14
#define FIM "Fim do programa"

int main(){
    setlocale(LC_ALL, "Portugurese");
    float raio, perimetro, area;
    printf("Introduza o valor: ");
    scanf("%f", &raio);
    perimetro = 2 * PI * raio;
    area = PI * raio * raio;

    printf("O valor do perimetro � %.1f e o valor da area � %.2f \n", perimetro, area);
    printf(FIM);
    return 0;
}
