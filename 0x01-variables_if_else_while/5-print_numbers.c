#include <stdio.h>
/**
 * main - Entry point
 * This function prints all single digit numbers of base 10
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
