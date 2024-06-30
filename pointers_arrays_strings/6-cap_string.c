#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i;

    for (i = 0; separators[i] != '\0'; i++)
    {
        if (c == separators[i])
        {
            return 1;
        }
    }

    return 0;
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    char *ptr = str;
    int capitalize_next = 1;

    while (*str != '\0')
    {
        if (is_separator(*str))
        {
            capitalize_next = 1;
        }
        else if (capitalize_next && *str >= 'a' && *str <= 'z')
        {
            *str -= ('a' - 'A');
            capitalize_next = 0;
        }

        str++;
    }

    return (ptr);
}
