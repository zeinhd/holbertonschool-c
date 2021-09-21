#include <stdio.h>
/* project nb 7 */

/**
 *main- Reverse alphabets
 *Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
