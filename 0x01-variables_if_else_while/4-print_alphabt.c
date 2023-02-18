#include <stdio.h>

/**
 * main - Print alphabet lowercase except q and e
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char t;

	t = 'a';
	while
		(t <= 'z')
		{
			if ((t != 'q' && t != 'e') && t <= 'z')
				putchar(t);
			t++;
		}
	putchar('\n');
	return (0);
}
