#include <main.h>

/**
 *
 * Main - Write a function that concatenates two strings
 *
 * Return a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i , j = 0;
	while (src[i] != '\0')
	{

	dest[j] = src[i];
	i++;
	j++;
	}

	dest[j] = '\0';

	return (dest);
}
