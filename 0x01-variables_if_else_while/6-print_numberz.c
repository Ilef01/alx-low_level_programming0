#include <stdio.h>
/**
 * main - Entry point
 * This function prints numbers of base 10 starting from 0
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar((char)i);
	putchar('\n');
	return (0);
}
