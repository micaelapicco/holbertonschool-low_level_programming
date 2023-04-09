#include "main.h"
/**
 * flip_bits - return the number of bits you would need to flip to get
 * from one number to other
 * @n: number
 * @m: flip other number
 * Return: Nothing.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{ /*calculate XOR between n and m, this produced 1 if bits are diferents
	or 0 if bits are the same*/
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	/*with loop count number of bits are necessary change, using & 1
	 * and increse the counter and move one 1 bit using result*/
	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	/*return the number of bits that fliped to changed n for m*/
	return (count);
}
