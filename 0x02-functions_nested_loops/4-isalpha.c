/**
 * _isalpha - is an Alphabet
 * @c: The character to test
 *
 * Return: 1 (Alphabet)
 * 0 otherwise
 */
int _isalpha(int c)
{
	if  ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
