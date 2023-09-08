#include <stdio.h>
/**
 * main - Entry point
 * This function prints all numbers of base 16
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar((char)i);
	for (c = 'a'; c < 'g'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
