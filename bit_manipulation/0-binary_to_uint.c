#include "main.h"
/**
 * binary_to_uint - function that cconverts a binary number to an unsigned int
 * @b: number binary
 * Return: 0 if one more chars in the string that is nos 0 or 1
 * 0 if b is null or return the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);
	/* move on b pointer and move result, if b is 1 save result
	 * and return result*/
	for (; *b; b++)
	{
		result <<= 1;

		if (*b == '1')
			result |= 1;

		else if (*b != '0')
			return (0);
	}
	return (result);

}
