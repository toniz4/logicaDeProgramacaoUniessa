#include <stdio.h>

int main(void)
{
	double base, altura, area;

	printf("Digite a medida da base do triangulo:\n");
	scanf("%lf", &base);
	printf("Digite a medida da altura do triangulo:\n");
	scanf("%lf", &altura);

	area  = (base * altura) / 2;

	printf("A area é = %.2lf\n", altura);
	return 0;
}
