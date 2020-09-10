#include <stdio.h>

int main(void)
{
	double altura, peso;

	printf("Digite sua altura em m: ");
	scanf("%lf", &altura);

	printf("Peso ideal: %.2lf\n", ((62.1*altura) - 44.7));
	return 0;
}
