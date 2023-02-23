#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: size of machines
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;
	int a;
	long int b;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Sizze of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));

	return (0);
}
