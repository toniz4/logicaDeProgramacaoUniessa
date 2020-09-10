#include <stdio.h>

int main(void)
{
	int x, y;

	printf("Digite os dois lados do retângulo\n");
	scanf("%d %d", &x, &y);

	printf("Área = %d\n", (x*y));
	return 0;
}
