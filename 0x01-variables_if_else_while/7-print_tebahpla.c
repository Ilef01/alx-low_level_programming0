#include<stdio.h>
/**
 * main - Entry point
 * This function prints the lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
