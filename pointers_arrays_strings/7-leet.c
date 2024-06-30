#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *letters = "aAeEoOtTlL";
	char *leet_encode = "4433007711";

	for (; *str != '\0'; str++)
	{
		char *l = letters;
		char *e = leet_encode;

		for (; *l != '\0'; l++, e++)
		{
			if (*str == *l)
			{
				*str = *e;
				break;
			}
		}
	}

	return (ptr);
}
