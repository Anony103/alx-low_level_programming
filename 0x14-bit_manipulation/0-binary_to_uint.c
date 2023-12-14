#include "main.h"

/**
 * binary_to_unit - coverts a binary number to an unsigned int
 * @b: Pointer to string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL or contains non-binary chars
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int i = 0;

	if (b == NULL)
		return 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return 0;

		dec <<= 1;
		if (b[i] == '1')
			dec += 1;

		i++;
	}

	return dec;
}
