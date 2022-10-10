#include <stdio.h>

int main(void) {
    int n1, n2;
    char operacao, decisao='y';

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
	while (decisao == 'y')
	{
        printf("Escolha a operacao que deseja efetuar: [a] -> Adicao; [s] -> Subtracao; [m] -> Multiplicacao; [d] -> Divisao; ");
        scanf(" %c", &operacao);    
        
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
			};
			
		printf("\n Deseja escolher uma outra operacao? [y], [n] >");
		scanf(" %c", &decisao);
        getchar();
    }

	return 0;
}





