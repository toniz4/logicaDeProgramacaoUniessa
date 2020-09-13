#include <stdio.h>

int main(void)
{
	double n1, n2, n3, med;

	printf("Digite as 3 notas do aluno: ");
	scanf("%lf %lf %lf", &n1, &n2, &n3);

	med = (n1 + n2 + n3) / 3;

	printf("Média = %.2lf\n", med);
	if (med < 7.0)
		printf("Reprovado.\n");
	else
		printf("Aprovado.\n");
	return 0;
}
