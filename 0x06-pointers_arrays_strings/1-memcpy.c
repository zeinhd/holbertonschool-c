/**
 * _memcpy - copy memory
 * @dest: dest
 * @src: src.
 * @n: byte to copy from src
 *
 * Return: char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
