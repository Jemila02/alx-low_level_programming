#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Prints alphabets lowercase and uppercase'
 *Return: always 0
 */
int main(void)
{
	int n = 97;
	int o = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (o <= 90)
	{
		putchar(0);
		n++;
	}
	putchar('\n');
	return (0);
}
