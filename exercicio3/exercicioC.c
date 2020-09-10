#include <stdio.h>

int main(void)
{
	double a, b, res;

	printf("Digite a e b: ");
	scanf("%lf %lf", &a, &b);

	res = (double) a * (-b/a) + b;

	printf("f(x) = ax + b = %.2f\n", res);
	return 0;
}
