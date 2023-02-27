#include "main.h"

/**
 * rev_string - string
 * @s: string
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int string, right, left;

	for (right = 0; s[right]; right++)
		;
	for (left = 0; left < right / 2; left++)
	{
		string = s[left];
		s[left] = s[right - left - 1];
		s[right - left - 1] = string;
	}
}
