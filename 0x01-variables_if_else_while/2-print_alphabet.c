#include <stdio.h>

/**
 * main - Print alphabet lowercase
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char bet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(bet[i]);
	}
	putchar('\n');
	return (0);
}
