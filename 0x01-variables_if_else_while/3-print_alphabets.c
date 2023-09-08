#include <stdio.h>

/**
 * main - Entry point
 * This functions outputs the alphabet in lowercase then uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	for (c='a';c<='z';c++)
		putchar(c);
	for (c='A';c<='Z';c++)
		putchar(c);
	return (0);
}
