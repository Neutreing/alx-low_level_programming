#include "main.h"

/**
 * _strlen - the name of function
 * @s: parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int a;
	int count = 0;

	for (a = 0; s[a] != '\0'; a++)
		count++;
	return (count);
}
