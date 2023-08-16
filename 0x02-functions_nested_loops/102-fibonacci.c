#include <stdio.h>

/**
 * main - prints sum of even-valued fibonacci numbers under 4,000,000
 * Return: 0 if succesfull
 */

int main(void)
{
	int i;
	long int a, b, sum;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);

	for (i = 0; i < 48; i++)
	{
		sum = a + b;
		printf(", %ld", sum);
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
