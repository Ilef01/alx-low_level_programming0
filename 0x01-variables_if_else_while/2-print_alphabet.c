#include <stdio.h>

/**
 * main - Entry point
 * This functions outputs the alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
