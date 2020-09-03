#include <stdio.h>
#include <math.h>

// (x2 + x *y + Z-Y)2 > (x+ x)*(y + Z-Y)2 X=3 Y=7 Z=10

int main(void)
{
	int x, y, z, result;

	x = 3;
	y = 7;
	z = 10;

	if (pow(((x*2) + x * y + z - y), 2) > pow(((x + x)*(y + z - y)), 2))
		printf("Verdadeiro\n");
	else
		printf("Falso\n");

	return 0;
}
