#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("Digite 3 numeros: ");
	scanf("%d %d %d", &x, &y, &z);

	printf("Média: %.2f\n", (float) ((x+y+z)/3));
	return 0;
}
