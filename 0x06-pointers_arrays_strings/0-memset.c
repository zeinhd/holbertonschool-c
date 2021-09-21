/**
 *_memset - memory fill  with a constant bytes
 * @s: A pointer
 * @b: char b
 * @n: bytes
 *
 * Return: pointer Char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
