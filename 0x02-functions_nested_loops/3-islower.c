/**
 * _islower - test caps
 * @c: The character to test
 *
 * Return: 1 (is lowercase)
 * 0 otherwise
 */
int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
